CC=gcc
CFLAGS=-Wall -lcurl

all: health_checker

health_checker: checker.c
	$(CC) $(CFLAGS) -o health_checker checker.c

clean:
	rm -f health_checker
