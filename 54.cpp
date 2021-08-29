// syntax : string var_name



#include<iostream>
#include<string>
using namespace std;


int main(){
    
string name;
cin>>name; // arvind

cout<<name; // arvind


    return 0;
}


//_________________________+____________________________________________________+______________________________________+_____________________________


#include<iostream>
#include<string>
using namespace std;


int main(){
    
string name="arvind";

cout<<name;  // arvind


    return 0;
}


//_________________________+____________________________________________________+______________________________________+_____________________________


#include<iostream>
#include<string>
using namespace std;


int main(){
    
string name="arvind kumar yadav";

cout<<name;  // arvind kumar yadav


    return 0;
}

//_________________________+____________________________________________________+______________________________________+_____________________________

#include<iostream>
#include<string>
using namespace std;


int main(){
    
string name(5,'n');

cout<<name;   // nnnnn


    return 0;
}

//_________________________+____________________________________________________+______________________________________+_____________________________


#include<iostream>
#include<string>
using namespace std;


int main(){
    
string name;

cin>>name; // arvind kumar
cout<<name;  // arvind


    return 0;
}


//_________________________+____________________________________________________+______________________________________+_____________________________



// cin considers a space (whitespace, tabs, etc) as a terminating character, 
//which means that it can only display a single word (even if you type many words):


// solution : use getline(cin, var_name) function 

#include<iostream>
#include<string>
using namespace std;


int main(){
    
string name; // arvind kumar yadav

getline(cin,name); // take all the input in a single line

cout<<name;  // arvind kumar yadav


    return 0;
}
