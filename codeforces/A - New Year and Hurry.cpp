#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
using namespace std;

int main() {
  int n, k, min = 5, remain, res = 0;
  cin>>n>>k;
  remain = 4*60 - k;
  while(n--) {
    if(remain >= min) {
      remain -= min;
      min += 5;
      res++;
    }else break;
  }
  cout<<res;
  return 0;
}
