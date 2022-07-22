#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main() {
  int n,x;
  cin>>n;
  map<int, int> mp;
  while(n--) {
    cin>>x;
    mp[x]++;
  }
  int res = 0, temp;
  for(auto it : mp) {
    temp = it.second;
    res = max(temp, res);
  }
  cout<<res;
  return 0;
}
