#include <iostream>
#include <string>
class Book {
  std::string title_;
  std::string author_;
public:
  Book(std::string t, std::string a) :
    title_(std::move(t)), author_(std::move(a)) {}
  std::string title() const { return title_; }
  std::string author() const { return author_; }
};

int add_to_library(const Book&){};


struct Person{
	std::string nickname="miki";
};
struct Company{
	Person* ceo;
};
struct Friends{
	Person* friend1;
};
int main(){

Person michael;
//michael.nickname = "Michael";

Person* myFakeTwinBrother;
Company myEmployer;
Friends myFriends;

myFakeTwinBrother=&michael;
myEmployer.ceo=&michael;
myFriends.friend1=&michael;

std::cout<<(*myFakeTwinBrother).nickname<<std::endl;
std::cout<<myFakeTwinBrother->nickname<<std::endl;
std::cout<<myEmployer.ceo->nickname<<std::endl;
std::cout<<myFriends.friend1->nickname<<std::endl;

Book mybook = { "Hamlet", "Shakespeare" };
add_to_library({"Hamlet", "Shakespeare"});

return 0;
}
