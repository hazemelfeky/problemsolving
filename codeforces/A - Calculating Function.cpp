#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
  long long x, res;
  cin>>x;
  if(x%2 == 0){
    res = x/2;
  }else{
    res = -((x+1) /2);
  }
  cout<<res;
  return 0;
}
