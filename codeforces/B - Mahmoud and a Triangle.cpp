#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
// #include<pair>
using namespace std;
int diff, sum;
bool func(int i){
  if(i > diff && i < sum) return true;
  return false;
}
int main() {
  int n, x;
  cin>>n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin>>v[i];
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < n; i++) {
    diff = abs(v[i] - v[i+1]);
    sum = v[i] + v[i+1];
    auto it = find_if(v.begin()+i+2, v.end(), func);
    if(it != v.end()) {
      // cout<<"sum: "<<sum<<" diff: "<<diff<<" || "<< v[i]<< " - "<<v[i+1]<<" - "<<*it<<endl;
      cout<<"YES";
      return 0;
    }
  }
  cout<<"NO";

  return 0;
}
