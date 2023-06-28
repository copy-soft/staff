/*************************************************************************************//**
 *  @file       main.cpp
 *
 *  @brief      Main entry to C-based application  
 *
 *  @date       2020-02-06 17:08
 *         
 **************************************************************************************/

#include <iostream>
#include "node.cpp"
#include "stack.cpp"
#include "queue.cpp"
#include "deck.cpp"
using namespace std;

/******** Function ************************************************//**
 *   @brief     main entry Function
 *
 *   @param     argc - number of parameters pass to the application from 
 *                 command line input (stdin)
 *   @param     argv - array of parameters pass to the application from 
 *                 command line input (stdin)
 *
 *   @return    exit code of the application
 *********************************************************************/


//void visit(struct Node* current ) {
//	printf("%c ", current->GetData());
 //   cout<<current;

//}

int main(int argc, const char **argv)
{


Node* root=new Node('A');
root->SetLeft(new Node('B'));
root->SetRight(new Node('C'));
root->GetLeft()->SetLeft(new Node('D'));
root->GetRight()->SetLeft(new Node('E'));
root->GetRight()->SetRight(new Node('F'));
root->GetRight()->GetLeft()->SetRight(new Node('G'));
root->GetRight()->GetRight()->SetLeft(new Node('H'));
root->GetRight()->GetRight()->SetRight(new Node('J'));


Deck *stack=new Deck;

Node* P=new Node('P');

/* /
P=root;
//do{
//int x=-1;
while(1){
	if(P){
		stack->push(P);
		//visit(P);
		P=P->GetLeft();
		continue;
	}else if (stack->GetHead()){
		//printf("%cn", P->data);
		//if (P->right!=NULL)printf("%cn", P->right->data);
		//if (P->right==NULL && P->left==NULL && stack->top>=0)break;
		//if (stack->top==-1)goto label2;
		P=stack->pop();
		//while(P->left!=NULL){
			visit(P);
		//	if(stack->top==-1)break;
		//	P=pop(stack);
		//	x=1;
		//}       
		//if (x=1){
			P=P->GetRight();
			//x=-1;
		//}
		continue;
	}
break;
}   
//}while(stack->top || P);
*/
stack->push1(root);
//stack->push1(root->GetRight());
//stack->push1(root->GetLeft());
//stack->push1(root->GetLeft()->GetLeft());
//for(Node* node=stack->pop();node;node=stack->pop())cout<<node;
//for(int i=0;i<4;i++)cout<<stack->pop();

//if(stack->pop()==NULL)cout<<"!null"<<endl;
cout<<stack->pop1();



return 0;
}




