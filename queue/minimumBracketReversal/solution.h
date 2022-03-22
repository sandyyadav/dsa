#include<stack>
int countBracketReversals(string &input)
{
    stack<char> c;
    int i=0;
    if(input.size()%2!=0)
        return -1;
    while(input[i]!='\0')
    {
        if(input[i]=='}'&&c.empty())
        {
            c.push(input[i]);
        }
        else if(input[i]=='}'&&c.top()=='}')
        {
            c.push(input[i]);
        }
        else if(input[i]=='}')
        {
            c.pop();
        }
        else
        {
            c.push(input[i]);
        }
        i++;
    }
    int count=0;
    while(!c.empty())
    {
        char c1=c.top();
        c.pop();
        char c2=c.top();
        c.pop();
        if(c1==c2)
        {
           count++;
        }
        else
        {
            count+=2;
        }
    }
}
