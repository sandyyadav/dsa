#include <iostream>
#include <string>
using namespace std;

void helper(int num,string t)
{
    if(num==0)
    {
        cout<<t<<"\n";
        return;
    }
    else
    {

        int k=num%10;
        num=num/10;
        if(k==2)
        {
            helper(num,t+"a");
            helper(num,t+"b");
            helper(num,t+"c");
        }
        if(k==3)
        {
            helper(num,t+"d");
            helper(num,t+"e");
            helper(num,t+"f");
        }
        if(k==4)
        {
            helper(num,t+"g");
            helper(num,t+"h");
            helper(num,t+"i");
        }
        if(k==5)
        {
            helper(num,t+"j");
            helper(num,t+"k");
            helper(num,t+"l");
        }
        if(k==6)
        {
            helper(num,t+"m");
            helper(num,t+"n");
            helper(num,t+"o");
        }
        if(k==7)
        {
            helper(num,t+"p");
            helper(num,t+"q");
            helper(num,t+"r");
            helper(num,t+"s");
        }
        if(k==8)
        {
            helper(num,t+"t");
            helper(num,t+"u");
            helper(num,t+"v");
        }
        if(k==9)
        {
            helper(num,t+"w");
            helper(num,t+"x");
            helper(num,t+"y");
            helper(num,t+"z");
        }
    }
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string s="";
    helper( num,s);

}

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
