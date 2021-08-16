 /*1. rectangle 
 
user will give rows and column
****         
****  
****

*/


//CODE:
#include <iostream>
using namespace std;

main() {

int row,col;
cin>>row>>col;
for(int i=1;i<=row;i++)
{
    for (int j=1;j<=col;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}


   return 0;
}

/* 2. Hollow rectangle 

********************
*                  *
*                  *
*                  *
*                  *
******************** */

#include <iostream>
using namespace std;

main() {

int row,col;
cin>>row>>col;
for(int i=1;i<=row;i++)
{
    for(int j=1;j<=col;j++)
    {
        if(i==1 ||i==row  ||  j==1|| j==col)
        {
            cout<<"*";
        }
        else
        {
           cout<<" " ;
        }
    }
    cout<<endl;
}


   return 0;
}










/* 3. Inverted Pyramid { only "n" is given as we go down decrease the the coloumn}
****
***
**
*     


*/

// method 1: 

#include <iostream>
using namespace std;

main() {

int n;
cin>>n;
for (int i=1;i<=n;i++)
{
    for (int j=n;j>=i;j-- )
    {
        cout<<"*";
    }
    cout<<endl;
}


   return 0;
}

//method 2

#include <iostream>
using namespace std;

main() {

int n;
cin>>n;
for (int i=n;i>=1;i--)
{
    for (int j=1;j<=i;j++ ) // this loop will iterate "i" times{5 times,4 times,3 times...1 times}
    {
        cout<<"*";
    }
    cout<<endl;
}


   return 0;
}
