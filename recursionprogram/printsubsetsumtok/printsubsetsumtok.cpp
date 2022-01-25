#include <iostream>
using namespace std;

void helper(int arr[],int n,int k,int o[],int p)
{
    if(n==0)
    {
        if(k==0)
        {
            for(int i=0;i<p;i++)
            {
                cout<<o[i]<<" ";
            }
            cout<<"\n";
            return ;
        }
        else
        {
            return;
        }
    }

    helper(arr+1,n-1,k,o,p);
    o[p]=arr[0];
    p++;
    helper(arr+1,n-1,k-arr[0],o,p);



}
void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    int output[30];
    helper(input,size,k,output,0);
}


int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}
