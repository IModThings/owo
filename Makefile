# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS += -g -Wall

# the build target executable:
TARGET = owo

PREFIX ?= /usr/local

all: $(TARGET)

install: $(TARGET)
	install $< $(DESTDIR)$(PREFIX)/bin

clean:
	$(RM) $(TARGET)
