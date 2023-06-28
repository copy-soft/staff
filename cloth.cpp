#include <iostream>
#include <map>
#include <string>

using namespace std;
int main()
{
    enum Section{START = 0,MID,END};
    map<Section,string> Full;

     Full[START] = "Set";

        //for(int i=0;i<Full.size();i++)
        for(auto const& i:Full)
	cout << i.first <<" "<<i.second<<endl;

}
