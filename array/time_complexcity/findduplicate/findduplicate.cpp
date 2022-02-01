#include <iostream>
using namespace std;

int findDuplicate(int *arr, int n)
{
    //Write your code here
    int sum=0;
    int sum1=0;

    for(int i=0;i<n;i++)
    {
       sum+=arr[i];
    }
    sum1=(n-1)*(n-2)/2;
    return sum-sum1;
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

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}
