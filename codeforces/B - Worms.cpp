#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
using namespace std;

int main() {
  int n, x, sum = 0;
  vector<int> v;
  vector<int> sums{0};
  cin>>n;
  for (int i = 0; i < n; i++) {
    cin>>x;
    v.push_back(x);
    sum += x;
    sums.push_back(sum);
  }
  vector<int> worms{0};
  for(int i = 1, j = 0; i <= sum; i++) {
    if(i>sums[j]) {
      j++;
    }
    worms.push_back(j);
  }
  int m;
  cin>>m;
  while (m--) {
    cin>>x;
    cout<<worms[x]<<endl;
  }
}
