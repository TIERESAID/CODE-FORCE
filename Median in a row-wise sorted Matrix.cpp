/ { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
           // on cherche le maximum et le minimum  dans la matrix .
           // les lignes etant deja ordonnees .
        
        int median_index =   (r*c+1)/2;
        int max = INT_MIN;
        int min = INT_MAX;
        for (int i= 0 ; i<r; i++) {
            if(matrix[i][c-1] > max)
            max = matrix[i][c-1];
            
            if(matrix[i][0] < min)
            min = matrix[i][0];
        }
        
        //  on cherche le nombre d element inferieur a median line par line
        //  on applicatant binary search
        while(min<max)
        {
            int median =   min + (max - min)/2;
            int counter = 0;
            for(int i = 0 ; i< r ; i++)
            counter += upper_bound( matrix[i].begin(), matrix[i].end(), median) - matrix[i].begin();
            // le nombre d element inferieur a la median doit pas etre superieur a median_index
            if(counter < median_index)
                min = median + 1; // si le nombre d element est inderieur a  l'index de la median alors
                                  // la median cherché se trouve dans la partie supperieur de la plage
                                  // on incremente +1 pour aller progressivement  vers la median
                else
                max =  median;
        }
        return  min;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i=0;i<r;++i)
            for(int j=0;j<c;++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends