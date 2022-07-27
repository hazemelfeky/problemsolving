#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main() {
  int n, v, x, y;
  cin>>n>>v;
  map<int, set<int>> mp;
  for(int i = 1; i <= n; i++) {
    cin>>x;
    set<int> tempset;
    while(x--) {
      cin>>y;
      tempset.emplace(y);
    }
    mp[i] = tempset;
  }
  set<int> res;
  for (int i = 1; i <= n; i++) {
    int money = v;
    for(auto it: mp[i]) {
      if(it<money) {
        res.emplace(i);
        money -= it;
      } else break;
    }
  }
  if (!res.size()) {
    cout<<0;
    return 0;
  }
  cout<<res.size()<<endl;
  for(auto it: res) {
    cout<<it<<" ";
  }
  return 0;
}
