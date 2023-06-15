#include "character.hpp"
#include <iostream>
dnd::character::character(const std::string &initname, const std::string &initclass,
                           const std::string &initrace,
                           const std::string &initbg, int level, int strength, int dexterity,
                           int constitution,
                           int intelligence, int wisdom, int charisma, bool isNPC, unsigned long id) {
    /**
     * Creates the character with basic attributes and stats in an easy constructor
     *
     * Very basic and does not include equipment or spells, nor does it return anything
     *
     * @param initname The name of the character
     * @param initclass The class of the character
     * @param initrace The race of the character
     * @param initbg The background of the character
     *
     * @param level The character level
     *
     * @param strength The character's strength (Default 10)
     * @param dexterity The character's dexterity (Defult 10)
     * @param constitution The character's constitution (Default 10)
     * @param intelligence The character's intelligence (Default 10)
     * @param wisdom The character's wisdom (Default 10)
     * @param charisma The character's charisma (Default 10)
     *
     * @param isNPC Demarcates whether this is an NPC or PC
     */

    uid = id;

    name = initname;
    crace = initrace;
    cclass = initclass;
    cbg = initbg;
    clevel = level;
    npc = isNPC;

 abilities = {{"STR", strength},
              {"DEX", dexterity},
              {"CON", constitution},
              {"INT", intelligence},
              {"WIS", wisdom},
              {"CHA", charisma}};

    if (uid) {
        setRace(crace);
        setBG(cbg);
        setClass(cclass);
    }
}

bool dnd::character::operator==(const character &a) const {
    return uid == a.uid;
}

dnd::character &dnd::character::operator=(const character &a) {
    /**
     * Overriding the assignment operator to copy characters completely
     *
     * @param a The input character
     *
     * @return The copied character
     */

    npc = a.npc;

    name = a.name;
    crace = a.crace;
    cclass = a.cclass;
    cbg = a.cbg;
    clevel = a.clevel;

    abilities = a.abilities;

    hp = a.hp;
    ac = a.ac;
    gp = a.gp;
    speed = a.speed;

    equipment = a.equipment;
    misc = a.misc;
    proBonus = a.proBonus;
    proficiencies = a.proficiencies;
    traits = a.traits;
    saves = a.saves;
    languages = a.languages;

    size = a.size;

    vulnerabilities = a.vulnerabilities;
    resistances = a.resistances;
    immunities = a.immunities;
    conditions = a.conditions;

    uid = a.uid;

    return *this;
}

dnd::character &dnd::character::operator>>(const character &a) {
    /**
     * Overriding the right shift operator to soft copy characters
     *
     * Essentially copies equipment; That's all
     *
     * @param a The input character
     *
     * @return The soft copy of the character
     */

    gp = a.gp;

    equipment = a.equipment;
    misc = a.misc;

    return *this;
}

void dnd::character::addTrait(const std::string &name, const std::string &description) {
  traits.emplace(name, description);
}

void dnd::character::delTrait(const std::string &name) {
    traits.erase(name);
}

void dnd::character::addProf(const std::string &name) {
//    proficiencies.push_back(name);
}

void dnd::character::delProf(const std::string &name) {
  //  proficiencies.erase(remove(proficiencies.begin(), proficiencies.end(), name), proficiencies.end());
}

void dnd::character::addItem(const std::string &name) {
    misc.push_back(name);
}

void dnd::character::delItem(const std::string &name) {
    misc.erase(remove(misc.begin(), misc.end(), name), misc.end());
}

void dnd::character::addCondition(const std::string &name) {
    conditions.push_back(name);
}

void dnd::character::delCondition(const std::string &name) {
    conditions.erase(remove(conditions.begin(), conditions.end(), name), conditions.end());
}

void dnd::character::setWeapon(const std::string &inWeapon) {
    equipment[0] = inWeapon;
}

void dnd::character::setArmor(const std::string &inArmor) {
    equipment[1] = inArmor;
}

