game: main.o armor.o character.o dice.o race.o background.o creature.o weapons.o classes.o
	g++ main.o armor.o character.o dice.o race.o background.o creature.o weapons.o classes.o -o game
main.o: main.cpp
	g++ -c main.cpp
armor.o: armor.cpp armor.hpp
	g++ -c armor.cpp -std=c++17
character.o: character.cpp character.hpp
	g++ -c character.cpp
dice.o: dice.cpp dice.hpp
	g++ -c dice.cpp
race.o:	race.cpp race.hpp
	g++ -c race.cpp -std=c++17
background.o: background.cpp background.hpp
	g++ -c background.cpp -std=c++17
creature.o: creature.cpp creature.hpp
	g++ -c creature.cpp
weapons.o: weapons.cpp weapons.hpp
	g++ -c weapons.cpp -std=c++17
classes.o: classes.cpp classes.hpp
	        g++ -c classes.cpp
clean:
	rm *.o game



#all:
#	g++ *.cpp -o game -std=c++17
