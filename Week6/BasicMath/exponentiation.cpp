//1)Slow Exponentiation(Naive Approach) O(b)
#include<iostream>
using namespace std;

int slowExponentiation(int a,int b){
int ans=1;
  for(int i=0;i<b;i++)
  {
      ans*=a;
   }
  return ans;
}

int main(){
cout<<slowExponentiation(5,4)<<endl;
return 0;
}
  
//2)Fast Exponentiation O(log b)
#include<iostream>
using namespace std;

int fastExponentiation(int a,int b){
int ans=1;
  while(b>0)
  { if(b&1){
    ans=ans*a;  //odd
   }
   a=a*a;
   b>>=1;
  }
  return ans;
}

int main(){
cout<<fastExponentiation(5,4)<<endl;
return 0;
}
