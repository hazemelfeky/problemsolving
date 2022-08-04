#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, x;
    vector<int> v;
    set<int> s;
    cin>>n;
    while(n--) {
      cin>>x;
      v.push_back(x);
      s.emplace(x);
    }
    int i = v.size()-1, res = 0;
    for(auto it: s) {
      // cout<<"it: "<<it<<" v[i]: "<<v[i]<<endl;
      if(it == v[i]) res++;
      i--;
    }
    cout<<res<<endl;
  }
  return 0;
}
