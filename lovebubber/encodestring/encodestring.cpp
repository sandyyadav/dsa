#include <iostream>
#include <string>
using namespace std;

string encodeString(string &s, int n)
{
    // Write your code here.
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            char c=s[i];
            c++;
            s[i]=c;
        }
        else
        {
            if(s[i]=='z')
                s[i]='a';
            char c=s[i];
            c--;
            s[i]=c;
        }
    }
    return s;
}




int main()
{
    string p;
    cin>>p;
   int q;
   q=p.length();
  string l= encodeString(p,q);
  cout<<"\n"<<l;
}
