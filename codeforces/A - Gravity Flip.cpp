#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
 
int main() {
  int n, x;
  cin>>n;
  vector<int> v;
  while(n--) {
    cin>>x;
    v.push_back(x);
  };
  sort(v.begin(), v.end());
  for(auto it: v) {
    cout<<it<<" ";
  }
}
