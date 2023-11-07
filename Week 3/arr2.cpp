#include <iostream>
using namespace std;


//UNIQUE NUMBER:
int getUnique(int arr[], int n) {
  int ans = 0;
  for(int i=0; i<n; i++) {
    ans = ans^arr[i];
  }
  return ans;
}


//SORT 0s AND 1s:
//using for and while loop

void sortZeroOne(int arr[], int n) {
  int zeroCount = 0;
  int oneCount = 0;
  //stepA: Count 0 and 1
  for(int i=0; i<n; i++) {
    if(arr[i] == 0) 
      zeroCount++;
    if(arr[i] ==1) 
      oneCount++; 
  }

  //Step B: place all zeroes first
  // int i;
  // for(i =0; i<zeroCount; i++) {
  //  arr[i] = 0;
  // }
  // //Step B: place all ones first
  // for(int j = i; j<n ;j++) {
  //  arr[j] = 1;
  // }

  //EASY WAY
  int index = 0;

  while(zeroCount--) {
    arr[index] = 0;
    index++;
  }

  while(oneCount--) {
    arr[index] = 1;
    index++;
  }
  
}


//SHIFT ARRAY TO RIGHT BY 1:
//right ki disha me shift
void shiftArray(int arr[], int n) {
  //Step 1
  int temp = arr[n-1];

  //step2
  //shift -> arr[i] = arr[i-1]
  for(int i= n-1; i>=1; i--) {
    arr[i] = arr[i-1];
  }

  //step3 copy temp into 0th index
  arr[0] = temp;
}

//for left shift: arr[i]=arr[i+1]

int main(){
   int arr[] = {2,10,11,10,2,13,15,13,15};
   int n = 9;

   int finalAns = getUnique(arr, n) ;
   cout << "Final answer is: " << finalAns << endl;
  return 0;
}
