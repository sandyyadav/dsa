#include <iostream>

using namespace std;
int length(char input[])   //length function to find length of string
{
    int i=0;
    while(input[i]!='\0')
    {
        i++;
    }
    return i;
}
void reverseeveryword(char input[],int i,int j)
{
     while(i<j)
    {
        char temp=input[j];
        input[j]=input[i];
        input[i]=temp;
        i++;
        j--;
    }
}
void reverseStringWordWise(char input[])
{
    int l=length(input);  //finding length of string
    int i=0;
    int j=l-1;
    //reverse our whole string
    while(i<j)
    {
        char temp=input[j];
        input[j]=input[i];
        input[i]=temp;
        i++;
        j--;
    }
    // now reverse every word
    int start=0;int end=0;
    int k;
    for( k=0;k<l;k++)
    {
        if(input[k]==' ')
        {
           end=k-1;
           reverseeveryword( input,start,end);
           start=k+1;
           end=k+1;
        }
    }
    end=k-1;
    reverseeveryword( input,start,end);
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
