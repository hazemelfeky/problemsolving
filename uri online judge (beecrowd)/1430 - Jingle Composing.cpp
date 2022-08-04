#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main() {
  string s;
  double c = 0;
  int res = 0;
  
  map<char, double> mp {{'W',1},{'H',0.5},{'Q',0.25},{'E',0.125},{'S',0.0625},{'T',0.03125},{'X',0.015625}};
  while(true) {
    cin>>s;
    if(s != "*") {
      for(int i=0; i < s.size(); i++) {
        if(s[i] == '/') {
          // cout<<c<<endl;
          if(c == 1) {
            res++;
          }
          c = 0;
        }
        else {
          c += mp[s[i]];
          // cout<<s[i]<<" "<<mp[s[i]]<<endl;
        }
      }
      cout<<res<<endl;
      res = 0;
    }else break;
  }
  return 0;
}
