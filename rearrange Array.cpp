#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin); 
   freopen("output.txt", "w", stdout); 
   #endif 
  int t =0;
  std::cin>>t;
  while(t--){
      int arr1[100];
      int n = 0;
      int data;
      std::cin>>n;
      for (int i = 0; i < n; ++i)
      {
        std::cin>>data;
        arr1[i] = data;
      }
    
     int arr2[100];
      
          int j = n ;
          int i = 0;
          int k = 0 ;
         while(i<n)
         {
            arr2[i]=arr1[j-1];
            arr2[i+1]=arr1[k];
            j--;
            i = i+2;
            k++;
             
         }

       for (int i = 0; i < n; ++i)
       {
           std::cout<<arr2[i]<<" ";
       }
      std::cout<<"\n";

  }

    return 0;
}
