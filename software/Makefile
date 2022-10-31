CC = gcc

BUILD_DIR = build

CFLAGS = -Wall -I source -I test/types -I test/spec
LDFLAGS = -I source
LLTLDFLAGS = -I source -I test/types -I test/spec

SOURCE = $(wildcard source/*.c)
LLT_SOURCE = $(wildcard test/impl/*.c)

APP_FILE = main.c $(SOURCE)
LLT_FILE = all_tests.c $(LLT_SOURCE) $(SOURCE)

APP_OBJECT = $(APP_FILE:.c=.o)
LLT_OBJECT = $(LLT_FILE:.c=.o)

APP_OBJECT_PATH = $(foreach dir, $(APP_OBJECT), $(addprefix $(BUILD_DIR)/,$(dir)))
LLT_OBJECT_PATH = $(foreach dir, $(LLT_OBJECT), $(addprefix $(BUILD_DIR)/,$(dir)))


EXEC = RaspAppli RaspAppli_llt

all: $(EXEC)

dir:
		@mkdir -p build
		@mkdir -p build/source
		@mkdir -p build/test/impl

RaspAppli: $(APP_OBJECT)
		$(CC) -o $@ $^ $(LDFLAGS)

RaspAppli_llt: $(LLT_OBJECT)
		$(CC) -o $@ $^ $(LLTLDFLAGS)

%.o: %.c
		$(CC) -o build/$@ -c $< $(CFLAGS)
		@cp -r build/source ./
		@cp -r build/test ./
		@cp build/*.o ./

.PHONY: clean

clean:
	@rm -rf source/*.o
	@rm -rf *.o
	@rm -rf test/impl/*.o
	