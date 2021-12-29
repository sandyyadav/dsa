#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

   int m;
   int n;
   int arr[100][100];
   cout<<"enter value\n";
   cin>>m>>n;
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>arr[i][j];
       }
   }

   for(int i=0;i<m;i++)
   {
         int sum=0;
       for(int j=0;j<n;j++)
       {
           sum+=arr[j][i];
       }
       cout<<sum<<" ";
   }
   return 0;
}



