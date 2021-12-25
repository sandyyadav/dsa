#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int size)
{
    int *temp=new int[size];
        int k=0;
    for(int i=0;i<size;i++)
    {
        if(input[i]!=0)
        {
            temp[k]=input[i];
            k++;
        }
    }
    while(k<size)
    {
        temp[k]=0;
        k++;
    }
   for(int i=0;i<size;i++)
   {
       input[i]=temp[i];
   }
   delete[] temp;
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

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
