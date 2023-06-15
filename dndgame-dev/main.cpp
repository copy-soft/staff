#include <iostream>
#include "dice.hpp"
#include "creature.hpp"

#include "armor.hpp"
#include "weapons.hpp"
#include "race.hpp"
#include "background.hpp"
#include "character.hpp"
#define dndgame main
int dndgame(int argc, char* argv[]) {
  dnd::creature monster("goblin",15,"neutral evil",7,'S',30,"goblinoid",8,14,10,10,8,8);
   dnd::character player("Vladislak Marsk","WIZARD","HIGH ELF","ACOLYTE",0,10,10,10,10,10,10,false,1);
  dnd::creature* move=new dnd::creature();
   player.setWeapon("LONGSWORD");
  player.setArmor("LEATHER");
  move = &monster;
  int attack,demage;
  const std::string red("\033[0;31m");
  const std::string yellow("\033[0;33m");
  const std::string reset("\033[0m");
  std::set <std::string>tr;
  tr=player.getTraits();
  //std::cout<< player.getLevel()<<std::endl;
  //std::cout<<player.getGp()<<std::endl;
//for(auto i : tr)
  //        std::cout << i << std::endl;
  //for(int i=0;i<tr.size();i++)
  //for (auto it = tr.begin(); it != tr.end(); ++it)
    //  {
      //  std::cout<<tr[it]<<std::endl;
    // }
  // std::cout<<abilities["STR"]<<std::endl;
  //std::cout<<dnd::dices[0]<<std::endl;
// for(auto& item : _textures)
// {
 //      cout << item.first << " : " << item.second << endl; //Вывод ключей и значений
 //}

  //std::cout<<player.getHP()<<std::endl;
//std::cout<<dnd::d6.nums<<std::endl;
 // std::cout<<player.defense()<<std::endl;
//minimax(0,demage,true,attack,7) ;


bool mod=false;
  while(1){
   mod=!mod;
   attack=mod?player.attackRoll():(dnd::d20.roll()+4);
   demage=mod?player.damageRoll():(dnd::d6.roll()+2);
    //ap=monster.getAC();
   move=mod?&monster:&player;


    if(attack < move->getAC()){
move=mod?&player:&monster;
 std::cout << move->getName() <<" attack ";
 move=!mod?&player:&monster;
 std::cout <<   move->getName()    <<yellow <<" miss("
 << attack <<")"<<reset << std::endl;
std::cin.get();
    }else{

      move->damage(demage);
      move=mod?&player:&monster;
     std::cout << move->getName() <<" attack ";
     //move=(mod)?(dnd::character*)&monster:&player;
     move=!mod?&player:&monster;
     std::cout<<  move->getName() <<red<<" hit("
     << attack << ") "<< demage << "dm" <<reset<<std::endl;
     //move=(!mod)?(dnd::character*)&monster:&player;
     if (move->getHP()<=0)break;

    }
      }
   move=mod?&player:&monster;
  //if(monster.getHP()<=0)
std::cout << move->getName() <<red<< " kill " <<reset;
    move=!mod?&player:&monster;
  std::cout  << move->getName() << std::endl;
  return 0;
  }
