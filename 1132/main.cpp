#include<iostream>

using namespace std;

int main(){
  int x, y, c;
  cin >> x;
  cin >> y;

  if(x>y){
    c=x;
    x=y;
    y=c;
  }

  int sum = 0;
  for(int i = x; i<=y; i++){
    if(i%13 != 0){
      sum += i;
    }
  }
  cout <<sum<<endl;
  return 0;
}