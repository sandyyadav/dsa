#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
    //Write your code here
    int l=-2147483648;
    int s=-2147483648;
    if(n<=1)
    {
        return s;
    }
    else
    {
     for(int i=0;i<n;i++)
     {
         if(input[i]>l)
         {
             s=l;
             l=input[i];
         }
         else if(input[i]>s&&input[i]!=l)
         {
             s=input[i];
         }
     }
     if(s==INT_MIN)
     {
         return -2147483648;
     }
     return s;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}
