#include <iostream>
using namespace std;

class stack{
  int top;
  int capacity;
  int *array;

  public :
    stack(){
    this->top = -1;
  }
  stack(int capacity){
    this->top = -1;
    this->capacity =  capacity;
    array = new int (capacity);
   
  }
  bool push (int x);
  int pop() ;
  int peek();
  bool is_empty();
  bool is_full();
  void display();
};

bool stack::push(int x){
  if(is_full()){
    std::cout<<"stack overflow";
  return false ;
} else {
 array[++top] = x;
 return true;
}
}

int stack::pop(){
  if(is_empty()){
    std::cout<<" stack underflow ";
      return 0;
  } else {
    int x = array[top];
    --top;
    return x;
  }
}

int stack::peek(){
 if(is_empty()){
  std::cout<<"stack is is_empty";
  return 0;
 } else {
  int x = array[top];
  return x ;
 }
}

bool stack::is_empty(){
return (top<0);
}
bool stack::is_full(){
  return (top>= capacity -1);
}

void stack::display(){
  for (int i = top; i >=0; i--)
  {
     std::cout<<array[i]<<" ";
  }
    std::cout<<"\n";
}

 // the main function that returns value of a given postifix expression
int evaluatePostfix(std::string &str){
  int n = (int)str.length();
    stack stack(n);
  unsigned i =0;
  for (i = 0; i < n; ++i)
  {
    if(isdigit(str[i]))
// https://stackoverflow.com/questions/34832074/what-does-it-mean-to-subtract-0-from-a-variable-in-c
     stack.push(str[i] - '0');
   // If the scanned character is an operator, pop two
  // elements from stack apply the operator
   else {
    int val1 = stack.pop();
    int val2 = stack.pop();
   switch(str[i])
    {
      case '+': stack.push(val2+val1); break;
      case '-': stack.push(val2-val1); break;
      case '*': stack.push(val2*val1); break;
      case '/': stack.push(val2/val1); break;
    }

   }
  }
  return stack.pop();
}

int main(){
    std::string exp= "231*+9-";
    std::cout<<"postfix evaluation: "<< evaluatePostfix(exp);
    return 0;
}
