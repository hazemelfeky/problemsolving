#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main() {
  int n, x;
  cin>>n;
  vector<int> v;
  vector<int> ans(n,1);
  for (int i = 0; i < n; i++) {
    cin>>x;
    v.push_back(x);
  }
  for(int p = 0; p < n; p++) {

    for(int i = 0; p-i-1 >= 0; i++){       // left
      if( v[p-i-1] <= v[p-i] ) ans[p]++;
      else break;
    }

    for(int i = 0; p+i+1 < n; i++){        // right
      if( v[p+i+1] <= v[p+i]) ans[p]++;
      else break;
    }
  }
  auto ires = max_element(ans.begin(), ans.end());
  cout<<*ires;
  
  return 0;
}
