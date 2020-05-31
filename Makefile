# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS += -g -Wall

# the build target executable:
TARGET = owo

all: $(TARGET)

install: $(TARGET)
	cp $< /usr/bin

clean:
	$(RM) $(TARGET)
