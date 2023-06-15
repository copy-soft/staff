game: main.o D20Abilities.o D20Ability.o D20ArmorClass.o D20Character.o D20BaseAttack.o D20Character.o D20HitPoints.o D20SavingThrow.o D20SavingThrows.o D20Skill.o D20Skills.o Rollable.o
	g++ main.o D20Abilities.o D20Ability.o D20ArmorClass.o D20Character.o D20BaseAttack.o D20HitPoints.o D20SavingThrow.o D20SavingThrows.o D20Skill.o D20Skills.o Rollable.o  -o game
main.o: main.cpp
	g++ -c main.cpp
D20Abilities.o: D20Abilities.cpp D20Abilities.hpp
	g++ -c D20Abilities.cpp 
D20Ability.o: D20Ability.cpp D20Ability.hpp
	g++ -c D20Ability.cpp
D20ArmorClass.o: D20ArmorClass.cpp D20ArmorClass.hpp
	g++ -c D20ArmorClass.cpp
D20BaseAttack.o: D20BaseAttack.cpp D20BaseAttack.hpp
	g++ -c D20BaseAttack.cpp
D20Character.o: D20Character.cpp D20Character.hpp
	g++ -c D20Character.cpp
D20HitPoints.o: D20HitPoints.cpp D20HitPoints.hpp
	g++ -c D20HitPoints.cpp
D20SavingThrow.o: D20SavingThrow.cpp D20SavingThrow.hpp
	g++ -c D20SavingThrow.cpp
D20SavingThrows.o: D20SavingThrows.cpp D20SavingThrows.hpp
	g++ -c D20SavingThrows.cpp
D20Skill.o: D20Skill.cpp D20Skill.hpp
	g++ -c D20Skill.cpp
D20Skills.o: D20Skills.cpp  D20Skills.hpp
	g++ -c D20Skills.cpp
Rollable.o: Rollable.cpp  Rollable.hpp
	g++ -c Rollable.cpp


clean:
	rm *.o game



#all:
#	g++ *.cpp -o game -std=c++17
