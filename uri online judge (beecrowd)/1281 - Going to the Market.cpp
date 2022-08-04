#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, c;
    double res = 0;
    cin>>n;
    map<string,double> lst;
    string x;
    double y;
    while(n--) {
      cin>>x>>y;
      lst[x] = y;
    }
    cin>>n;
    while(n--) {
      cin>>x>>c;
      res += lst[x] * c;
    }
    printf("R$ %.2lf\n",res); 
  }
  return 0;
}
