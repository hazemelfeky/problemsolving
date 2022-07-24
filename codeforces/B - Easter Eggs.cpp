#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main() {
  int n,x = 0;
  cin>>n;
  map<int,char> mp;
  mp.emplace(pair<int,char> {0,'R'});
  mp.emplace(pair<int,char> {1,'O'});
  mp.emplace(pair<int,char> {2,'G'});
  mp.emplace(pair<int,char> {3,'Y'});
  mp.emplace(pair<int,char> {4,'B'});
  mp.emplace(pair<int,char> {5,'I'});
  mp.emplace(pair<int,char> {6,'V'});
  for(int i = 0; i < n; i++){
    if(n%7==1 && i == n-4){
      cout<<"R";
      x++;
    }else if(n%7==2 && i == n-4){
      cout<<"RO";
      x+=2;
      i++;
    }else if(n%7==3 && i == n-4){
      cout<<"ROG";
      x+=3;
      i+=2;
    }
    else cout<<mp[(i-x)%7];
  }
  return 0;
}
