// Logical Operators
// www.DarkCybernetics.com
// All Rights Reserved 2019.


#include<iostream>


using namespace std;

int main()
{
bool awake = true;
bool alive = true;
bool dead = false;

cout<<"awake:"<<awake<<endl;
cout<<"alive:"<<alive<<endl;
cout<<"dead"<<dead<<endl;
cout<<"++++++++++++++++++++++++++++++"<<endl<<endl;
if(awake&& dead){// And
    cout<< "undead"<<endl;
}
else{
    cout<<"Normal Human"<<endl;
}
if(!awake&& dead){//Not
    cout<< "undead"<<endl;
}
else{
    cout<<"Normal Human"<<endl;
}
if(awake||dead){// OR
    cout<< "undead"<<endl;
}
else{
    cout<<"Normal Human"<<endl;
}
}
