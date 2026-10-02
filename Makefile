CC=gcc
CFLAGS=-Wall -Wextra -Werror -O2
SRCS=src/main.c
OBJS=$(SRCS:.c=.o)
TARGET=async-epoll-kqueue-pool

all: $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

clean:
	@rm -f $(OBJS) $(TARGET)
	@echo 'Cleaned up.'