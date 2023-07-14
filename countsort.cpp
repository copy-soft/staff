#include <ctime>
#include <chrono>
#include <iostream>
#include <deque>
#include <map>
#include <string>
#include <vector>
enum CardType{
//hero
Weapon,
Spell,
Armor,
Item,
Ally,
Blessing,
//location
Monster,
Barrier,
//boss
//Villain,
//Henchmen
};
enum CharType{
STR,
DEX,
CON,
INT,
WIS,
CHA,
NONE
};
enum Dice{
d4,
d6,
d8,
d10,
d12,
d20
};
class Card{
	public:
	int num;
	std::string name;
	enum CardType type;
	int Diff;
	enum CharType ctype;
	int Diff2;
	enum CharType ctype2;
	
};
typedef std::map<int, Card> card;
typedef std::map<CardType, int> CardList;
typedef std::map<CharType, Dice> Skills;
class Hero{
	public:
	std::string name;
	CardList cardlist;
	//static card cards;
	Skills skills;
};
class Location{
	public:
	std::string name;
	CardList cardlist;
	//static card cards;

};
card cards = {{1,{1, "BLESSING OF THE GOODS",Blessing, 0, NONE}},
		{2,{2, "THIEVES TOOLS", Item, 4, DEX}},
		{3,{3, "LEATHER ARMOR", Armor, 3, CON}},
		{4,{4, "SHERIFF HEMLOCK", Ally, 8, CHA}},
		{5,{5, "BURGLAR", Ally, 7, DEX, 8, CHA}},
		{6,{6, "POTION OF VISION", Item, 4, INT}},
		{7,{7, "HOLY CANDLE", Item, 10, WIS}},
		{8,{8, "CROWBAR", Item, 3, STR}},
		{9,{9, "DART", Weapon, 4, DEX}},
		{10,{10, "DAGGER", Weapon, 3, DEX, 3, STR}},
		/*{11,{11, "JUBRAIL VHISKI", Monster, 10}},//recharge 2 cards
                {12,{12, "BANDIT", Monster, 10}},//recharge 1 card
                {13,{13, "GOBLIN WARRIOR", Monster, 9}},
                {14,{14, "PIT TRAP", Barrier, 7, INT, 8, DEX}},
                {15,{15, "ZOMBIE", Monster, 9}},
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
	std::deque<Card> d;
	std::deque<Card> dn;
	//d.push_front(13);
	//d.push_back(25);
	//for (int n : d)
        //std::cout << n << ' ';
	//std::cout << '\n';
	//std::deque<char> chars{'A', 'B', 'C', 'D'};
	//for (; !chars.empty(); chars.pop_front())
        //std::cout << "chars.front(): '" << chars.front() << "'\n";

	//int arr[10] = {0};
        //int n = sizeof(arr)/sizeof(arr[0]); 
        srand(time(NULL));
	for(int i=1;i<16;i++){Card f{rand()%10+1};d.push_back(f);}
        for(int i=1;i<11;i++){Card s{rand()%10+1};dn.push_back(s);}

        //LogDuration ld("countsort");
        //{

	//int output[n]; 
C1:;    int count[d.size()]={0};
	int i, j, n=d.size(); 
	//clock_t t1;
C2:;	for(i = n-1;i>=1; --i)
   	for (j=i-1;j>=0;--j){
   	if (d[i].num-d[j].num>0)
   	{
	++count[i];
	//t1 = clock();
	//printf ("%f ",((double)t1)/CLOCKS_PER_SEC);
	//printf("i=%i j=%i [%i > %i]",i,j, arr[i],arr[j]);
	//for (int k = 0; k < n; ++k)
	//printf(" %i",count[k]); 
	//printf("  inversion count i\n");
	}else{
	++count[j];
	//t1 = clock();
	//printf ("%f ",((double)t1)/CLOCKS_PER_SEC);
	//printf("i=%i j=%i [%i < %i]",i,j, arr[i],arr[j]);
	//for (int k = 0; k < n; ++k)
	//printf(" %i",count[k]);
	//printf("  not inversion count j\n");
	}
	}
   	std::vector<Card> hand;
	for(int y = 0; y < 5; y++){
	//Card f{rand()%10+1};	
	hand.push_back(d.front());
		d.pop_front();
	}
	//for (Card c : d)
        //std::cout << cards[c.num].name << " "<< cards[c.num].type << std::endl;
	std::cout<<"Hand:"<<std::endl;
	for(Card c : hand)
        std::cout << cards[c.num].name << " "<< cards[c.num].type << std::endl;
	std::cout<<"Move:"<<std::endl;
	//for (Card c : dn)
	std::cout << cards[dn.front().num].name 
	<< " " << cards[dn[0].num].type 
	<< " diff: " << cards[dn[0].num].Diff 
	<< " type: " << cards[dn[0].num].ctype 
	<< std::endl;
	switch(Merisiel.skills[cards[dn[0].num].ctype])
	{
	case d4:
		std::cout<<"d4 roll: "<<rand()%4+1<<std::endl;
		break;
        case d6:
		std::cout<<"d6 roll: "<<rand()%6+1<<std::endl;
		break;
        case d8:
		std::cout<<"d8 roll: "<<rand()%8+1<<std::endl;
		break;
        case d10:
		std::cout<<"d10 roll: "<<rand()%10+1<<std::endl;
		break;
        case d12:
		std::cout<<"d12 roll: "<<rand()%12+1<<std::endl;
		break;
        case d20:
		std::cout<<"d20 roll: "<<rand()%20+1<<std::endl;
		break;

	};

	//else std::cout << c.num << std::endl;
        //std::cout << '\n';
	//std::cout<<cards[1].name<<std::endl;
	//for (Card c : d)
        //std::cout << c.num << ' ' << "type" << std::endl;
        //std::cout << '\n';

   	//for (i = 0; i < n; ++i)
	//std::cout<<arr[i]<< " "; 
	//std::cout<<std::endl;	
	//}
	return 0; 
} 
