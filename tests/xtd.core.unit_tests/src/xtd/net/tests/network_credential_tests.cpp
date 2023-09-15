#include <xtd/net/network_credential>
#include <xtd/tunit/assert>
#include <xtd/tunit/test_class_attribute>
#include <xtd/tunit/test_method_attribute>

using namespace xtd;
using namespace xtd::net;
using namespace xtd::tunit;

namespace xtd::net::tests {
  class test_class_(network_credential_tests) {
  public:
    void test_method_(create_with_default_constructor) {
      network_credential nc;
      assert::is_empty(nc.user_name(), csf_);
      assert::is_empty(nc.password(), csf_);
      assert::is_zero(nc.secure_password().size(), csf_);
      assert::is_empty(nc.domain(), csf_);
    }
    
    void test_method_(create_with_user_name_and_password) {
      network_credential nc("gammasoft", "sysadmin!nimdasys");
      assert::are_equal("gammasoft", nc.user_name(), csf_);
      assert::are_equal("sysadmin!nimdasys", nc.password(), csf_);
      assert::are_equal("sysadmin!nimdasys", nc.secure_password().to_unsecure_string(), csf_);
      assert::is_empty(nc.domain(), csf_);
    }
    
    void test_method_(create_with_user_name_password_and_domain) {
      network_credential nc("gammasoft", "sysadmin!nimdasys", "domain");
      assert::are_equal("gammasoft", nc.user_name(), csf_);
      assert::are_equal("sysadmin!nimdasys", nc.password(), csf_);
      assert::are_equal("sysadmin!nimdasys", nc.secure_password().to_unsecure_string(), csf_);
      assert::are_equal("domain", nc.domain(), csf_);
    }
  };
}
