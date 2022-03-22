#include <stack>
int* stockSpan(int *price, int size)  {
	// Write your code here
    int* a=new int[size];
    stack<int> s;
    for(int i=0;i<size;i++)
    {
             while(!s.empty())
             {
            if(price[i]>price[s.top()])
            {
                s.pop();
                //cout<<s.size();
            }
            else
            {

                if(s.size()==1)
                {
                  s.push(i);
                //cout<<s.size();
                   a[i]=1;
                }
                else
                {
                    if(price[i]<price[s.top()])
                    {
                        a[i]=1;
                        s.pop();
                        s.push(i);
                    }
                    else
                    {
                         a[i]=a[s.top()]+1;
                        s.pop();
                        s.push(i);
                    }
                //cout<<s.size();
                }

                break;
            }
            }
          if(s.empty())
       {
           s.push(i);
           a[i]=i+1;
       }
     }
    return a;
 }
