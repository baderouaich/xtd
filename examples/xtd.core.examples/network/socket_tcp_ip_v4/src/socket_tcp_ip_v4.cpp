#include <xtd/net/sockets/socket>
#include <xtd/net/ip_end_point>
#include <xtd/console>
#include <thread>

using namespace std;
using namespace std::this_thread;
using namespace xtd;
using namespace xtd::net;
using namespace xtd::net::sockets;

auto main()->int {
  auto terminate_app = false;
  
  auto server = thread {[&] {
    auto server_socket = socket {address_family::inter_network, socket_type::stream, protocol_type::tcp};
    server_socket.bind(ip_end_point {ip_address::any, 9400});
    server_socket.listen();
    auto new_socket = server_socket.accept();
    
    while (!terminate_app) {
      auto buffer = vector<unsigned char>(256);
      auto number_of_byte_received = new_socket.receive(buffer);
      if (number_of_byte_received) console::write_line(ustring {buffer.begin(), buffer.begin() + number_of_byte_received});
    }
  }};
  
  auto client = thread {[&] {
    auto client_socket = socket {address_family::inter_network, socket_type::stream, protocol_type::tcp};
    client_socket.connect(ip_address::loopback, 9400);
    
    auto counter = 0;
    while (!terminate_app) {
      auto str = ustring::format("counter={}", ++counter);
      client_socket.send(vector<unsigned char> {str.begin(), str.end()});
      sleep_for(50_ms);
    }
  }};
  
  console::read_key();
  terminate_app = true;
  server.join();
  client.join();
}

// This code produces the following output:
//
// counter=1
// counter=2
// counter=3
// counter=4
// counter=5
// ...
