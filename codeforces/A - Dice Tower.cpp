#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<set>
#include<cmath>
using namespace std;


int main() {
  int n, top, x1, x2;
  cin>>n;
  cin>>top;
  while(n--) {
    cin>>x1>>x2;

    if(x1==top || x1==7-top || x2==top || x2==7-top) {
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
}
