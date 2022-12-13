#include<iostream>

using namespace std;

int adiff(int a, int b){
  a = a%360;
  b = b%360;
  int result;
  if(a > b){
    result = a - b;
  }else{
    result = b - a;
  }
  if(result > 180){
    result = 360 - result;
  }
  return result;
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
