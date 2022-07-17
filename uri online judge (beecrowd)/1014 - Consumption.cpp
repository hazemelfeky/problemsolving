#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  int x;
  float y, res;
  cin>>x>>y;
  res = x/y;
  cout<<fixed<<setprecision(3)<<res<<" km/l"<<endl;
  return 0;
}
