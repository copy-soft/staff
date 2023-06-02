#include <map>
enum PlayerClass {
    WARRIOR, PRIEST, MAGE, 
};
class Stats{
public:
Stats(int hp, int mp,
             int strength, int agility, int resilience, int deftness,
             int charm, int magical_mending, int magical_might) {

    this->hp = hp;
    this->mp = mp;
    this->strength = strength;
    this->agility = agility;
    this->resilience = resilience;
    this->deftness = deftness;
    this->charm = charm;
    this->magical_mending = magical_mending;
    this->magical_might = magical_might;
}
    int hp;
    int mp;
    int strength;
    int agility;
    int resilience;
    int deftness;
    int charm;
    int magical_mending;
    int magical_might;
};

std::map<PlayerClass, Stats*> classToStats = {
{PlayerClass::WARRIOR, new Stats(26, 4, 18, 4, 18, 5, 4, 0, 0)},
{PlayerClass::PRIEST, new Stats(19, 14, 9, 14, 9, 9, 7, 18, 0)}
    // ...
};

int main(){}
