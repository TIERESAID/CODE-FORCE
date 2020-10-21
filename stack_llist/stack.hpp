#pragma once

//stack using linked_list
#include <iostream>
#include <cstdio>

typedef struct node{
   int data;
   struct node* next ;
   node(int x)
  {
   this->data =  x;
   next = nullptr ;
   }
}node;


class stack{
public:
  node* head_ref = nullptr;
  node* push(int new_data);
     
  bool pop();
  int peek();
  bool is_empty();
    
  void display(node* head);
    node* return_head(){
        return this->head_ref;
    }
};