std::string dnd::character::getWeapon() {
    /**
     * Gets the weapon name
     *
     * @return The weapon name
     */

    return equipment[0];
}

std::string dnd::character::getArmor() {
    /**
     * Gets the armor name
     *
     * @return The armor name
     */

    return equipment[1];
}


short dnd::character::getAC() /*const*/ {
/*
void Character::levelUp() {
 if (this->getLevel() != 20) {
  this->characterLevel++;
  int conModifier = (this->getCharacterAttr()->getConstitution() - 10) / 2;
    if (conModifier <= 0) conModifier = 0;
    vector<int> roll = GameData::gameDice->roll("1d10");
     int hitPointIncrease = modifier(roll[0], conModifier);
    if (hitPointIncrease < 1) hitPointIncrease = 1;
   this->setHitPoint(this->getHitPoint() + hitPointIncrease);
    vector<int> attackBonus;
     attackBonus.push_back(this->getLevel());
     if (this->getLevel() - 5 > 0) {
       attackBonus.push_back(this->getLevel() - 5);
      }
      else {
      attackBonus.push_back(0);
       }
     if (this->getLevel() - 10 > 0) {
      attackBonus.push_back(this->getLevel() - 10);
      }
     else {
     attackBonus.push_back(0);
     }
     if (this->getLevel() - 15 > 0) {
     attackBonus.push_back(this->getLevel() - 15);
     }
     else {
     attackBonus.push_back(0);
     }
      this->setAttackBonus(attackBonus);
          }
      Notify();
}


*/


   std::string armor = getArmor();
   //armor::Armor x = armor::armors[armor];
   int defense=armor::armors[equipment[1]].baseAC;
   for(auto& item :proficiencies )
   if (item==armor::armors[equipment[1]].name)
   //std::cout << item << std::endl;

   defense+=(armor::armors[equipment[1]].dexMax<(abilities.at("DEX")-10)/2) ? armor::armors[equipment[1]].dexMax : (abilities.at("DEX")-10)/2;

  ac=defense;
  //                                   return defense;

  return ac;
}



int dnd::character::attackRoll(){

    int attack=dnd::d20.roll();
    std::cout<<attack<<"+";
    
    int at=(abilities.at("STR")-10)/2;
    std::cout<<at<<"=";
    attack+=at;
    std::cout<<attack<<std::endl;
    attack+=proBonus;
    return attack;

}

int dnd::character::damageRoll(bool mod) {
    /**
     * Used to get the damage from a weapon attack
     *
     * @param mod Whether to add the ability modifier or not; default true
     *
     * @return the damage
     */

    weapons::Weapons weap = weapons::weaps[equipment[0]];

    int att = weap.ability;
    int abi = (att == 1) ? ((abilities.at("STR")-10)/2) : (att == 2) ? ((abilities.at("DEX")-10)/2) : (att == 3)
                                                                                                        ? ((abilities.at("DEX")/2) + 1 >=
                                                                                                           (abilities.at("STR")/2) + 1)
                                                                                                          ? (abilities.at("DEX")/2) + 1
                                                                                                          : (abilities.at("STR")/2) + 1
                                                                                                        : 0;

    int dmg;

    mod ? dmg = abi : dmg = 0;

    for (int i = 0; i < weap.numberDice; ++i) {
        dmg += weap.die.roll();
    }

    dmg+=proBonus;

    return dmg;
}

int dnd::character::rollSkill(const std::string &skill) {
    /**
     * Returns a random dice roll for the provided skill
     *
     * @param skill The skill to roll for
     *
     * @return The roll with skill & proficiency if applicable
     */

    int x = abilities.at(skills[skill]) / 2 + 1;

    if (std::count(proficiencies.begin(), proficiencies.end(), skill)) {
        x += proBonus;
    }

    return d20.roll() + x;
}

int dnd::character::getLevel() const {
          return this->clevel;
}



