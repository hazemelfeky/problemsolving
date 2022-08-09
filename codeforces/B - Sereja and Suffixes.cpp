#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main() {
  int n, m, x;
  cin>>n>>m;
  int nums[n], sums[n+1] = {0};
  for(int i = 0; i < n; i++) {
    cin>>nums[i];
  }
  bool v[100002] = {false};
  for(int i = n-1; i>=0; i--) {
    if(!v[nums[i]])
      sums[i] = 1;
    v[nums[i]] = true;
  }
  for(int i = n-1; i>=0; i--) {
    sums[i] += sums[i+1];
  }
  while(m--) {
    cin>>x;
    cout<<sums[x-1]<<endl;
  }

}
