#include <iostream>
#include <string.h>
using namespace std;

void helper(string s,string o)
{
    if(s=="")
    {
        cout<<o<<"\n";
        return;
    }
    int k=stoi(s.substr(0,1));
    char c='a'+k-1;
     helper(s.substr(1),o+c);
    if(s[1]!='\0')
    {
        int l=stoi(s.substr(0,2));
        if(l>=10&&l<=26)
        {
        char b='a'+l-1;
        helper(s.substr(2),o+b);
            }
    }



}

void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    string output="";
    helper(input,output);
    return;
}



int main(){
    string input;
    cin >> input;

    printAllPossibleCodes(input);
    return 0;
}
