// CPP Program for above approach
#include <iostream>
#include <stack>
using namespace std;

// Structure of a Node
struct Node {
	int data;
	Node* left;
	Node* right;
};

// Utility function to create a new Node
Node* newNode(int data)
{
	Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;
	return node;
}

// Inorder Iterator class
class InorderIterator {
private:
	stack<Node*> traversal;

public:
	InorderIterator(Node* root)
	{
		moveLeft(root);
	}

	void moveLeft(Node* current)
	{
		while (current) {
			traversal.push(current);
			current = current->left;
		}
	}

	bool hasNext()
	{
		return !traversal.empty();
	}

	Node* next()
	{
		if (!hasNext())
			throw "No such element Exists";

		Node* current = traversal.top();
		traversal.pop();

		if (current->right)
			moveLeft(current->right);

		return current;
	}
};

// Driver Code
int main()
{
	Node* root = newNode(8);
	root->right = newNode(9);
	root->left = newNode(3);
	root->left->left = newNode(2);
	root->left->right = newNode(4);
	root->left->right->right = newNode(5);

	InorderIterator itr(root);
	try {
		cout << itr.next()->data << " ";
		cout << itr.hasNext() << " ";
		cout << itr.next()->data << " ";
		cout << itr.next()->data << " ";
		cout << itr.next()->data << " ";
		cout << itr.hasNext() << " ";
		cout << itr.next()->data << " ";
		cout << itr.next()->data << " ";
		cout << itr.hasNext() << " ";
	}
	catch (const char* msg) {
		cout << msg;
	}
	return 0;
}

// This code is contributed by adityamaharshi21


