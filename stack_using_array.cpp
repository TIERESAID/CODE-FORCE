// implemetation of stack using array

#include <iostream>
using namespace std;

#define max 1000

class stack{
  int top;
  public :
  int arr[max];
  stack(){
    this->top = -1;
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
 arr[++top] = x;
 return true;
}
}

int stack::pop(){
  if(is_empty()){
    std::cout<<" stack underflow ";
      return 0;
  } else {
    int x = arr[top];
    --top;
    return x;
  }
}

int stack::peek(){
 if(is_empty()){
  std::cout<<"stack is is_empty";
  return 0;
 } else {
  int x = arr[top];
  return x ;
 }
}

bool stack::is_empty(){
return (top<0);
}
bool stack::is_full(){
  return (top>= max -1);
}

void stack::display(){
  for (int i = top; i >=0; i--)
  {
     std::cout<<arr[i]<<" ";
  }
    std::cout<<"\n";
}

 int main(int argc, char const *argv[])
{
  
  class  stack  s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.display();
  s.pop();
  s.display();
  return 0;
}