int dnd::character::save(const std::string &file) const {
    std::ofstream out;
    out.open(file);

    if (out.good()) {
        out << npc << '\n';
        out << name << '\n' << cclass << '\n' << crace << '\n' << cbg << '\n' << clevel << '\n';

        out << abilities.at("STR") << '\n';
        out << abilities.at("DEX") << '\n';
        out << abilities.at("CON") << '\n';
        out << abilities.at("WIS") << '\n';
        out << abilities.at("INT") << '\n';
        out << abilities.at("CHA") << '\n';

        out << hp << "\n" << ac << "\n" << gp << "\n" << speed << "\n";

        if (!equipment.empty()) {
            for (int i = 0; i < equipment.size(); ++i) {
                out << equipment[i];

                if (i == equipment.size() - 1) {
                    out << "\n";
                } else {
                    out << ",";
                }
            }
        } else {
            out << "\n";
        }

        if (!misc.empty()) {
            for (int i = 0; i < misc.size(); ++i) {
                out << misc[i];

                if (i == misc.size() - 1) {
                    out << "\n";
                } else {
                    out << ",";
                }
            }
        } else {
            out << "\n";
        }

        out << proBonus << "\n";

        if (!proficiencies.empty()) {
            for (int i = 0; i < proficiencies.size(); ++i) {
                //out << proficiencies[i];

                if (i == proficiencies.size() - 1) {
                    out << "\n";
                } else {
                    out << ",";
                }
            }
        } else {
            out << "\n";
        }

        if (!languages.empty()) {
            for (int i = 0; i < languages.size(); ++i) {
                out << languages[i];

                if (i == languages.size() - 1) {
                    out << "\n";
                } else {
                    out << ",";
                }
            }
        } else {
            out << "\n";
        }

        if (!saves.empty()) {
            for (int i = 0; i < saves.size(); ++i) {
                out << saves[i];

                if (i == saves.size() - 1) {
                    out << "\n";
                } else {
                    out << ",";
                }
            }
        } else {
            out << "\n";
        }

        out << size << "\n";

        if (!vulnerabilities.empty()) {
            for (int i = 0; i < vulnerabilities.size(); ++i) {
                out << vulnerabilities[i];

                if (i == vulnerabilities.size() - 1) {
                    out << "\n";
                } else {
                    out << ",";
                }
            }
        } else {
            out << "\n";
        }

        if (!resistances.empty()) {
            for (int i = 0; i < resistances.size(); ++i) {
                out << resistances[i];

                if (i == resistances.size() - 1) {
                    out << "\n";
                } else {
                    out << ",";
                }
            }
        } else {
            out << "\n";
        }

        if (!immunities.empty()) {
            for (int i = 0; i < immunities.size(); ++i) {
                out << immunities[i];

                if (i == immunities.size() - 1) {
                    out << "\n";
                } else {
                    out << ",";
                }
            }
        } else {
            out << "\n";
        }

        if (!conditions.empty()) {
            for (int i = 0; i < conditions.size(); ++i) {
                out << conditions[i];

                if (i == conditions.size() - 1) {
                    out << std::endl;
                } else {
                    out << ",";
                }
            }
        } else {
            out << "\n";
        }

        out << uid;

        out.flush();
        out.close();

        std::cout << "WRITTEN" << std::endl;
        return 1;
    } else {
        out.flush();
        out.close();

        std::cerr << "CAN'T WRITE" << std::endl;
        return 0;
    }
}

