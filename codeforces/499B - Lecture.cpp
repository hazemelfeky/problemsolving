#include<iostream>
#include<algorithm>
#include<map>
using namespace std;


int main() {
  int n,m;
  cin>>n>>m;
  string x, y, res;
  map<string, string> mp;
  while(m--) {
    cin>>x>>y;
    mp[x] =y;
  }
  while(n--) {
    cin>>y;
    if(y.length() > mp[y].length()) {
      res += mp[y] + " ";
    }else {
      res += y + " ";
    }
  }
  cout<<res;
  return 0;
}
