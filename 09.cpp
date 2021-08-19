/* WRONG */

#include<iostream>
using namespace std;
int i;
int prime(int a,int b){
    for(a;a<=b;a++)
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
            break;
            }
        }
        return a; // a will print thats it(fn over) ..ex: i/p>>10,20  o/p>>10
    }
    return 0;
}
 
int main(){
    int a,b;
    cin>>a>>b;
    cout<<prime(a,b);
    
    
    
    return 0;
}
_________________________________ ___________________________________ ____________________________________________________ ____________________
  
  /*      correct  */
  
  
  
  
  
