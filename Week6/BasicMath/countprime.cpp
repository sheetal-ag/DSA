/*204. Count Primes

Given an integer n, return the number of prime numbers that are strictly less than n*/
//Naive Approach O(n^2)

#include<iostream>
using namespace std;

class Solution
{
    public:
    bool isPrime(int n){
        if(n<=1)
         return false;
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }


int countPrimes(int n){
    int c=0;
    int count;

    for(int i=0;i<n;i++){
        if (isPrime(i)){
            c++;
        }
    }
    return c;
    
}

};

int main(){
    Solution myObj;
   cout<< myObj.countPrimes(n);
   return  0;


}
