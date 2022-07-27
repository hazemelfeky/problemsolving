#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main() {
  double n, x, y, per = 0;
  cin>>n;
  while(n--) {
    cin>>x>>y;
    if(per == 0) per = y/x;
    else {
      if(y/x != per) {
        cout<<"Happy Alex";
        return 0;
      }
    }
  }
  cout<<"Poor Alex";
  return 0;
}
