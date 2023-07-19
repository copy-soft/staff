#include <ctime>
#include <chrono>
#include <iostream>
#include <deque>
#include <map>
#include <string>
#include <vector>
#include <random>
class dice {
	public:
        int nums;
        explicit dice(int sides = -1);
        ~dice() = default;
        [[nodiscard]] int roll() const;
        dice &operator=(const dice &a) = default;
        bool operator==(const dice &a) const;
        bool operator!=(const dice &a) const;
};

dice d0(0);
dice d1(1);
dice d2(2);
dice d4(4);
dice d6(6);
dice d8(8);
dice d10(10);
dice d12(12);
dice d20(20);
dice d100(100);

typedef std::map<int, dice> dmap;
static dmap dices;


dice::dice(int sides) {
    nums = sides;
}

int dice::roll() const {
    if (nums > 0) {
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::default_random_engine generator(seed);
        std::uniform_int_distribution<int> distribution(1, nums);
        return distribution(generator);
    } else {
        return nums;
    }
}




enum CardType{Weapon,Spell,Armor,Item,Ally,Blessing,Monster,Barrier,};
enum CharType{STR,DEX,CON,INT,WIS,CHA,NONE};
class Card{
	public:
	int num;
	std::string name;
	enum CardType type;
	int Diff;
	enum CharType ctype;
	int Diff2;
	enum CharType ctype2;
	std::string text;	
};
typedef std::map<int, Card> card;
typedef std::map<CardType, int> CardList;
typedef std::map<CharType, dice> Skills;
class Hero{
	public:
	std::string name;
	CardList cardlist;
	int handsize;
	std::vector<Card> hand;
	std::deque<Card> cards;
	Skills skills;
};
class Location{
	public:
	std::string name;
	CardList cardlist;
	std::deque<Card> cards;

};

card cards = {{1,{1, "BLESSING OF THE GOODS", Blessing, 0, NONE, 0, NONE, "If you encounter this card, you automatically acquire it. Discard this card to add 1 die to a check. Discard this card to explore your current location. You may instead treat this card as if it had the same powers as the top card of the blessings discard pile."}}, {2,{2, "THIEVES TOOLS", Item, 4, DEX, 0, NONE, "Reveal this card to add 1 die to your Disable check. Discard this card to defeat a barrier whose highest difficulty to defeat is 11 or lower."}}, {3,{3, "LEATHER ARMOR", Armor, 3, CON, 0, NONE, "Recharge this card to reduce Combat damage dealt to you by 1. Banish this card to reduce all damage dealt to you to 0; if you are proficient with heavy armors, bury this card instead."}}, {4,{4, "SHERIFF HEMLOCK", Ally, 8, CHA, 0, NONE, "Discard this card to add 1d6 to a combat check. Discard this card to explore your location."}}, {5,{5, "BURGLAR", Ally, 7, DEX, 8, CHA, "Recharge this card to add 1d10 to your Stealth or Disable check, or your check to defeat a barrier. If you do not acquire this card, discard 1 weapon or item."}}, {6,{6, "POTION OF VISION", Item, 4, INT, 0, NONE, "Banish this card and chose a character at your location to succeed at a Perception check."}}, {7,{7, "HOLY CANDLE", Item, 10, WIS, 0, NONE, "Bury this card to shuffle 1d6 random cards from the blessings discard pile into the blessings deck."}}, {8,{8, "CROWBAR", Item, 3, STR, 0, NONE, "Reveal this card to add 1 die to your noncombat Strength check or check to defeat a barrier with either the Lock or Obstacle trait; you may additionally ydiscard this card to add another die."}}, {9,{9, "DART", Weapon, 4, DEX, 0, NONE, "For your combat check, reveal this card to roll your Dexterity or Ranged die + 1d4. If you fail a combat check using this weapon, you may discard this card to ignore the result and reroll the dice. You must take the second result."}}, {10,{10, "DAGGER", Weapon, 3, DEX, 3, STR, "For your combat check, reveal this card to roll your Dexterity or Ranged + 1d4; you may additionally recharge this card to add another 1d4. When playing another weapon, you may discard this card to add 1d4 to the combat check."}},{11,{11, "GOBLIN WARRIOR", Monster, 9, STR, 9, DEX, "If undefeated, bury 1 item or weapon of your choice from your discard pile."}},{12,{12, "PIT TRAP", Barrier, 7, INT, 8, DEX, "If defeated, you may immediately explore again. If undefeated, each character at this location is dealt 1d4 Combat damage."}},
                /*{15,{15, "ZOMBIE", Monster, 9}},
                {16,{16, "GIANT GECKO", Monster, 8}},
                {17,{17, "CULTIST", Monster, 9}},
                {18,{18, "SKELETON", Monster, 8}},
                {19,{19, "BUGBEAR", Monster, 10}},
                {20,{20, "GOBLIN COMMANDO", Monster, 9}},
		{21,{21, "SCOUT", Monster, 8}},
		{22,{22, "WARLORD", Monster, 9}}*/};


