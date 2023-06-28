/************************************************************************************//**
 *  @file       stack.cpp
 *
 *  @brief      Brief descriptinon of stack.cpp 
 *
 *  @date       2020-02-12 17:01
 *
 ***************************************************************************************/

#include "stack.h"

class Stack
{
        Node* head=NULL;
  public:
        Stack(){head=NULL;};
        Node *GetHead(){return head;};
        void SetHead(Node *head1){head=head1;};
        virtual void push(Node* item){item->SetNext(head);head=item;};
        virtual Node* pop(){Node *tmp=head;if(head)head=head->GetNext();return tmp;};

};