int dnd::character::load(const std::string &file) {
    std::ifstream fin;
    fin.open(file);

    if (fin.good()) {
        std::string tmp;
        std::string token;
        std::string delim = ",";
        size_t pos = 0;

        getline(fin, tmp);
        std::stoi(tmp) >> npc;
        getline(fin, name);
        getline(fin, cclass);
        getline(fin, crace);
        getline(fin, cbg);
        getline(fin, tmp);
        std::stoi(tmp) >> clevel;

        for (auto &i : abilities) {
            getline(fin, tmp);
            token = tmp.substr(0, tmp.find(delim));
            abilities.at(i.first) = std::stoi(token);
        }

        getline(fin, tmp);
        std::stoi(tmp) >> hp;
        getline(fin, tmp);
        std::stoi(tmp) >> ac;
        getline(fin, tmp);
        std::stoi(tmp) >> gp;
        getline(fin, tmp);
        std::stoi(tmp) >> speed;

        tmp.clear();
        equipment.clear();
        getline(fin, tmp);
        while ((pos = tmp.find(delim)) != std::string::npos) {
            token = tmp.substr(0, pos);
            equipment.push_back(token);
            tmp.erase(0, pos + delim.length());
        }

        tmp.clear();
        misc.clear();
        getline(fin, tmp);
        while ((pos = tmp.find(delim)) != std::string::npos) {
            token = tmp.substr(0, pos);
            misc.push_back(token);
            tmp.erase(0, pos + delim.length());
        }

        getline(fin, tmp);
        std::stoi(tmp) >> proBonus;

        tmp.clear();
        proficiencies.clear();
        getline(fin, tmp);
        while ((pos = tmp.find(delim)) != std::string::npos) {
            token = tmp.substr(0, pos);
            //proficiencies.push_back(token);
            tmp.erase(0, pos + delim.length());
        }

        tmp.clear();
        languages.clear();
        getline(fin, tmp);
        while ((pos = tmp.find(delim)) != std::string::npos) {
            token = tmp.substr(0, pos);
            languages.push_back(token);
            tmp.erase(0, pos + delim.length());
        }

        tmp.clear();
        saves.clear();
        getline(fin, tmp);
        while ((pos = tmp.find(delim)) != std::string::npos) {
            token = tmp.substr(0, pos);
            saves.push_back(token);
            tmp.erase(0, pos + delim.length());
        }

        getline(fin, tmp);
        tmp[0] >> size;

        tmp.clear();
        vulnerabilities.clear();
        getline(fin, tmp);
        while ((pos = tmp.find(delim)) != std::string::npos) {
            token = tmp.substr(0, pos);
            vulnerabilities.push_back(std::stoi(token));
            tmp.erase(0, pos + delim.length());
        }

        tmp.clear();
        resistances.clear();
        getline(fin, tmp);
        while ((pos = tmp.find(delim)) != std::string::npos) {
            token = tmp.substr(0, pos);
            resistances.push_back(std::stoi(token));
            tmp.erase(0, pos + delim.length());
        }

        tmp.clear();
        immunities.clear();
        getline(fin, tmp);
        while ((pos = tmp.find(delim)) != std::string::npos) {
            token = tmp.substr(0, pos);
            immunities.push_back(std::stoi(token));
            tmp.erase(0, pos + delim.length());
        }

        tmp.clear();
        conditions.clear();
        getline(fin, tmp);
        while ((pos = tmp.find(delim)) != std::string::npos) {
            token = tmp.substr(0, pos);
            conditions.push_back(token);
            tmp.erase(0, pos + delim.length());
        }

        getline(fin, tmp);
        std::stoi(tmp) >> uid;

        fin.close();

        std::cout << "READ" << std::endl;
        return 1;
    } else {
        fin.close();

        std::cerr << "CAN'T READ" << std::endl;
        return 0;
    }
}

