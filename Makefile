main: main.o battle.o character.o
	g++ main.o battle.o character.o -o main
main.o: main.cpp
	g++ main.cpp -c
battle.o: battle.cpp
	g++ battle.cpp -c
character.o: character.cpp
	g++ character.cpp -c
clean:
	rm -rf main.o battle.o character.o
