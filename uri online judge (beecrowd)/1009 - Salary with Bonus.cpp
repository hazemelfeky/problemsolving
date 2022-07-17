#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  string name;
  float a,b;
  cin>>name;
  cin>>a>>b;
  cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<a + b * 0.15<<endl;
  return 0;
}
