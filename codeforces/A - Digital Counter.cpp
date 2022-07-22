#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main() {
  string x;
  cin>>x;
  map<char, int> mp{{'0',2}, {'1',7}, {'2',2}, {'3',3}, {'4',3}, {'5',4}, {'6',2}, {'7',5}, {'8',1}, {'9',2}};
  char d1 = x[0], d2 = x[1];
  cout<<mp[d1]*mp[d2];
}
