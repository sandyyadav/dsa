#include <iostream>

using namespace std;

/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 2}, then output should contain
	{{0}, 		// Length of this subset is 0
	{1, 2},		// Length of this subset is 1
	{1, 1},		// Length of this subset is also 1
	{2, 1, 2}}	// Length of this subset is 2


***/
int helper(int arr[],int n,int o[][20])
{
    if(n==0)
    {
        o[0][0]=0;
        return 1;
    }
    int y=helper(arr,n-1,o);

    int count=y;
    o[y][0]=1;
    o[y][1]=arr[0];
    count++;
    for(int i=1;i<y;i++)
    {
        o[count][0]=o[i-1][0]+1;
        o[count][1]=arr[0];
        for(int j=0;j<o[i-1][0];j++)
        {
            o[count][2+j]=o[i-1][j+1];
        }
        count++;
    }
    return count;

}

int subset(int input[], int n, int output[][20])
 {
   int x=helper(input,n,output);
   return x;

}

int main() {
  int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) {
	for( int j = 1; j <= output[i][0]; j++) {
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}

