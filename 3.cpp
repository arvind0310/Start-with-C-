using namespace std;

int main ()
{
  char button;
  cout<<"button number:"<<endl;
  cin>>button;
  
  if(button=='a') // here you cant do .....if(button=="a")..error...ISO C++ forbids comparison between pointer and integer
  {
      cout<<"Namaste"<<endl;
  }
   else if(button=='b')
  {
      cout<<"hello"<<endl;
  }
 else if(button=='c')
  {
      cout<<"Hola"<<endl;
  }
  else{
      cout<<"still learning "<<endl;
  }



  return 0;
}


/* with SWITCH */

#include<iostream>
using namespace std;

int main ()
{
  char button;
  cout<<"button number:"<<endl;
  cin>>button;
  
 switch(button) // switch(expression you want to compare with in below case) { as in if else method ..if(button=='a')..} here button is comparison variable
 {
     case 'a':
        cout<<"Namste"; 
        break;
     case 'b':
        cout<<"hello";
        break;
     
     case 'c':
        cout<<"hola";
        break;
        
    default:
    cout<<"Im still learning";
    break;
     
 }
