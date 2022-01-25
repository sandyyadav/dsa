#include <iostream>
using namespace std;

void helper(int arr[],int n,int output[],int k)
{
    if(n==0)
    {
       for(int i=1;i<=k;i++)
       {
           cout<<output[i]<<" ";
       }
       cout<<"\n";
        return;
    }

    helper(arr+1,n-1,output,k);
    k++;
    output[k]=arr[0];
    //cout<<arr[0]<<" "<<output[k];
    helper(arr+1,n-1,output,k);


}
void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    int start=0;
    int end=size-1;
    int output[30]={0};
    helper(input,size,output,0);

}


int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}

