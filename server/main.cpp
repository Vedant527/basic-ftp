
#include <iostream>
#include <tcp_server.h>

int main(int argc, char* argv[]) {

    CSP::TCPServer server {CSP::IPV::V4, 1337};

    server.Run();

    return 0;
}