#ifndef TYPES_H
#define TYPES_H

#include <sys/types.h>

// Define types for better abstraction and modularity

typedef struct {
    int fd;
    char *data;
    size_t data_len;
} ClientConnection;

struct ConnectionPool {
    int max_connections;
    int current_connections;
    ClientConnection *connections;
};

struct EventLoop {
    int epoll_fd;
    int kqueue_fd;
};

struct Server {
    struct ConnectionPool *pool;
    struct EventLoop *event_loop;
};

#endif // TYPES_H
