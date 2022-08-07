#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main() {
  int n, p, t;

  cin>>n;
  while(n) {
    p = 2; t = 1;
    while(p != 1)
    {
        if(p <= n/2) p += p;
        else p -= (n - p + 1);
        t++;
    }
    printf("%d\n", t);
    break;
  }

  return 0;
}
