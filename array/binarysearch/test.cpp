#include <iostream>
using namespace std;

//#include "solution.h"
int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int start=0;
    int end=n;
    int mid;
    mid=(start+end)/2;
    while(mid>=0&&mid<=n)
    {
    if(input[mid]==val)
    {
        return mid;
    }
    else if(val>input[mid])
        {
            start=mid+1;
            end=n;
            mid=(start+end)/2;
        }
        else
        {
            start=0;
            end=mid-1;
            mid=(start+end)/2;
        }
        if(start>end)
        {
            return -1;
        }
        if(end<start)
        {
            return -1;
        }
    }
}
int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}

	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}

	delete [] input;
	return 0;
}
