#include<stdio.h>
using namespace std;

int x=2;//global

int main(){
  x=2; //or ::x=2;
int x=20;        //local
cout<<x<<endl;   //local variable
cout<<::x<<endl;  //accessing global variable value
{ int x=50;
   {
     int x=44;
     cout<<x<<endl;  //scoped so prints 44
    }
 cout<<x<<endl; //outer scoped so prints 50
 cout<<::x<<endl;//prints 2
}
return 0;
}
