#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>
using namespace std;
int main() {
  int res = 0;
  string s;
  cin>>s;
  stack<char> stk;
  for(int i=0; i < s.length(); i++) {
    if(s[i] == '(') stk.push('(');
    else if(stk.size()) {
      stk.pop();
      res+=2;
    }
  }
  cout<<res;
  return 0;
}
