#include<bits/stdc++.h>
using namespace std;

std::string sort_case_string(std::string str, int n){
     std::vector<char> s1;
     std::vector<char> s2;

     for (int i = 0; i < n; ++i)
     {
         if (str[i] >= 'a' && str[i]<='z')
            s1.push_back(str[i]);
         else if(str[i] >= 'A' && str[i]<='Z')
            s2.push_back(str[i]);
     }
     //sort  vector  
     std::sort(s1.begin(),s1.end());
     std::sort(s2.begin(), s2.end());

     unsigned i=0 , j=0 ;
     for (int k = 0; k < n; ++k)
     {
         if (str[k] >= 'a' && str[k]<='z'){
            str[k] = s1[i];
            i++;
         }
            
         else if (str[k] >= 'A' && str[k]<='Z'){
            str[k] = s2[j];
            j++;
         }
     }

     return str;

}

int main(int argc, char const *argv[])
{
    std::string temp ="defRTSersUXI";
    std::cout<<sort_case_string(temp, temp.length())<<std::endl;
    return 0;
}