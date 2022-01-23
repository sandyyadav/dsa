#include<iostream>
using namespace std;

void sort012(int *arr, int n)
{
   //   Write your code here
    int nextzero=0;
    int nextone=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            int temp=arr[nextzero];
            arr[nextzero]=arr[i];
            arr[i]=temp;
            nextzero++;
        }
        if(arr[i]==1)
        {
            int temp=arr[nextone];
            arr[nextone]=arr[i];
            arr[i]=temp;
            nextone++;
        }
    }
     nextzero=0;
     nextone=1;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int size;
        cin>>size;
      int *a=new int[size];
      for(int i=0;i<size;i++)
      {
          cin>>a[i];
      }
      sort012(a,size);
      cout<<"\n";
       for(int i=0;i<size;i++)
      {
          cout<<a[i]<<" ";
      }
    }
}
