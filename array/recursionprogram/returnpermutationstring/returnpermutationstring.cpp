#include <iostream>
#include <string>
using namespace std;


int returnPermutations(string input, string output[]){
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    if(input.empty())
    {
        output[0]="";
        return 1;
    }
    int k=returnPermutations(input.substr(1),output);
    int count=0;

    for(int i=0;i<=k;i++)
    {
        if(output[i].length()>1)
        {
        string l=output[i].substr(i,i+1);
        string p=output[i].substr(i+1);
        output[i+1]=l+input.substr(i,i+1)+p;
        output[i+2]=l+p+input.substr(i,i+1);
        count+=2;
        }
        output[i]=input.substr(i,i+1)+output[i];
        cout<<output[i]<<" ";
        count++;
    }

    return count;
}

int main(){
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

