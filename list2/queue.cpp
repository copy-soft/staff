/************************************************************************************//**
 *  @file       queue.cpp
 *
 *  @brief      Brief descriptinon of queue.cpp 
 *
 *  @date       2020-02-12 17:01
 *
 ***************************************************************************************/

#include "queue.h"

class Queue : public Stack
              {
        //Node* head;
        //Node *tail;
  public:
       //void SetTail(Node* node ){tail=node;node->SetNext(NULL);}; 
        //Node*GetTail(){return tail;};
          //Stack(){head=NULL;};
        //Node *GetHead(){return head;};
        //void push(Node* item){item->SetNext(GetHead());SetHead(item);Node *ite=item;while(ite->GetNext()){ite=ite->GetNext();}SetTail(ite);};
        //Node* pop(){Node *tmp=GetHead();SetHead(GetHead()->GetNext());return tmp;};
        //Node* pop(){Node *tmp=GetHead();while(tmp->GetNext()!=GetTail()&&tmp->GetNext()&&tmp!=GetTail()){tmp=tmp->GetNext();};tmp->SetNext(NULL);Node *tmp2=GetTail();SetTail(tmp);return tmp2;}tmp=tmp.;
         void push1(Node *node){Node *tmp=GetHead();if(tmp)while(tmp->GetNext())tmp=tmp->GetNext();if(tmp)tmp->SetNext(node);else SetHead(node);};
        
              
              };

