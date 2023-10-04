CC = gcc
CFLAGS = -Wall -Wextra

TARGET = programita-en-c
SOURCE = estricto.c

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)