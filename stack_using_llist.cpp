
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



// insert  element int the stack a the beginning since
// stack is implemeting as a  LIFO mode(Last In , First Out)
node* stack::push(int new_data ){
 node* new_node = new node(new_data);
      new_node->next = (head_ref);
      (head_ref) = new_node;
    return head_ref;
}

// delete an element from the stack
bool stack::pop(){
    if (is_empty())
  {
    std::cout<<"under flow"<<"\n";
    return false;
  } else {
    node* temp = (head_ref);
    (head_ref) = (head_ref)->next;
    free(temp);
    return true;
  }
}

int stack::peek(){
  if(is_empty())
    return 0;
 return (head_ref)->data ;
}


bool stack::is_empty(){
  return ((head_ref) == nullptr);
}

void stack::display(node *head){
    head = return_head();
if (is_empty())
  std::cout<<"Stack is empty"<<"\n";
    
    while ((head) != nullptr) {
        std::cout<<(head)->data<<" ";
        (head) = (head)->next;
}
    std::cout<<"\n";
}

int main(int argc, char const *argv[])
{
  class  stack  s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.display(s.head_ref);
  s.pop();
  s.display(s.head_ref);
  return 0;
}

