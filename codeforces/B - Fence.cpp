#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
  int n,k,x;
  cin>>n>>k;
  vector<int> v{0};
  for (int i = 0; i < n; i++)
  {
    cin>>x;
    v.push_back(x);
  }
 
  int sum = 0, min_sum, j = 1;
  for(int i = 1; i <= k; i++){
    sum += v[i];
  }
  min_sum = sum;
  for(int i = 2; i <= n-k+1; i++){
    sum = sum - v[i-1] + v[i+k-1];
    if(min_sum > sum){
      min_sum = sum;
      j = i;
    }
  }
  cout<<j;
  return 0;
}
