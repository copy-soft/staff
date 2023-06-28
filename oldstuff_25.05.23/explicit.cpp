#include <iostream>
class A{};
class Im{
	public:
  	Im(){};
  	Im(int){};
  	Im(int, int){};
};

void read_im(const Im&){};

void test_im() {
  Im i1;
  Im i2 = Im();
  Im i3 = Im(1);
  Im i4 = Im(1, 2);
  Im i5 = {};
  Im i6 = 1;
  Im i7 = {1};
  Im i8 = {1, 2};
  read_im({});
  read_im(1);
  read_im({1});
  read_im({1, 2});
}
struct Ex {
  explicit Ex(){};
  explicit Ex(int){};
  explicit Ex(int, int){};
};
void read_ex(const Ex&){};

void test_ex() {
  Ex e1;
  Ex e2 = Ex();
  Ex e3 = Ex(1);
  Ex e4 = Ex(1, 2);
  read_ex(Ex());
  read_ex(Ex(1));
  read_ex(Ex(1, 2));
}




int main(){
	


A a1;
A a2 = a1;

test_im();
test_ex();
	return 0;
}
