#include <iostream>
#include <vector>

#define ITEM_LIST_MACRO Wolf, Goat, Cabbage

enum Item { ITEM_LIST_MACRO }; // Define the enum
int main(){
// Now iterate through it
for (auto item : { ITEM_LIST_MACRO }) {
	std::cout<<item;

}

}
