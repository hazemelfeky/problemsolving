#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main() {
  int n, x, p=0, energy=0, money=0;
  cin>>n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin>>x;
    v.push_back(x);
  }
  auto max = max_element(v.begin(), v.end());
  cout<<*max;
  return 0;
}
