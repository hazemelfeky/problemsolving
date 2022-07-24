#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
using namespace std;
int main() {
  int n;
  string s;
  cin>>n>>s;
  deque<char>dq;
  for (int i = 0; i < n; i++)
  {
    if(i==0) dq.push_front(s[i]);
    else if(n%2==0){
      if(i%2==0) {
        dq.push_front(s[i]);
      }else {
        dq.push_back(s[i]);
      }
    }else{
      if(i%2!=0) {
        dq.push_front(s[i]);
      }else {
        dq.push_back(s[i]);
      }
    }
  }
  for(auto it: dq) {
    cout<<it;
  }
 
  return 0;
}
