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
CHA
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

class Hero{
	public:
	std::string name;
	CardList cardlist;
	//static card cards;
	int Skills;
};
class Location{
	public:
	std::string name;
	CardList cardlist;
	//static card cards;

};
card cards = {{1,{1, "BLESSING OF THE GOODS",Blessing, 0}},
		{2,{2, "THIEVES TOOLS", Item, 4}},
		{3,{3, "LEATHER ARMOR", Armor, 3, CON}},
		{4,{4, "SHERIFF HEMLOCK", Ally}},
		{5,{5, "BURGLAR", Ally}},
		{6,{6, "POTION OF VISION", Item}},
		{7,{7, "HOLY CANDLE", Item}},
		{8,{8, "CROWBAR", Item, 3}},
		{9,{9, "DART", Weapon}},
		{10,{10, "DAGGER", Weapon, 3, DEX, 3, STR}},
		{11,{11, "JUBRAIL VHISKI", Monster, 10}},//recharge 2 cards
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
		{22,{22, "WARLORD", Monster, 9}}

};


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
	for(int i=0;i<15;i++){Card f{rand()%10+1};d.push_back(f);}
        for(int i=0;i<10;i++){Card s{rand()%20+1};dn.push_back(s);}

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
	std::cout << cards[dn[0].num].name << " " << cards[dn[0].num].type << std::endl;
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