void dnd::character::levelUp() {
  /*if (this->getLevel() != 20) {
   this->characterLevel++;
   int conModifier = (this->getCharacterAttr()->getConstitution() - 10) / 2;
   if (conModifier <= 0) conModifier = 0;
    vector<int> roll = GameData::gameDice->roll("1d10");
    int hitPointIncrease = modifier(roll[0], conModifier);
       if (hitPointIncrease < 1) hitPointIncrease = 1;
        this->setHitPoint(this->getHitPoint() + hitPointIncrease);
       vector<int> attackBonus;
       attackBonus.push_back(this->getLevel());
        if (this->getLevel() - 5 > 0) {
        attackBonus.push_back(this->getLevel() - 5);
          }
        else {
     attackBonus.push_back(0);
     }
    if (this->getLevel() - 10 > 0) {
     attackBonus.push_back(this->getLevel() - 10);
         }
        else {
       attackBonus.push_back(0);
        }
        if (this->getLevel() - 15 > 0) {
       attackBonus.push_back(this->getLevel() - 15);
       }
       else {
                                                                            attackBonus.push_back(0);
                                                                                 }
                                                                           this->setAttackBonus(attackBonus);
                                                                                     }
*/






  classes::Class x = classes::classs[cclass];
  clevel++;
  if (getLevel() == 1){
     hpmax=x.die.nums+(abilities.at("CON")-10)/2;
     hp=hpmax;
      for(auto i : x.prof)
            proficiencies.insert(i);}
     //proficiencies.insert(proficiencies.end(), x.prof.begin(), x.prof.end());}
  /*
  for(auto& item:x.lmap)
      {
              std::cout << "level "<< item.second.lvl
              <<  " prof bonus "<<item.second.proBonus<< std::endl;
              //<< " : "<< item.second.prof[0];

              //<< item.second.prof[1]<< std::endl;
              //for(int i=0;i<item.second.prof.size();i++)
              // std::cout<< item.second.prof[i] << "   ";
              // for(std::string v : item.second.prof)
              //   std::cout<< v <<", ";

              // proBonus=item.proBonus;
             // if (i>=clevel)break;
             // std::cout<< std::endl;
        }*/
        // for(auto it = x.lvlup.begin(); it != x.lvlup.end(); ++it)
          //   std::cout << it->first << " : " << /*it->second <<*/ std::endl;

//         proficiencies.insert(proficiencies.end(), x.prof.begin(), x.prof.end());}


}

void dnd::character::setRace(const std::string &name) {
    /**
     * Sets the race and abilities and stuff
     *
     * DO NOT RUN AFTER CONSTRUCTION
     */

    race::Race x = race::races[name];

    for (unsigned long i = 0; i < x.abis.size(); ++i) {
        if (x.abis[i] == "HP") {
            hp += x.boosts[i];
        } else {
            abilities.at(x.abis[i]) += x.boosts[i];
        }
    }

    size = x.size;
    speed = x.speed;

    traits.insert(x.traits.begin(), x.traits.end());
    for(auto i : x.prof)
    proficiencies.insert(i);
}

void dnd::character::setBG(const std::string &name) {
    background::Background x = background::bgs[name];

    gp = x.gp;

    for(auto i : x.prof)
       proficiencies.insert(i);
    //proficiencies.insert(proficiencies.end(), x.prof.begin(), x.prof.end());
    misc.insert(misc.end(), x.equip.begin(), x.equip.end());
}
void dnd::character::setClass(const std::string &name){
     //classes::Class x = classes::classs[name];
    levelUp();
     //maxhp+=x.die.nums+(abilities.at("CON")-10)/2;
     //hp=maxhp;
    // for(auto& item:x.lmap)
     // {
        //std::cout << "level "<< item.second.lvl
        //  <<  " prof bonus "<<item.second.proBonus
                // << " : "/*<< item.second.prof[0]*/;
                 ///* << item.second.prof[1]<< std::endl;*/ //<D0><92><D1><8B>
                //for(int i=0;i<item.second.prof.size();i++)
                // std::cout<< item.second.prof[i] << "   ";
         // for(std::string v : item.second.prof)
      //   std::cout<< v <<", ";

                // proBonus=item.proBonus;
                // if (i>=clevel)break;
         // std::cout<< std::endl;
      //}
      //for(auto it = x.lvlup.begin(); it != x.levelup.end(); ++it)
        //    std::cout << it->first << " : " << /*it->second <<*/ std::endl;

     //proficiencies.insert(proficiencies.end(), x.prof.begin(), x.prof.end());
}
std::set<std::string> dnd::character::getTraits(){
return proficiencies;
}
int dnd::character::getGp(){
return gp;
}
