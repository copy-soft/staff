#include <ctime>
#include <chrono>
#include <iostream>
#include <deque>
#include <map>
#include <string>
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
Barrier
};

class Card{
	public:
	int num;
	std::string name;
	enum CardType type;
};
typedef std::map<int, Card> card;
typedef std::map<CardType, int> CardList;

class Hero{
	public:
	std::string name;
	CardList cardlist;
	int Skills;
};
class Location{
	public:
	std::string name;
	CardList cardlist;

};
static card cards = {{1,{1, "BLESSING OF THE GOODS",Blessing}},
		{2,{2, "THIEVES TOOLS", Item}},
		{3,{3, "LEATHER ARMOR", Armor}},
		{4,{4, "SHERIFF HEMLOCK", Ally}},
		{5,{5, "BURGLAR", Ally}},
		{6,{6, "POTION OF VISION", Item}},
		{7,{7, "HOLY CANDLE", Item}},
		{8,{8, "CROWBAR", Item}},
		{9,{9, "DART", Weapon}},
		{10,{10, "DAGGER", Weapon}}

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
	Location Farm;
	std::deque<Card> d;
	//std::deque<Ca> dn;
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
        //for(int i=0;i<10;i++)dn.push_back(rand() % 11);

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
	for (Card c : d)
        std::cout<<cards[c.num].name<<" "<<cards[c.num].type<<std::endl;
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
