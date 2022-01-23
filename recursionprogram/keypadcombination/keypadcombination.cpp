#include <iostream>
#include <string>

using namespace std;

#include <string>
using namespace std;

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    if(num==0)
    {
        output[0]="";
        return 1;
    }
    int k=num%10;
    num=num/10;
    int count=keypad(num,output);
    int size=count;
    string s;
    if(k==7||k==9)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<count;j++)
            {
                output[size]=output[j];
                   size++;
            }

        }
        int l=0;

        for(int i=0;i<4;i++)
        {
            for(int j=0;j<count;j++)
            {
              if(k==7)
              {
                  s="pqrs";
                  output[l]=output[l]+s[i];
                  l++;
              }
              if(k==9)
              {
                  s="wxyz";
                  output[l]=output[l]+s[i];
                  l++;
              }
            }
        }

    }
    else
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<count;j++)
            {
                output[size]=output[j];
                   size++;
            }

        }
         int l=0;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<count;j++)
            {
              if(k==2)
              {
                  s="abc";
                  output[l]=output[l]+s[i];
                  l++;
              }
              if(k==3)
              {
                  s="def";
                  output[l]=output[l]+s[i];
                  l++;
              }
              if(k==4)
              {
                  s="ghi";
                  output[l]=output[l]+s[i];
                  l++;
              }
              if(k==5)
              {
                  s="jkl";
                  output[l]=output[l]+s[i];
                  l++;
              }
              if(k==6)
              {
                  s="mno";
                  output[l]=output[l]+s[i];
                  l++;
              }
              if(k==8)
              {
                  s="tuv";
                  output[l]=output[l]+s[i];
                  l++;
              }
            }
        }

    }
    return size;

}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

