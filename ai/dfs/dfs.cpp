#include<bits/stdc++.h>
using namespace std;
class graph
{
    map<int,list<int>> m;
public:
    void addedge(int x,int y)
    {
        m[x].push_back(y);
        m[y].push_back(x);
    }
    void dfs(int src)
    {
        map<int,bool> visited;
        stack<int> s;
        s.push(src);
        visited[src]=true;
        while(!s.empty())
        int node=s.top();
        s.pop();
        for(auto x:m[node])
        {
            if(visited[x]!=true)
            {
                s.push(x);
        }

    }
};
int main()
{

}
