#include <iostream>

using namespace std;

int length(char arr[])
{
    int len=0;
    for(int i=0;arr[i]!='\0';i++)
        len++;
    return len;
}
int pow(int a,int b)
{
    if(b==1)
    {
        return 1;
    }
    for(int i=1;i<b-1;i++)
    {
        a*=10;
    }
    return a;
}
int helper(char arr[],int start,int end,int k)
{
    int l=k;
    if(start>end)
    {
        return 0;
    }
    l++;
    int ans=helper(arr,start,end-1,l);
        switch(arr[end])
        {
                case '0':
                    ans+=0*pow(10,l);
                    break;
                case '1':
                     ans+=1*pow(10,l);
                    break;
                case '2':
                     ans+=2*pow(10,l);
                    break;
            case '3':
                     ans+=3*pow(10,l);
                    break;
            case '4':
                     ans+=4*pow(10,l);
                    break;
            case '5':
                     ans+=5*pow(10,l);
                    break;
            case '6':
                     ans+=6*pow(10,l);
                    break;
            case '7':
                     ans+=7*pow(10,l);
                    break;
            case '8':
                     ans+=8*pow(10,l);
                    break;
            case '9':
                     ans+=9*pow(10,l);
                    break;
        }
    return ans;
}
int stringToNumber(char input[]) {
    // Write your code here
int len=length(input);
    len=len-1;
int ans=helper(input,0,len,0);
}








int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}

