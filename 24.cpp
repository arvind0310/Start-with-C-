#include<iostream>
using namespace std;
int main()
{
    int i, elem;
    int arr[50];
    
    int n ;
    cout<<"size of array: ";
    cin>>n;
    
    cout<<"\nEnter Array Elements: ";
    for(i=0; i<n; i++) // will stop when i==n (run till n-1)....now i has become==n 0,1,2,3.4,i=5 but didnt into to the loop
        cin>>arr[i];
        
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    
    arr[i] = elem; // i has become now==n. Nth index ,or  N+1 th position.
    
    cout<<"\nThe New Array is:\n";
    for(i=0; i<n+1; i++)
        cout<<arr[i]<<"  ";
    return 0;
}
