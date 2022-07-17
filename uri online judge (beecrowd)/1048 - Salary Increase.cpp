#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  float x, perc;
  cin>>x;
  if (x <= 400.1){
    perc = 0.15;
  }else if(x <= 800.0){
    perc = 0.12;
  }else if(x <= 1200.0){
    perc = 0.1;
  }else if(x <= 2000.0){
    perc = 0.07;
  }else{
    perc = 0.04;
  }
  
  cout<<"Novo salario: "<<fixed<<setprecision(2)<<x + x * perc<<endl;
  cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<x * perc<<endl;
  cout<<"Em percentual: "<<fixed<<setprecision(0)<<100 * perc<<" %"<<endl;
  return 0;
}
