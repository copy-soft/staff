#include <iostream>
using namespace std;
class Product{};
class Texture:public Product{public:Texture(){cout<<"Create Texture"<<endl;}};
class Mesh:public Product{};
class Item:public Product{};
enum ProductID {TEXTURE, MESH, ITEM};
//typedef int ProductId;
//#define TEXTURE 0
//#define MESH 1
//#define ITEM 2
class AbstractFactory{
	public:
	Product *Create(ProductID);
};
Product* AbstractFactory::Create(ProductID id)
{
	switch(id){
		case TEXTURE: return new Texture;break;
		case MESH: return new Mesh;break;
		case ITEM: return new Item;break;
	}

}

int main(){

AbstractFactory AF;
Texture *t=AF.Create(TEXTURE);






}
