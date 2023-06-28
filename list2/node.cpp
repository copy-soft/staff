/************************************************************************************//**
 *  @file       node.cpp
 *
 *  @brief      Brief descriptinon of node.cpp 
 *
 *  @date       2020-02-12 17:00
 *
 ***************************************************************************************/

#include "node.h"
#include <iostream>
using namespace std;


class Node{

    char data;
    Node* left;
    Node* right;
    Node* next;  
  public:
    Node(char data)
    {
       // Node* Node = new Node));
      Node::data = data;
        left = NULL;
        right = NULL;
       next= NULL; 
        //return(Node);
    }
    Node *GetLeft(){return left;};
    Node *GetRight(){return right;};
    void SetLeft(Node*p){left=p;};
    void SetRight(Node*p){right=p;};
    char GetData(){return data;};
    Node *GetNext(){return next;};
    void SetNext(Node *next){Node::next=next;};
friend ostream& operator<<(ostream&, Node*);

}
;
ostream& operator << (ostream& out, Node* node)
{
                   out <<  node->data << endl;
                           return out;
}
