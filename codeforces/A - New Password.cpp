#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
using namespace std;


int main() {
  int n, r;
  cin>>n>>r;
  string s;
  for(int i = 0, j = 0; i<n; i++, j++) {
    if(j==r) j = 0;
    s+=(char)'a'+j;
  }
  cout<<s;
}
