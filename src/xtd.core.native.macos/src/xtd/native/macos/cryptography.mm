#define __XTD_CORE_NATIVE_LIBRARY__
#include <xtd/native/cryptography.h>
#undef __XTD_CORE_NATIVE_LIBRARY__
#include <unistd.h>
#include <cstdint>

using namespace std;
using namespace xtd::native;

namespace {
  static std::string create_process(const std::string& command) {
    auto fs = popen(command.c_str(), "r");
    std::string result;
    while (!feof(fs)) {
      char buf[513];
      size_t l = fread(buf, 1, 512, fs);
      buf[l] = 0;
      result += buf;
    }
    pclose(fs);
    return result;
  }
}

vector<uint_least8_t> cryptography::machine_guid() {
  static bool first = true;
  static string guid_str = create_process("ioreg -rd1 -c IOPlatformExpertDevice | grep -E '(UUID)'");
  if (first) guid_str = guid_str.substr(guid_str.find("=") + 1);
  first = false;
  
  static const string guid_fallback = "30395f0ed6aa4a5eb4af6f90a608c605";
  static const string hex_chars = "0123456789ABCDEF";
  for (auto index = 0u; guid_str[index] != 0; ++index)
    if (hex_chars.find(static_cast<char>(toupper(guid_str[index]))) == hex_chars.npos)  guid_str.erase(index--, 1);
  if (guid_str.size() != 32) guid_str = guid_fallback;
  
  vector<uint_least8_t> bytes;
  for (auto index = 0u; index < guid_str.size(); index += 2)
    bytes.push_back(static_cast<uint_least8_t>(stoi(guid_str.substr(index, 2), 0, 16)));
  return bytes;
}
