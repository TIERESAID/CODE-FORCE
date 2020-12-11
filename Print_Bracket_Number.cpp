#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

class Solution{
public:

    vector<int> barcketNumbers(string S)
    {
          vector <int > v;
          stack<int> s ;
        int n = (int)S.length();
          int j=0 ;
          for (int i = 0; i < n; ++i){
            if( S[i] == '(' ){
                ++j;
            v.push_back(j) ;
            s.push(j);
            }else if (S[i] == ')'){
                v.push_back(s.top());
                s.pop();
            }
}
        return v ;
    }
};

int main(){
    Solution ob;
    string S = "(aa(bdc))p(dee)â€‹";
    vector<int> result = ob.barcketNumbers(S);
    for (int i = 0; i<result.size(); ++i) {
    std:cout<<result[i]<<" ";
    }
    return 0 ;
}
