#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]) {
    // Write your code here
    int length=strlen(input);
    char *temp=new char[length];
    int k=0;
    for(int i=0;input[i]!='\0';i++)
    {
        if(input[i]!=' ')
        {
            temp[k]=input[i];
            k++;
        }
    }
    strcpy(input,temp);
    delete[] temp;
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
