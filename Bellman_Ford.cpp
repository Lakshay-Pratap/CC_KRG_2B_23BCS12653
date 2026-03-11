#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> edges;
    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        edges.push_back({a,b,w});
    }
    vector<int> dist(n+1, INT_MAX);
    dist[1]=0;

    for(int i=1;i<=n-1;i++)
    {
        for(auto it: edges)
        {
            int u=it[0];
            int v=it[1];
            int w=it[2];

            if(dist[u]!=INT_MAX && dist[u]+w<dist[v])
            {
                dist[v]=dist[u]+w;
            }
        }
    }
    

    return 0;
    
}