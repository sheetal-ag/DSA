#include<stdio.h>
using namespace std;

int x=2;//global

int main(){
  x=2;
int x=20;        //local
cout<<x<<endl;   //local variable
cout<<::x<<endl;  //accessing global variable value
return 0;
}
