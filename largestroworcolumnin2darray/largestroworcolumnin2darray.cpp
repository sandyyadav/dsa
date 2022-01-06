#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
    int sum_row=-2147483648;

    int row_index=0;
    int col_sum=-2147483648;

    int col_index=0;
    for(int i=0;i<nRows;i++)
    {
         int sum=0;
        for(int j=0;j<mCols;j++)
        {
            sum+=input[i][j];
        }
        if(sum>sum_row)
        {
            sum_row=sum;
            row_index=i;
        }
    }
    for(int i=0;i<mCols;i++)
    {
          int sum=0;
        for(int j=0;j<nRows;j++)
        {
            sum+=input[j][i];
        }
        if(sum>col_sum)
        {
            col_sum=sum;
            col_index=i;
        }
    }
    if(sum_row>=col_sum)
    {
        cout<<"row "<<row_index<<" "<<sum_row;
    }
    else
    {
        cout<<"column "<<col_index<<" "<<col_sum;
    }

}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}
