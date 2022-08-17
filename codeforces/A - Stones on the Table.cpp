#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;

int main() {
  int n, off = 0;
  cin>>n;
  char c, current='a';
  while(n--) {
    cin>>c;
    if(c != current) {
      current = c;
    }else { 
      off += 1;
    }
  }
  cout<<off;
}
