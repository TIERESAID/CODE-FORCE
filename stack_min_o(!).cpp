// { Driver Code Starts
#include <iostream>
#include <stack>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};


/*returns min element from stack*/
int _stack :: getMin()
{
 return this->minEle;
}

/*push element x into the stack*/
void _stack::push(int x)
{
    // Insert the first number into the stack
        if (s.empty())
        {
            this->minEle = x;
            s.push(x);
            return;
        }

        if (x < this->minEle)
        {
            s.push((2*x) - (this->minEle));
            this->minEle = x;
        }

        else
        s.push(x);
}
/*returns poped element from stack*/
int _stack ::pop()
{
        int t = s.top();
        s.pop();
        int x = this->minEle;
    
        // Minimum will change as the minimum element
        // of the stack is being removed.
        if (t < this->minEle)
        {
            this->minEle = 2*this->minEle - t;
        }
//         else
//             x =  t ;
        return x;
}



int main(){
_stack s ;
    s.push(3);
    s.push(5);
    cout<<s.getMin()<<" ";
    s.push(2);
    s.push(1);
    cout<<s.getMin()<<" ";
    cout<<s.pop()<<" ";
    cout<<s.getMin()<<" ";
    cout<<s.pop()<<" ";

    return 0;
}
