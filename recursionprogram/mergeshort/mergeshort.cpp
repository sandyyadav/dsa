#include <iostream>

using namespace std;

void mearg(int s[],int start,int end)
{
  int * a=new int[start+end];
    int mid=(start+end)/2;
    int p=start;
    int j=mid+1;
    int k=0;
       cout<<"\n";
     while(p<mid+1&&j<end+1)
     {

         if(s[p]>s[j])
         {
             a[k]=s[j];
            cout<<a[k]<<" ";
             j++;

         }
         else
         {
             a[k]=s[p];
            cout<<a[k]<<" ";
             p++;
         }
         k++;

     }
    while(p<mid+1)
    {
        a[k]=s[p];
        cout<<a[k]<<" ";
        p++;
        k++;
    }
    while(j<end+1)
    {
        a[k]=s[j];
        cout<<a[k]<<" ";
        j++;
        k++;
    }
    cout<<"\n";
    int l=0;
    for(int i=start;i<=end;i++)
    {
        s[i]=a[l];
         cout<<s[i]<<" ";
         l++;
    }
    delete[] a;
}

void helper(int s[],int start,int end)
{
if(start==end||start>end)
    return;
int mid=(start+end)/2;
        helper(s,start,mid);
        helper(s,mid+1,end);
        mearg(s,start,end);
}

void mergeSort(int input[], int size){
	// Write your code here
    helper(input,0,size-1);
}



int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
