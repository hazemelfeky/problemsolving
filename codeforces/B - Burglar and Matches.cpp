#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main() {
  int n,m,a,b, res = 0;
  cin>>n>>m;
  multimap<int,int,greater<int>> mp;
  while (m--) {
    cin>>a>>b;
    mp.insert({b, a});
  }
  int taken, i = 0;
  for(auto it : mp) {
    if( it.second < n) {
      res += it.second * it.first;
      n -= it.second;
    }else {
      res += it.first * n;
      break;
    }
  }
  cout<<res;
}
