#include <iostream>
using namespace std;
void reversearray(int *input,int start,int end)
{
    for(int i=start;i<end;i++)
    {
        int temp=input[i];
        input[i]=input[end-1];
        input[end-1]=temp;
        end--;
    }
}
void rotate(int *input, int d, int n)
{
    //Write your code here
    reversearray(input,0,n);
    reversearray(input,0,n-d);
    reversearray(input,n-d,n);

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

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		/*for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}*/

		delete[] input;
		cout << endl;
	}

	return 0;
}