void shuffle(int* arr, int N)
{
    srand(time(NULL));
 
    for (int i = N - 1; i >= 1; i--)
    {
        int j = rand() % (i + 1);
	std::swap(arr[i],arr[j]); 
        //int tmp = arr[j];
        //arr[j] = arr[i];
        //arr[i] = tmp;
    }
}


int main(){ 
	Hero Merisiel;
	Merisiel.name="Merisiel";
	Merisiel.cardlist={
	{Weapon,2}, 
	{Spell,0},
	{Armor,1},
	{Item,6},
	{Ally,2},
	{Blessing,4},
	};
	Merisiel.skills={{STR, d8}, {DEX, d12}, {CON, d6},{INT, d4}, {WIS, d6}, {CHA, d6}};
	Merisiel.handsize=5;
	Hero Kyra;
        Kyra.name="Kyra";
        Kyra.cardlist={
        {Weapon,2}, 
        {Spell,3},
        {Armor,2},
        {Item,1},
        {Ally,1},
        {Blessing,6}
        };
	Location FarmHouse, Woods, WaterFront;
	Woods.cardlist={//undefeated monsters banished (not vill & hench)
        {Weapon, 1}, //closing: wisdom or survival check 6
        {Spell, 0}, //closed: no
        {Armor, 0},
        {Item, 2},
        {Ally, 0},
        {Blessing, 0},
	{Monster, 4},
	{Barrier, 2}
        };
        srand(time(NULL));
	for(int i=1;i<16;i++){Card f{rand()%10+1};Merisiel.cards.push_back(f);}
        for(int i=1;i<11;i++){Card s{rand()%12+1};Woods.cards.push_back(s);}

	for(int y = 0; y < Merisiel.handsize; y++){
	Merisiel.hand.push_back(Merisiel.cards.front());
		Merisiel.cards.pop_front();
	}
	while(!Woods.cards.empty()){
	std::cout<<"Hand:"<<std::endl;
	int g=1;
	for(Card c : Merisiel.hand)
        {std::cout << g << " " << cards[c.num].name << " "<< cards[c.num].type << std::endl;g++;}

	std::cout<<"Move:"<<std::endl;
	std::cout << cards[Woods.cards.front().num].name 
	//<< " " << cards[dn[0].num].type 
	<< " diff: " << cards[Woods.cards.front().num].Diff 
	//<< " type: " << cards[dn[0].num].ctype 
	<< std::endl;
	std::cout<<cards[Woods.cards.front().num].text<<std::endl;
	std::cout<<"press enter to roll:";
        std::cin.get();
	//if(
	//Merisiel.skills[cards[Woods.cards.front().num].ctype].nums >
	//Merisiel.skills[cards[Woods.cards.front().num].ctype2].nums
	//)
	int x = Merisiel.skills[cards[Woods.cards.front().num].ctype].roll();
	int y = cards[Woods.cards.front().num].Diff;
	std::cout<<"d"<< Merisiel.skills[cards[Woods.cards.front().num].ctype].nums <<" roll: "<< x <<" ; "<< x <<" - "<< y << " = "<< x-y <<std::endl;
	if(x-y>=0||y==0)std::cout<<"score: "<<x-y<<" YOU WIN!"<<std::endl;
	else std::cout<<"score: "<<x-y<<" YOU LOSE!"<<std::endl;
	Woods.cards.pop_front();
	//int u;
	std::cout<<"press enter";
	std::cin.get();
}
	//std::cout<<cards[Merisiel.hand[u].num].name<<std::endl;
	//std::cout<< cards[Merisiel.hand[u].num].text<<std::endl;
	return 0; 
} 
