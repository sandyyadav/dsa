#include <iostream>
using namespace std;

int findUnique(int *arr, int n) {
    // Write your code here
    int unique;
        unique=arr[0];
    for(int i=0;i<n-1;i++)
    {
        //cout<<arr[i]<<" "<<arr[i+1];
       unique=unique^arr[i+1];
    }
    return unique;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}
