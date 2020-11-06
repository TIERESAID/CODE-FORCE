// { Driver Code Starts
#include <iostream>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends

// Function to find the transition point
int transitionPoint(int arr[], int n) {
    int count =0;
    for(int i= 0 ; i<n;i++){
        if(arr[i] == arr[i+1])
        count ++;
        if(count != n-1 && arr[i] != arr[i+1])
        return count+1;
        if(count == n-1 && arr[n-1] == 1)
        return 0;
        if(count == n-1 && arr[n-1] == 0)
        return -1;
    }
       
}