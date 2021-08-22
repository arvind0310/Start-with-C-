#include<bits/stdc++.h>
using namespace std;
 
// This function removes an element x from arr[] and
// returns new size after removal (size is reduced only
// when x is present in arr[]
int deleteElement(int arr[], int n, int x)
{
int i;
for (i=0; i<n; i++)
    if (arr[i] == x)
        break;
 
if(i==n)
{
    return n;
}
for (int j=i; j<n-1; j++) // no need to go till last index bcz .. when 5th elemnt is cpied into 4th ...5th is empty ..stop..cz 6th to 5th not possble..capcity is 5

    {
        arr[j] = arr[j+1];
    }
return n-1; // we will print till n-1 element cz 1 is removed
}
 
/* Driver program to test above function */
int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6;
 
    // Delete x from arr[]
    int r = deleteElement(arr, n, x); // "r" is our modified range
 
    cout << "Modified array is \n";
    for (int i=0; i<l; i++)
    cout << arr[i] << " ";
 
    return 0;
}
