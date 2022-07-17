#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  float x,y,z, res;
  cin>>x>>y>>z;

  res = ((x*2.0) + (y*3.0) + (z*5.0)) / 10 ;
  cout<<"MEDIA = "<<fixed<<setprecision(1)<<res<<endl;
  return 0;
}
