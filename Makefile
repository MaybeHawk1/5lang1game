all:
	mkdir bin
	gcc -o bin/c-game src/game.c
	g++ -o bin/cpp-game src/game.cpp
clean:
	rm -r bin
