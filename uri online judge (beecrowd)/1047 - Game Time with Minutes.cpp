#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  int h1, h2, m1, m2, hres, mres;
  cin>>h1>>m1>>h2>>m2;
  hres = h2 - h1;
  mres = m2 - m1;
  if(mres < 0){
    mres += 60;
    hres--;
  }
  if(hres < 0){
    hres += 24;
  }
  if(mres == 0 && hres == 0){
    hres = 24;
  }
  cout<<"O JOGO DUROU "<<hres<<" HORA(S) E "<<mres<<" MINUTO(S)"<<endl;
  return 0;
}
