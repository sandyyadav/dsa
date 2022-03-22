#include<bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int> >path;
class graph
{
    map<char,list<char>> m;
    map<char,bool> visited;
    map<pair<char,char>,int>path_cost;
    map<pair<char,char>,int>hero;

public:
    void addedge(char x,char y,int cost)
    {
        m[x].push_back(y);
        m[y].push_back(x);
        path_cost[make_pair(x,y)]=cost;
        path_cost[make_pair(y,x)]=cost;
    }
    void heuristic()
    {
      for(auto x:m)
      {
          for(auto y:m)
          {
             if(x.first==y.first)
             {
                 hero[make_pair(x.first,y.first)]=0;
                 hero[make_pair(y.first,x.first)]=0;
             }
             else
             {
                 int random=rand();
                hero[make_pair(x.first,y.first)]=random;
                hero[make_pair(y.first,x.first)]=random;
             }
          }
      }

    }
    void print()
    {
        for(auto x:m)
        {
            cout<<x.first<<"->";
            for(auto t:x.second)
            {
                cout<<t<<" ";
            }
            cout<<endl;
        }
        cout<<"--------path cost of graph-------\n";
        for(auto x:path_cost)
        {
            cout<<"("<<x.first.first<<","<<x.first.second<<")"<<"->";
            cout<<x.second<<"\n";
        }
        cout<<"-------heuristic of path---------\n";
        for(auto x:hero)
        {
            cout<<"("<<x.first.first<<","<<x.first.second<<")"<<"->";
            cout<<x.second<<"\n";
        }
    }
    int gn(char a,char b,char c)
    {
        int dis=hero[{a,b}]+path_cost[{c,a}];
        return dis;
    }
    void a_star(char src,char desti)
    {
      for(auto x:m)
      {
          char node=x.first;
          visited[node]=false;
      }

    }
};
int main()
{
    graph g;
    g.addedge('A','B',3);
    g.addedge('B','C',6);
    g.addedge('B','D',1);
    g.addedge('B','E',25);
    g.addedge('C','E',6);
    g.addedge('D','E',7);
    g.heuristic();
    g.print();
    return 0;
}
