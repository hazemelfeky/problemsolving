#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main() {
  int n,x;
  cin>>n;
  vector<int> v;
  vector<int> sorted;
  for (int i = 0; i < n; i++) {
    cin>>x;
    v.push_back(x);
    sorted.push_back(x);
  }
  sort(sorted.begin(), sorted.end());
  
  string ans = "no";
  int s=0, e=0, mid = 0, res=0;
  for(int i=0; i<n; i++) {
    if(v[i]==sorted[i] && s==e) {
      e++;
      s++;
    }else if(v[i] != sorted[i]) {
      e+= 1+mid;
      mid = 0;
    }else mid++;
    if (v[i]==sorted[i] && v[i+1]==sorted[i+1] && s!=e) {
      break;
    }
    
  }
  if(s==e) {
    cout<<"yes"<<endl;
    cout<<1<<" "<<1;
  }else {
    vector<int> subv(v.begin()+s, v.begin()+e);
    vector<int> subsorted(sorted.begin()+s, sorted.begin()+e);
    int sz = subsorted.size();
    for(int i=0; i<=e-s; i++) {
      if(subv[i] == subsorted[sz -i -1]) {
        res++;
      }
    }
    if(res == sz) {
      ans = "yes";
    }
    if(ans == "no") {
      cout<<ans;
    }
    else {
      cout<<ans<<endl;
      cout<<s+1<<" "<<e;
    }
  }
 
  return 0;
}
