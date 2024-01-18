#include <sys/epoll.h>
#include <unistd.h>
#include <vector>

class EventLoop {
public:
  EventLoop() : epollfd{0} {
    connections.resize(100); // Allocate for 100 connections for the time being
  }
  void init();

private:
  std::vector<int> connections; // TO-DO create connection class instead
  int epollfd;
};
