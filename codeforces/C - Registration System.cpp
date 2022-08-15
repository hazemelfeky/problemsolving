#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  map<string,int> mp;
  string x;
  while(n--) {
    cin>>x;
    if(mp.find(x) == mp.end()) {
      cout<<"OK"<<endl;
      mp.emplace(x,1);
    }else {
      cout<<x<<mp.at(x)<<endl;
      mp.at(x)++;
    }
  };
  return 0;
}
