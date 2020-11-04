
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
     
  int pop();
  int  top();
  bool is_empty();
  void display(node* head);
  void sort_stack();
  void sort_stack_element(int x );
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
int stack::pop(){
    if (is_empty())
  {
    std::cout<<"under flow"<<"\n";
    return 0;
  } else {
    // head_ref is a public data ,can be acces by
    // method
    int x = head_ref->data;
      
    node* temp = (head_ref);
    (head_ref) = (head_ref)->next;
    free(temp);
    return x ;
  }
}

// return the top of the stack
int stack::top(){
  if(is_empty()){
    std::cout<<"stack empty";
    return 0;
  }
 return (head_ref)->data ;
}


bool stack::is_empty(){
//   if (head_ref == nullptr)
//     return true;
//   else
//     false;
// }
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

// stock  temporary  all variable via recursion and send them to the
// function sort_stack_element

void stack::sort_stack_element(int x ){
  if(is_empty() || x > top()){
   push(x);
   return; // stop  and go back to sort_stack to take a new variable
}
 int temp = pop();
 sort_stack_element(x);
 push(temp);
}

void stack::sort_stack()
{
  // stock  temporary  all variable via recursion
    if(!is_empty()){
  int temp  =  pop();
  sort_stack();

  // here push them to the sort_stack_element()
  // for sorting one by one
  sort_stack_element(temp);
}
}

int main(int argc, char const *argv[])
{
  class  stack  s;
  s.push(30);
  s.push(-5);
  s.push(18);
  s.push(14);
  s.push(-3);
  std::cout<<"orignal stack:";
  s.display(s.head_ref);
  //s.pop();
  printf("\n");
  s.sort_stack();
  std::cout<<"after sorting: ";
  s.display(s.head_ref);
  printf("\n");
  return 0;
}

