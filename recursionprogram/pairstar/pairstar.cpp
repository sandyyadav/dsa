#include <iostream>

using namespace std;

// Change in the given string itself. So no need to return or print the changed string.


int length(char arr[])
{
    int len=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        len++;
    }
    return len;
}


void pairStar(char input[]) {
    // Write your code here


    //base case
    int len=length(input);
    if(len==1)
    {
        return;
    }


    pairStar(input+1);

    if(input[0]==input[1])
    {
        int len=length(input);
            for(int i=len;i>0;i--)
            {
                input[i+1]=input[i];
                    input[i]='*';
            }
    }
}


int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}

