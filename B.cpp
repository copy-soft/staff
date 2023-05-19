#include <string>
class B{
	//std::string intim;
	public:
	B(std::string shashlik, std::string nashinal):intim{shashlik}, nashinal{nashinal}{}
	private:
	std::string intim;
	std::string nashinal;
};
int main(){

	B b{"korova","lizgin"};

return 0;
}
