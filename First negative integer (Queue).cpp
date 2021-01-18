#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    int t=0 ;
    std::cin>>t;
    queue<int> q1, q2;
    
    while(t>0){
        int size = 0 ;
        int k = 0 ;
        // queue temp
        queue<int> q2;
        // enter the array size
        std::cin>>size;
      for (int i = 0 ; i<size ; i++){
          int x = 0 ;
          std::cin>>x ;
          q1.push(x);
          }
        std::cin>>k;
        int arr[k];
        
        while(q1.size()>=k){
        q2 = q1 ;
        for(int i=0; i<k; i++){
        arr[i] = q2.front();
        q2.pop();
        }
        int negative = 0 ;
        for(int i=0; i<k; i++){
            if(arr[i]<0){
            negative = arr[i];
            break;
            }
        }
        std::cout<<negative<<" ";
        q1.pop();
        }
        t--;
    }
    return 0;
}
