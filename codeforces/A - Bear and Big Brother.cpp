#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<queue>
using namespace std;
 
int main() {
  int a, b, res = 0;
  cin>>a>>b;
  while(a<=b) {
    b = b*2;
    a = a*3;
    res++;
  }
  cout<<res;
  return 0;
}
