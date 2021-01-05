#include <iostream>
using namespace std;
class Deque{

private:
    int front, rear ;
    unsigned capacity;
    int *arr ;

public:
    Deque(){
         this->front = -1; 
         this->rear  = 0;
    }

    Deque(int capacity){
        this->capacity = capacity;
        this->front = -1;
        this->rear = 0;
     arr = new int(capacity);
    }

    bool is_full();
    bool is_empty();
    void push_back(int x);
    int  delete_back();
    void push_front(int x);
    int  delete_front();
    int head();
    int tail();
    ~Deque(){};

};

bool Deque::is_full(){
    return (this->front == rear+1);
}

bool Deque::is_empty(){
    return (front == -1);
}

void Deque::push_back(int x ){
if(is_full())
    std::cout<<"Overflow";

else if(is_empty()){
    this->front  = 0 ;
    this->rear   = 0;
}

    this->rear++ ;
    arr[rear]= x;
}

void Deque::push_front(int x ){
if(is_full()){
std::cout<<"Overflow\n";
return ;
}

else if(is_empty()){
    this->front  = 0;
    this->rear   = 0;
}else if(front == 0){
    this->front = capacity-1;
}else this->front-- ;

arr[front]=x;
}

int Deque::delete_back(){
    int t;
if(is_empty()){
    std::cout<<"Deque is empty";
    return -1;
}else if(this->front == this->rear)
{
    std::cout<<"Deque has only one element\n";
} else if(this->rear == 0)
this->rear = capacity-1;

t = this->arr[rear];
    rear--;
return t ;
}

int Deque::delete_front(){
int t;
if(is_empty()){
    std::cout<<"Deque is empty";
    return -1;
}else if(this->front == this->rear)
{
    std::cout<<"Deque has only one element\n";
} else if (this->front ==this->capacity -1) {
    front = 0;
} else 
this->front++;
t = this->arr[front];
return t ;
}

int Deque::head(){
if(is_empty()){
    std::cout<<"Queue is is empty ";
    return -1;
}
return this->arr[this->front];
}

int Deque::tail(){
      if(is_empty()){
          std::cout<<"Queue is is empty ";
          return -1;
      }
return this->arr[this->rear];
}

int main(int argc, char const *argv[])
{
    Deque dq(5); 
    std::cout << "Insert element at rear end  : 5 \n"; 
    dq.push_back(5); 
  
    std::cout << "insert element at rear end : 10 \n"; 
    dq.push_back(10); 
  
    std::cout << "get rear element " << " "
         << dq.tail() << endl; 
  
    dq.delete_back(); 
    std::cout << "After delete rear element new rear"
         << " become " << dq.tail() << endl; 
  
    std::cout << "inserting element at front end \n"; 
    dq.push_front(15); 
  
    std::cout << "get front element " << " "
         << dq.head() << endl; 
  
    dq.delete_front(); 
  
    std::cout << "After delete front element new "
       << "front become " << dq.head() << endl; 
    return 0; 
}
