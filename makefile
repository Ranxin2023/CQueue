CC=gcc
CFLAGS=-Wall -Werror
DEPS=queue.h 
SRCS=main.c queue.c
OBJECTS=$(SRCS:.c=.o)
TARGET=qdemo

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	if exist *.o del *.o
	if exist $(TARGET).exe del $(TARGET).exe