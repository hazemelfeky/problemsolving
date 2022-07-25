#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
using namespace std;
int main() {
  int n,x;
  cin>>n;
  vector<long long> v;
  for (int i = 0; i < n; i++) {
    cin>>x;
    v.push_back(x);
  }
  vector<long long> sorted(begin(v), end(v));
  sort(sorted.begin(), sorted.end());
  vector<long long> sums;
  vector<long long> sums_sorted;
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      sums.push_back(v[i]);
      sums_sorted.push_back(sorted[i]);
    }else {
      sums.push_back(sums[i-1]+v[i]);
      sums_sorted.push_back(sums_sorted[i-1]+sorted[i]);
    }
  }
 
  int m,type,l,r;
  cin>>m;
  while(m--) {
    cin>>type>>l>>r;
    switch (type) {
    case 1:
      if(l==1) cout<<sums[r-1]<<endl;
      else cout<<sums[r-1] - sums[l-2]<<endl;
      break;
 
    case 2:
      if(l==1) cout<<sums_sorted[r-1]<<endl;
      else cout<<sums_sorted[r-1] - sums_sorted[l-2]<<endl;
      break;
    
    default:
      break;
    }
  }
  return 0;
}
