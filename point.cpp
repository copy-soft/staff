#include <iostream>
using namespace std;
typedef struct{
int x,y;
}point;

class Node{
	public:
	Node *forward;
	Node *back;
	point *p;
};



int main(){

Node *n = new Node();
n->p=new point();
n->p->x=1;
n->p->y=1;
Node *n1=n;
for(int i = 0; i<10;i++){
	n1->forward=new Node;
	n1->forward->p=new point();
	n1->forward->p->x=i;
	n1->forward->p->y=i;
	n1=n1->forward;

}
Node *node=new Node();
node=n;
cout<<"x "<<"y"<<endl;
for(int j=0;j<10;j++){

cout<<node->p->x<<" ";
cout<<node->p->y<<endl; 
node=node->forward;
}
	

return 0;
}
