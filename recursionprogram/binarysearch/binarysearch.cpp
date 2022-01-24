#include <iostream>

using namespace std;

// input - input array
// size - length of input array
// element - value to be searched
int helper(int arr[],int start,int end,int x)
{
    if(start>end)
    {
        return -1;
    }
    int mid=(start+end)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    if(arr[mid]>x)
    {
        helper(arr,start,mid-1,x);
    }
    else
    {
         helper(arr,mid+1,end,x);
    }

}
int binarySearch(int input[], int size, int element) {
    // Write your code here
    int start=0;
    int end=size-1;
    int index=helper(input,start,end,element);
    return index;
}




int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    {
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}

