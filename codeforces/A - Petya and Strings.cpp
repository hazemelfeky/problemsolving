#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
 
char tolower(char in) {
  if (in <= 'Z' && in >= 'A')
    return in - ('Z' - 'z');
  return in;
}
 
int main() {
  string s1, s2;
  int res = 2;
  cin>>s1>>s2;
  for(int i = 0; i<s1.length(); i++) {
    if(tolower(s1[i]) > tolower(s2[i])) {
      res = 1;
      break;
    }else if(tolower(s1[i]) < tolower(s2[i])) {
      res = -1;
      break;
    }
  };
  if(res == 2) res = 0;
  cout<<res;
}
