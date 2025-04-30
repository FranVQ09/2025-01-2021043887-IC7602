CC = gcc
CFLAGS = -Wall -g
TARGET = dns_interceptor
OBJS = main.o utils.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o $(TARGET)
