#ifndef Cloth
#define Cloth
#include <map>
#include <string>
enum Clothings{armor, boots, hats, helmets, cloaks};
std::map<Clothings,std::string> cloth={{armor, "armor"},{boots, "boots"}, {hats, "hats"}, {helmets, "helmets"}, {cloaks, "cloaks"}};

#endif
