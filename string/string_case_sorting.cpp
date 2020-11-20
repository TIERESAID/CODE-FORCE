#include<iostream>
#include <string>
using namespace std;

 void swap (char* a , char* b){
     char* temp = a ;
     a = b ;
     b = temp;
 }
std::string case_sort(std::string str , int n ){
    
    int min_index ;
    for (int i = 0; i < n; ++i)
    {
        min_index = i ;

        if(islower(str[min_index])){

        for (int j = i+1; j < n; ++j)
        {
            if(islower(str[j])){
            if(str[j]<str[min_index])
                min_index = j;
        }
        }
    } else if(isupper(str[min_index])){

        for (int j = i+1; j < n; ++j)
        {
            if(isupper(str[j])){
            if(str[j]<str[min_index])
                min_index = j;
        }
        }
    }
         swap(str[i],str[min_index]);
    }

    return str;
}

int main(){
  std::string str = "defRTSersUXI";
  std::cout<<case_sort(str,str.length())<<std::endl;
    return 0;
}

