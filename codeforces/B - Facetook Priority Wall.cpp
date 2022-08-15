#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;

bool priorty(const pair<string, int>& lhs, const pair<string, int>& rhs) {
  return lhs.second > rhs.second;
};

int main() {
  string my_name, x, y;
  cin>>my_name;
  int n, sentence_length;
  cin>>n;
  map<string,int> mp;
  multimap<int,string, greater<int>> res;
  while(n--) {
    vector<string> sentence;
    sentence_length = 5;
    while(sentence_length > 0) {
      cin>>x;
      sentence.push_back(x);
      if(sentence_length == 4 && x == "likes") sentence_length--;
      sentence_length--;
    }

    x = sentence[0];
    if(sentence[1] == "likes") y = sentence[2].substr(0,sentence[2].length()-2);
    else y = sentence[3].substr(0,sentence[3].length()-2);

    if(mp.count(x) == 0 && x != my_name) mp.insert(make_pair(x, 0));
    if(mp.count(y) == 0 && y != my_name) mp.insert(make_pair(y, 0));

    if(x==my_name) {
      if(sentence[1] == "posted") mp[y] += 15;
      else if(sentence[1] == "commented") mp[y] += 10;
      else mp[y] += 5;
    }
    else if(y==my_name) {
      if(sentence[1] == "posted") mp[x] += 15;
      else if(sentence[1] == "commented") mp[x] += 10;
      else mp[x] += 5;
    }

  }

  for(auto it : mp) {
    res.insert(make_pair(it.second, it.first));
  }

  for(auto it : res) {
    cout<<it.second<<endl;
  }
  
  return 0;
}
