#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main() {
  string x,rev = "";
  cin>>x;
  for (int i = x.size()-1; i >= 0; i--) {
    rev += x[i];
  }
  cout<<x<<rev;
  return 0;
}
