#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;


int main() {
  int t, x;
  cin>>t;
  while(t--) {
    cin>>x;
    bool light = false;
    for(int i = 1; i < x; i++) {
      if(x%i==0) light = !light;
    }
    if(light) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
}
