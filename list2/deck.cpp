/************************************************************************************//**
 *  @file       queue.cpp
 *
 *  @brief      Brief descriptinon of queue.cpp 
 *
 *  @date       2020-02-12 17:01
 *
 ***************************************************************************************/

#include "deck.h"

class Deck : public Queue 
              {
        //Node* head;
        //Node *tail;
  public:
        //Stack(){head=NULL;};
        //Node *GetHead(){return head;};
        ///void push1(Node* item){item->SetNext(GetHead());SetHead(item);Node *ite=item;while(ite->GetNext()){ite=ite->GetNext();}SetTail(ite);};
        //Node* pop(){Node *tmp=GetHead();SetHead(GetHead()->GetNext());return tmp;};
        //Node* pop1(){Node *tmp=GetHead();while(tmp->GetNext()!=GetTail()&&tmp->GetNext()&&tmp!=GetTail()){tmp=tmp->GetNext();};tmp->SetNext(NULL);Node *tmp2=GetTail();SetTail(tmp);return tmp2;};
        Node*pop1(){Node *tmp=GetHead();if(tmp)while(tmp->GetNext())tmp=tmp->GetNext();Node* tmp1=tmp;tmp=NULL;if(tmp1)return tmp1;};
};

