#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
using namespace std;


int main() {
  map<int,vector<int>> mp = {{1,{}}, {2,{}}, {3,{}}};
  int n, x;
  cin>>n;
  for(int i = 1; i<=n; i++) {
    cin>>x;
    mp[x].push_back(i);
  }
  int ans = min(mp[1].size(), min(mp[2].size(), mp[3].size()));
  cout<<ans<<endl;
  for(int i = 0; i<ans; i++) {
    cout<<mp[1][i]<<" "<<mp[2][i]<<" "<<mp[3][i]<<endl;
  }
}
