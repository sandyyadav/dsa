#include<iostream>

using namespace std;


/*
	To apply the method explained in the hint video, we have to add two more parameters in the function call. This can be done by calling a helper function from given function. The helper function can have three parameters: array, start index, end index.

	Skeleton code to achieve this:
	#include <iostream>
	using namespace std;

	void quickSort(int input[], int start, int end)
	{
    		// your code goes here
	}
	void quickSort(int input[], int size)
	{
    		quickSort(input, 0, size - 1);
	}

*/
int partition(int a[],int x,int start,int end)
{
    int count=0;
    for(int i=start;i<=end;i++)
    {
        if(x>a[i])
            count++;
    }
    //cout<<"\n";
    int temp=a[start+count];
   // cout<<a[start+count]<<" ";
    a[start+count]=x;
    //cout<<x<<" ";
    a[start]=temp;
    //cout<<a[start]<<" ";
    //cout<<"\n";
    int j=end;
    int i=start;
    //for(int i=start;i<=end;i++)
    //{
     //   cout<<a[i]<<" ";
   // }
   // cout<<"\n";
    while(i<start+count&&j>start+count)
    {
        if(a[i]<x)
        {
            i++;
        }
       else if(a[j]>=x)
            {
               j--;
            }
        else
        {
           // cout<<a[i]<<" ";
                int temp=a[i];
                //cout<<temp<<" ";
                a[i]=a[j];
                a[j]=temp;
                i++;
                j--;
        }
    }

    return start+count;
}
void quickSort(int input[], int start, int end)
	{
    		// your code goes here
       if(start>=end)
           return;
       int c=partition(input,input[start],start,end);
        quickSort(input,start,c-1);
        quickSort(input,c+1,end);
	}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */

    quickSort(input, 0, size - 1);

}


int main(){
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }

    delete [] input;

}



