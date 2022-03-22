#include<bits/stdc++.h>
using namespace std;

class graph
{
    map<int,list<int>> l;
public:
    void addedge(int x,int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void bfs(int src)
    {
        map<int,bool> visited;
        queue<int> q;
        q.push(src);
        visited[src]=true;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            cout<<node<<" ";
            for(auto x:l[node])
            {
                if(visited[x]==false)
               {
                   q.push(x);
                   visited[x]=true;
               }
            }
        }
    }
};
int main()
{
    graph g;
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,2);
    g.addedge(2,3);
    g.bfs(3);
    return 0;
}
