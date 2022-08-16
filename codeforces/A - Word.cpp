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
 
char toupper(char in) {
  if (in <= 'z' && in >= 'a')
    return in - 32;
  return in;
}
 
int main() {
  string s, up = "", lo = "";
  int u = 0, l = 0;
  cin>>s;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] <= 'Z') { //upper
      u++;
      up+=s[i];
      lo+=towlower(s[i]);
    }else {
      l++;
      lo+=s[i];
      up+=towupper(s[i]);
    }
  }
  if(u>l) cout<<up;
  else cout<<lo;
  
}
