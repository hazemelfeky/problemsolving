#include<iostream>
using namespace std;
int main(){
  int n, x, res = 0, i = 1, z;
  cin>>n>>x;
  for (int i = 1; i <= n; i++)
  {
    if( x % i == 0){
      z = x / i;
      if( z <= n ) res++;
    }
    if ( i > x ) break;
  }
  cout<<res;
  return 0;
}
