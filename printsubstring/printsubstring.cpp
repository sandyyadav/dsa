#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char input[]) {
    // Write your code here.
    for(int k=0;k<strlen(input);k++)
    {
    for(int i=k;i<strlen(input);i++)
    {
        for(int j=k;j<=i;j++)
        {
            cout<<input[j];
        }
        cout<<"\n";
    }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
