#include<bits/stdc++.h>
    long get_max_area(std::vector<long long> arr, int n){
        std::vector<long long> result_arr;

        for (int i = 0; i < n; ++i)
        {
            std::vector<long long> right_arr,left_arr;
              int j = i ;
              int k = i ;

              while(j<n){
                  if(arr[i]<=arr[j]){
                    right_arr.push_back(arr[i]);
                     j++;
                    }
              else break;
              }
                  
            while(k>0){
                
                if(arr[i]<=arr[k-1])
                {
                left_arr.push_back(arr[i]);
                    k--;
                }
                else break;
            }
              
              int size = (int)right_arr.size() + (int)left_arr.size();
              result_arr.push_back(arr[i]*size);
              
        }
        std::sort(result_arr.begin(), result_arr.end());
        return result_arr[n-1];
    }

    int main(int argc, char const *argv[])
    {
        std::vector<long long> v{1, 2, 3, 4,5};
        int n = (int)v.size();
        std::cout<<get_max_area(v,n)<<std::endl;
        return 0;
    }


