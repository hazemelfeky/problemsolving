#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;

int main() {
  int n, groups = 0;
  cin>>n;
  string s, current="";
  while(n--) {
    cin>>s;
    if(current == "" || s != current) {
      current = s;
      groups += 1;
    }
  }
  cout<<groups;
}
