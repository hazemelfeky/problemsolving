#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main() {
  string name, status, winner = "";
  set<string> yes;
  set<string> no;
  while(true) {
    cin>>name;
    if(name == "FIM") break;
    cin>>status;
    if(status == "YES") {
      if(winner.length() < name.length()) winner = name;
      yes.emplace(name);
    }else {
      no.emplace(name);
    }
  }
  for(auto it: yes) cout<<it<<endl;
  for(auto it: no) cout<<it<<endl;
  cout<<endl<<"Amigo do Habay:"<<endl<<winner<<endl;
  return 0;
}
