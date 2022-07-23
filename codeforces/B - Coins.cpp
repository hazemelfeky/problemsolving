#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
multimap<int,char> invertMap(map<char,int> const &map)
{
    multimap<int,char> multimap;
    for (auto const &pair: map) {
        multimap.insert(make_pair(pair.second, pair.first));
    }
    return multimap;
}
int main() {
  string s;
  char c;
  map<char,int> mp{{'A',0}, {'B',0}, {'C',0}};
  for (int i = 0; i < 3; i++) {
    cin>>s;
    if(s[1]=='<') {
      c = s[2];
      mp[c]++;
    }else {
      c = s[0];
      mp[c]++;
    }
  }
  if(mp['A'] == mp['B'] || mp['A'] == mp['C'] || mp['C'] == mp['B']) {
    cout<<"Impossible";
    return 0;
  }
  multimap<int,char> ans = invertMap(mp);

  for(auto it:ans) {
    cout<<it.second;
  }
  return 0;
}
