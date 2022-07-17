#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
  long long n, k, res = -1;
  cin>>n>>k;
  if (n%2 == 0)
  {
    if (k > n/2)
    {
      res = (k-(n/2)) *2;
    }else{
      res = (k*2) -1;
    }
  }else{
    if (k > (n/2) +1)
    {
      res = (k%((n/2) +1)) * 2;
    }else{
      res = k*2-1;
    }
  }
  cout<<res;
  return 0;
}
