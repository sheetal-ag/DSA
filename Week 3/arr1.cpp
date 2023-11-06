#include <iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[], int size) {
  for(int i=0; i<size; i++) {
    cout << arr[i] << " " ;
  }
  cout << endl;
}
//******Linear search***** 
//present -> true;
//absent -> false;

bool linearSearch(int arr[], int size, int target) {

  for(int i=0; i<size; i++) {
    if(arr[i] == target) {
      //found
      return true;
    }
  }
  //not found
  return false;
}

int main(){
  int arr[5]={2,4,6,8,10}
  int size=5;
 int target=10;

bool ans= linearSearch(arr,size,target);
if(ans==1){
  cout<<"Target found"<<endl;
}
else{
cout<<"Target not found"<<endl;
}

return 0;
}


//COUNT 0s AND 1s IN THE ARRAY
void countZeroOne(int arr[], int size) {
  int zeroCount = 0;
  int oneCount = 0;

  for(int i=0; i<size; i++) {
    if(arr[i] == 0) {
      zeroCount++;
    }
    if(arr[i] == 1) {
      oneCount++;
    }
  }

  cout << "ZeroCount: " << zeroCount << endl;
  cout << "oneCOunt: " << oneCount << endl;
  
}

//MINIMUM NUMBER IN AN ARRAY
int findMinimumInArray(int arr[], int size) {
  //ans store variable
  int minAns = INT_MAX;

  for(int i=0; i<size; i++) {
    if(arr[i] < minAns) {
      minAns = arr[i];
    }
  }

  return minAns;
}


//REVERSE AN ARRAY
void reverseArray(int arr[], int size) {
  

  //using for loop:
  //for(int left =0, right=size-1; left<=right; left++, right--) {
  //  swap(arr[left], arr[right]);
  // }
  
  int left = 0;
  int right = size - 1;
  while(left <= right) {
    swap(arr[left], arr[right]);
    left++;
    right--;
  }

  //printing the array;
  for(int i=0; i<size; i++) {
    cout << arr[i] << " "; 
  }
  
}



//EXTREME PRINT IN AN ARRAY

void extremePrint(int arr[], int size) {
  int left = 0;
  int right = size - 1;

  while(left <= right) {
    if(left == right) {
      cout << arr[left] << endl;  
    }
    else {
      cout << arr[left] << endl;
      cout << arr[right] << endl;
    }
    
    left++;
    right--;
  }
  
}

