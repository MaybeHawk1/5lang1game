all:
	mkdir bin
	gcc -o bin/c-game src/game.c
	g++ -o bin/cpp-game src/game.cpp
js:
	cd src
	cd js
	python3 -m http.server 6969
clean:
	rm -r bin
