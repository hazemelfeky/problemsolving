#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<queue>
using namespace std;
 
int main() {
  int n, x, agreed, res = 0;
  vector<int> v;
  cin>>n;
  while (n--) {
    agreed = 0;
    for(int i = 0; i<3; i++) {
      cin>>x;
      agreed += x;
    }
    if(agreed>=2) res++;
  }
  cout<<res;
  return 0;
}
