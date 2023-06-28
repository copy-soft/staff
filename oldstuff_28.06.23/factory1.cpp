#include <iostream>

class Texture{};
class Mesh{};
class Item{};

class Factory{
	public:
	Texture *CreateTexture();
	Mesh *CreateMesh();
	Item *CreateItem();

};

Texture* Factory::CreateTexture(){return new Texture;}
Mesh* Factory::CreateMesh(){return new Mesh;}
Item* Factory::CreateItem(){return new Item;}
int main(){

Factory F;
Texture *t=F.CreateTexture();
	return 0;
}
