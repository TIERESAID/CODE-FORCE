#include <iostream>

class Queue{
private:
    int front, rear , size ;
    unsigned capacity;
    int *arr ;
public:
    Queue(){
        this->front = this->rear = this->size = 0;
    }
    Queue(int capacity){
        this->capacity = capacity;
    this->front = this->rear = this->size = 0;
     arr = new int(capacity);
    }
    bool is_full();
    bool is_empty();
    void enqueue(int x);
    int  dequeue();
    int head();
    int tail();
    ~Queue(){};

};

bool Queue::is_full(){
    return (size>capacity-1);
}

bool Queue::is_empty(){
    return (size == 0);
}

void Queue::enqueue(int x ){
if(is_full())
    return;
    this->rear = x ;
    arr[this->size]=x;
    this->size++;
}

int Queue::dequeue(){
    int t;
if(is_empty()){
    std::cout<<"Queue underflow";
    return -1;
}

t = this->arr[front];
    front++;
--size;
return t ;
}


int Queue::head(){
if(is_empty())
    std::cout<<"Queue is is empty ";
return this->arr[front];
}

int Queue::tail(){
      if(is_empty())
          std::cout<<"Queue is is empty ";
return this->rear;
}

int main(int argc, char const *argv[])
{
    Queue q(100) ;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    std::cout << q.dequeue() <<" dequeued from queue\n";
      
    std::cout << "Front item is " << q.head() << std::endl;
    std::cout << "Rear item is "<< q.tail()   << std::endl;
    return 0;
}
