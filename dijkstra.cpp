#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int>>> adj(n+1);
    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }

    
    vector<int> dist(n+1, INT_MAX);
    dist[1]=0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, 1});

    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();

        for(auto it: adj[u])
        {
            int v=it.first;
            int w=it.second;

            if(dist[u]+w<dist[v])
            {
                dist[v]=dist[u]+w;
                pq.push({dist[v], v});
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(dist[i]==INT_MAX)
        cout<<"INF ";
        else
        cout<<dist[i]<<" ";
    }
    return 0;
    
}