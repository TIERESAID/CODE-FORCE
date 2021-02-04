#include <iostream>
#include <vector>
using namespace std;

void add_edge(std::vector<int> adj[] , int u, int v);
int find_sum(std::vector<int> adj[],int v);
int main() {
    //code
    int t=0;
    std::cin>>t;
    while(t>0){
        int n=0 , e=0;
        cin>>n>>e;
        std::vector<int> adj[n];
        
        int  u=0 , v = 0;
        for(int i=0 ; i<2*e;i++){
            int x =0, u=0 , v = 0;
            std::cin>>x;
            if(i%2 == 0)
                u = x;
             else {
                 v = x ;
                 add_edge(adj , u, v);
             }
        }
        std::cout<<find_sum(adj,n)<<"\n";
        t--;
    }
    return 0;
}
void add_edge(std::vector<int> adj[] , int u, int v){
    adj[u].push_back(v);
}
int find_sum(std::vector<int> adj[],int v){
    int sum = 0;
    for (int u =0 ; u<v; u++)
    sum += adj[u].size();
    return sum;
}
