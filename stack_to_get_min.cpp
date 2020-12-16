#include<iostream>

using namespace std;

class Stack{
private:
     int top =  0 ;
    int capacity ;
    int*  arr;
public:

    Stack(){
        this->top = -1;
    }
    Stack(int capacity){
     this->top = -1;
     this->capacity = capacity;
     arr = new int(capacity);
    }
bool is_empty();
bool is_fully();
void push(int x );
int peek ();
void pop();
};

bool Stack::is_empty(){
    return (top < 0);
}

bool Stack::is_fully(){
    return (top >= capacity-1);
}

void Stack::push(int x){
    
   arr[++top] = x ;
}

int Stack::peek(){
    if(is_empty())
        std::cout<<"Stack underflow";
    return arr[top];
}
void Stack::pop(){
 if(is_empty())
     std::cout<<"stack underflow "  ;
 --top;
}


class stack_to_get_min : public Stack{
private:
    Stack min;
public:
    stack_to_get_min (int capacity) : Stack(capacity){}
    void push(int x);
    int peek();
    void pop();
    int get_min();
};

 void stack_to_get_min::push(int x){
     if(is_empty()){
       Stack::push(x);
       min.push(x);
     } else {
         Stack::push(x);
         int y =  min.peek();
         if(x<y)
             min.push(x);
     }
}

int stack_to_get_min::peek(){
    int x = min.peek();
    return x ;

}
 void stack_to_get_min::pop(){
 min.pop();
 }

 int stack_to_get_min::get_min(){
     int x = min.peek();
     return x ;
 }

int main()
{
    stack_to_get_min s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.get_min() << endl;
    s.push(5);
    cout << s.get_min()<<endl;
    return 0;
}

