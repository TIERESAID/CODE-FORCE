
#include <iostream>
#define N 10
using namespace std;

int linear_search(int arr[N], int l,
            int r, int x)
{
    if (r < l)
        return -1;
    if (arr[l] == x)
        return l;
    if (arr[r] == x)
        return r;
    return linear_search(arr, l + 1,
                        r - 1, x);
}

// Driver Code
int main()
{
     int A[N] = {1,2,3,4,5,6,7,8,9,10};
    
    int x = 3;
    int index = linear_search(A, 0, N - 1, x);
    if (index != -1)
    cout << "Element " << x << " is present at index " << index <<"\n";
    else
    cout << "Element" << x << " is not present" ;
    return 0;
}
