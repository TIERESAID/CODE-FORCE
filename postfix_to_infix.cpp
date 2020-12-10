#include <iostream>
#include <string>
using namespace std;

class Stack{
  int top;
  int capacity;
  int *arr;

  public :
    Stack(){
    this->top = -1;
  }
  Stack(int capacity){
    this->top = -1;
    this->capacity =  capacity;
    arr = new int (capacity);
   
  }
  bool push (int x);
  int pop() ;
  int peek();
  bool is_empty();
  bool is_full();
  void display();
};

bool Stack::push(int x){
  if(is_full()){
    std::cout<<"stack overflow";
  return false ;
} else {
 arr[++top] = x;
 return true;
}
}

int Stack::pop(){
  if(is_empty()){
    std::cout<<" stack underflow ";
      return 0;
  } else {
    int x = arr[top];
    --top;
    return x;
  }
}

int Stack::peek(){
 if(is_empty()){
  std::cout<<"stack is is_empty";
  return 0;
 } else {
  int x = arr[top];
  return x ;
 }
}

bool Stack::is_empty(){
return (top<0);
}
bool Stack::is_full(){
  return (top>= capacity -1);
}

void Stack::display(){
  for (int i = top; i >=0; i--)
  {
     std::cout<<arr[i]<<" ";
  }
    std::cout<<"\n";
}

 // the main function that returns value of a given postifix expression
int evaluatePostfix(std::string &str){
  int n = (int)str.length();
    Stack stack(n);
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

