main: main.c
	cc ./main.c -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o ./build/main

build: build
	./build/main