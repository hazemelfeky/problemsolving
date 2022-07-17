#include<iostream>
#include<set>
using namespace std;
 
int main(){
  string res = "IGNORE HIM!";
  string word;
  cin>>word;
  set<char>x(word.begin(), word.end());
  if(x.size() % 2 == 0) res = "CHAT WITH HER!";
  cout<<res;
}
