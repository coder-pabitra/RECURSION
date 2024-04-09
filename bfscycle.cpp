#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

bool isCyclicbfs(int node,unordered_map<int,bool>&visited,unordered_map<int,list<int>>&adj)
{
    unordered_map<int,int>parent;

    parent[node] = -1;
    visited[node] = 1;

    queue<int>q;
    q.push(node);
    while(!q.empty())
    {
        int frontnode = q.front();
        q.pop();

        for(auto i : adj[frontnode])
        {
            if(visited[i] == true && i != parent[frontnode])
            {
                return true;
            }
            else if(!visited[i])
            {
                q.push(i);
                visited[i]=1;
                parent[i] = frontnode;
            }
        }
    }
  return false;

}
string BFS(int n,int m)
{
    
     //preapare adj list
             unordered_map<int,list<int>>adj;
            cout<<"enter the element in nodes"<<endl;
            for(int i=0;i<m;i++)
            {
                int u,v;
                cin>>u>>v;
                
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
            for(auto i : adj)
            {
                cout<<i.first<<"->";
                for(auto j : i.second)
                {
                    cout<<j<<",";
                }
                cout<<endl;
            }
            unordered_map<int,bool>visited;
            //traverse all components of graph
           for(int i=0;i<n;i++)
            {
                if(! visited[i])
                {
                   bool ans = isCyclicbfs(i,visited,adj);
                   if( ans == 1)
                    {
                     cout<<" yes "<<endl;
                    }
                    else
                    {
                        cout<<"no"<<endl;
                    }
                   
                }
            }
    return "no";
}
int main()
{
     int n;
    cout<<"enter the number of nodes"<<endl;
    cin>>n;
    int m;
    cout<<"enter the number of edges"<<endl;
    cin>>m;


    BFS(n,m);
    return 0;
}

