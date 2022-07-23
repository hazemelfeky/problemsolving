#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main() {
  string s;
  int x, res = 0;
  cin>>s;
  while(true) {
    x = 0;
    if(s.length() < 2) break;
    for(int i = 0; i<s.length(); i++) {
      x += s[i] - '0';
    }
    s = to_string(x);
    res++;
  }
  cout<<res;
  return 0;
}
