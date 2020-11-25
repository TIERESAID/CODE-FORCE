#include<bits/stdc++.h>
    long get_max_area(std::vector<long long> arr, int n){
        std::vector<long long> result_arr;

        
        for (int i = 0; i < n; ++i)
        {    // tracker l' historme en allant du point fixe de gauche qa droite
            std::vector<long long> right_arr,left_arr;
              int j = i ;
              int k = i ;
                  // trace le ligne du rectangle tant que la hauteur de i est inferieur a la suivante
                  // en allant de i vers de la droite 
                  while(j<n){
                  if(arr[i]<=arr[j]){
                    right_arr.push_back(arr[i]);
                     j++;
                    }
              else break;
              }

             // trace le ligne du rectangle tant que la hauteur de i est inferieur a la suivante
            // en allant de i vers de la gauche 

            while(k>0){
                
                if(arr[i]<=arr[k-1])
                {
                left_arr.push_back(arr[i]);
                    k--;
                }
                else break;
            }
              // enregister l air(hauteur * largeur ) dans un nouveau tableau
              //  arr[i] = hauteur  
              int largeur = (int)right_arr.size() + (int)left_arr.size();
              result_arr.push_back(arr[i]*largeur);
              
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


