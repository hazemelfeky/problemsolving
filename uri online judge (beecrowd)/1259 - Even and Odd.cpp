#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main() {
  int n, x;
  cin>>n;
  multiset<int> even;
  multiset<int, greater<int>> odd;
  while(n--) {
    cin>>x;
    if(x%2==0) even.emplace(x);
    else odd.emplace(x);
  }
  for(auto it:even) cout<<it<<endl;
  for(auto it:odd) cout<<it<<endl;

  return 0;
}
