#include<iostream>

using namespace std;
int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int position = (sizeof(arr)/sizeof(arr[0]))/2;

int binarySearch(int n){
  if(arr[position] < n) {
    position++;
    return binarySearch(n);
  }
  else if (arr[position] > n) {
    position--;
    return binarySearch(n);
  }
  else return arr[position];
}

int main() {
  int res = binarySearch(3);
  cout <<res<<endl;
}