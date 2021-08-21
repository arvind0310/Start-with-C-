// arr=[5,7,10,20,_,_]

// array must have extra space to add new inserted number.

#include <iostream>
using namespace std;

int main()
{
    
int arr[10]={5,7,10,20};
int n=4;
int cap=sizeof(arr)/sizeof(arr[0]);
int pos=2;
int x=12;

// if(n==cap)
// {
//     cout<<"no space in arr";
// }

int idx=pos-1;
for(int i=n-1;i>=idx;i--)
{
    arr[i+1]=arr[i];
}
arr[idx]=x;

cout<<"new array is:"<<endl;
for (int i=0;i<n+1;i++) // will run 5 times {n=4+1}
{
    cout<<arr[i]<<" ";
}

  return 0;  
}


