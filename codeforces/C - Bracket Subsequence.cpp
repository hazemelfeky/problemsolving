#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<set>
#include<map>

using namespace std;

int main() {
  int n, k;
  string s;
  int open = 0;
  cin>>n>>k;
  cin>>s;
  for (int i = 0; i < k-open; i++) {
    if(s[i] == '(') open++;
    else open--;
    cout<<s[i];
  }
  while(open--) {
    cout<<')';
  }
  
  return 0;
}
