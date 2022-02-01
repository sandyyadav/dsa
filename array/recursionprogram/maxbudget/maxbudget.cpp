#include <iostream>

using namespace std;

#include <numeric>
bool helper(int *a,int n,int o1[],int o2[],int &k,int &l,int &sum1,int &sum2)
{
    if(n==0)
    {
        return true;
    }
    helper(a+1,n-1,o1,o2,k,l,sum1,sum2);
    if(a[0]%3==0)
    {
        o1[k]=a[0];
        k++;
        sum1+=a[0];
    }
    else if(a[0]%5==0)
    {
        o2[l]=a[0];
        l++;
        sum2+=a[0];
    }
    else
    {
       if(sum1>sum2)
       {
           sum2+=a[0];
       }
        else
        {
            sum1+=a[0];
        }
    }


    if(sum1==sum2)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool splitArray(int *input, int size) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int o1[100];
    int o2[100];
    int k=0;
    int l=0;
    int sum1=0;
    int sum2=0;
   bool t=helper(input,size,o1,o2,k,l,sum1,sum2);

}


int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

    if(splitArray(input, size)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }


	return 0;

}
