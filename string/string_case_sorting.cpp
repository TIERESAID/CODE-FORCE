#include<iostream>
#include <string>
using namespace std;

 void swap (char* a , char* b){
     char* temp = a ;
     a = b ;
     b = temp;
 }
std::string case_sort(std::string str , int n ){
    
    bool swapped = true;
    for (int i = 0; i < n; ++i)
    {
        swapped = false ;
        for (int j = 0; j < n-i-1; ++j)
        {
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
                swapped = true;
            }
        
        }
         if(swapped == false)
            break;
    }

    return str;
}

int main(){
  std::string str = "geekforgeek";
  std::cout<<case_sort(str,str.length())<<std::endl;
    return 0;
}

