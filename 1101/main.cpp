#include<iostream>
using namespace std;

int quantity(int a, int b){
  if(a>b){
    return a-b;
  }
  else if (a<b){
    return b-a;
  }
  else {
    return 0;
  }
}

int smaller(int a, int b){
  if(a>b){
    return b;
  }
  else {
    return a;
  }
}

int main(){
  while (true){
    int a, b;
    cin >>a>>b;
    if(a <= 0 || b <= 0){
      break;
    }
    int sum = 0;
    int contador[quantity(a,b)];
    for(int i = 0; i<=quantity(a,b); i++){
      cout << smaller(a,b)+i << " ";
      sum += smaller(a,b)+i;
      contador[i] = smaller(a,b)+i;
    }
    cout <<"Sum="<<sum<<endl;
  }
  
  return 0;
}