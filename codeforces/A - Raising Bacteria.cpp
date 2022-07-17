#include<iostream>
#include <cmath>
#include<set>
using namespace std;
int main(){
  int x, res = 0, binary, reminder;
  cin>>x;
  while (x != 0) {
    reminder = x % 2;
    if(reminder){
      res++;
    }
    x = x / 2;
  }
  cout<<res;
}
