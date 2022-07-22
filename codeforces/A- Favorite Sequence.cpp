#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, x;
    cin>>n;
    deque<int> dq;
    while (n--)
    {
      cin>>x;
      dq.push_back(x);
    }
    while (!dq.empty())
    {
      cout<<dq.front()<<" ";
      dq.pop_front();
      if(dq.size() > 1){
        cout<<dq.back()<<" ";
        dq.pop_back();
      }
    }
    cout<<endl;
  }
  
  return 0;
}
