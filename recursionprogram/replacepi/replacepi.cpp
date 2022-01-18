#include <iostream>

using namespace std;


// Change in the given string itself. So no need to return or print anything
int length(char arr[])
{
 int len=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
void replacePi(char input[]) {
	// Write your code here
     int len=length(input);
    if(len==0||len==1)
    {
        return ;
    }
    replacePi(input+1);
    len=length(input);
    if(input[0]=='p'&&input[1]=='i')
    {
        for(int i=len;i>=0;i--)
        {

            input[i+2]=input[i];
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
    }


}







int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}

