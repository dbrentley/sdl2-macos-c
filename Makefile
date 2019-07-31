CC = gcc
OUT = out
BIN = sdl
all:
	mkdir -p $(OUT)
	$(CC) -Wall -Werror \
		main.c \
		keyboard.c \
		cleanup.c \
		-o $(OUT)/$(BIN) \
		-I/usr/local/include/SDL2 \
		-D_THREAD_SAFE \
		-L/usr/local/lib \
		-lSDL2
clean:
	rm -rf $(OUT)
