#include<stdio.h>
#include<stdlib.h>
//#include<limits.h>

struct Node 
{
char data;
struct Node *left, *right;
};
struct Nodel
{
struct Node *N;
struct Nodel *next, *prev;
};
struct Node* newNode(char data)
{
	struct Node* Node = (struct Node*)malloc(sizeof(struct Node));
	struct Nodel* Nod = (struct Nodel*)malloc(sizeof(struct Nodel));
        Node->data = data;
        Node->left = NULL;
        Node->right = NULL;
	Nod->next = NULL;
	Nod->prev = NULL;
	Nod->N = Node;
        return(Node);
}

struct Stack
{
	int top;
	unsigned capacity;
	struct Node* array[100];
};

struct Stack* createStack(unsigned capacity)
{
struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
stack->capacity = capacity;
stack->top = 0;
//stack->array = (struct Node*) malloc(stack->capacity * sizeof(struct Node));
return stack;
}
void push(struct Stack* stack, struct Node* item)
{
//if (isFull(stack))
//return;
stack->array[++stack->top] = item;
//printf("%c pushed to stackn", item->data);
}
struct Node* pop(struct Stack* stack)
{
//if (isEmpty(stack))
//return INT_MIN;
return stack->array[stack->top--];
}
//int isFull(struct Stack* stack)
//{ return stack->top == stack->capacity - 1; }
//int isEmpty(struct Stack* stack)
//{ return stack->top == -1; }

void visit(struct Node* current ) {
	printf("%c ", current->data);
}

int main()
{

struct Node* root=newNode('A');
root->left=newNode('B');
root->right=newNode('C');
root->left->left=newNode('D');
root->right->left=newNode('E');
root->right->right=newNode('F');
root->right->left->right=newNode('G');
root->right->right->left=newNode('H');
root->right->right->right=newNode('J');

struct Stack* stack = createStack(100);

struct Node* P=newNode('P');

P=root;
//do{
//int x=-1;
while(1){
	if(P){
		push(stack, P);
		//visit(P);
		P=P->left;
		continue;
	}else if (stack->top){
		//printf("%cn", P->data);
		//if (P->right!=NULL)printf("%cn", P->right->data);
		//if (P->right==NULL && P->left==NULL && stack->top>=0)break;
		//if (stack->top==-1)goto label2;
		P=pop(stack);
		//while(P->left!=NULL){
			visit(P);
		//	if(stack->top==-1)break;
		//	P=pop(stack);
		//	x=1;
		//}       
		//if (x=1){
			P=P->right;
			//x=-1;
		//}
		continue;
	}
break;
}   
//}while(stack->top || P);
return 0;
}
