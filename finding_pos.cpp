#include <iostream>
#include <math.h>
using namespace std;
//int find_position(int N){
//    int r =1;
//    while (r<N){
//        r *= 2;
//    }
//    return r/2;
//}


// other method using power
//int find_position(int N){
//    int p = 0;
//    while(N != 0){
//        N /= 2;
//        p++;
//    }
//    return  pow(2, p)/2;
//}

//other method using log
//int find_position(int N){
//    return (int)pow(2, (int)log2(N));
//}

/* other method using bitise
 When you have a number n (that is not a power of 2), the largest power of 2 that is less than n is always the most significant bit in n. In case of a number n that is a power of 2, the largest power of 2 less than n is the bit right before the only bit that is on in n.
 
 For example if we had 8 (which is 2 to the 3rd power), its binary representation is 1000 the 0 that is bold would be the largest power of 2 before n. Since we know that each digit in binary represents a power of 2, then if we have n as a number that's a power of 2, the greatest power of 2 less than n would be the power  of 2 before it, which would be the bit before the only bit on in n. */



int find_position(int N){
    int res = 0;
    for (int i = N; i>=1; i--) {
        if ((i & (i-1)) == 0){
            res = i ;
           break;
        }
    }
    return res;
}
int main() {
    int t =0;
    std::cin>>t;
    while(t--){
        int N = 0;
        std::cin>>N ;
        std::cout<<find_position(N)<<std::endl;
    }
    return 0;
}

