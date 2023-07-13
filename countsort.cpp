#include <ctime>
#include <chrono>
#include <iostream>
#include <deque>
#include <map>
#include <string>
class Card{
	public:
	int num;
	std::string name;

};

typedef std::map<int, Card> card;
static card cards = {{1,{1, "BLESSING OF THE GOODS"}},
		{2,{2, "THIEVES TOOLS"}},
		{3,{3, "LEATHER ARMOR"}},
		{4,{4, "SHERIFF HEMLOCK"}},
		{5,{5, "BURGLAR"}},
		{6,{6, "POTION OF VISIBLE"}},
		{7,{7, "HOLY CANDLE"}},
		{8,{8, "CROWBAR"}},
		{9,{9, "DART"}},
		{10,{10, "DAGGER"}}

};


void shuffle(int* arr, int N)
{
    srand(time(NULL));
 
    for (int i = N - 1; i >= 1; i--)
    {
        int j = rand() % (i + 1);
 
        int tmp = arr[j];
        arr[j] = arr[i];
        arr[i] = tmp;
    }
}


int main(){ 
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
	for(int i=0;i<10;i++){Card f{rand()%11+1};d.push_back(f);}
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
        std::cout<<cards[c.num].name<<std::endl;
	//else std::cout << c.num << std::endl;
        //std::cout << '\n';
	//std::cout<<cards[1].name<<std::endl;
	//for (int c : dn)
        //std::cout << c << ' ';
        //std::cout << '\n';

   	//for (i = 0; i < n; ++i)
	//std::cout<<arr[i]<< " "; 
	//std::cout<<std::endl;	
	//}
	return 0; 
} 
