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

int add_to_library(const Book){return 0;};


int main(){

Book mybook = { "Hamlet", "Shakespeare" };
add_to_library({"Hamlet", "Shakespeare"});

return 0;
}
