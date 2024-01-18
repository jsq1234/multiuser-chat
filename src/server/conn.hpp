#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <vector>

struct conn {
  int fd_;
  struct sockaddr_in client_addr;
  std::vector<char> recv_data_;
  std::vector<char> send_data_;

public:
  inline int get_fd() const { return fd_; }
  void add_recv_data(const char *buff, size_t len);
};
