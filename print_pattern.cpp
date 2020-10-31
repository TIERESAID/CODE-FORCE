#include <iostream>
using namespace std;
void print_pattern(int n){
    if(n > 0){
        std::cout<<n<<" ";
    print_pattern(n-5);
    }
    // variable a stored in a queue
    std::cout<<n<<" ";
    
 }

int main() {
     int  t = 0;
     std::cin>>t;
     while(t>0){
         int n = 0 ;
         std::cin>>n;
         print_pattern(n);
         t--;
     }
    return 0;
}
