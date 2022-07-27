#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
using namespace std;
int main() {
  int x, current;
  while(true) {
    cin>>x;
    if(x==0) break;
    queue<int> q;
    for (int i = 1; i <= x; i++) {
      q.push(i);
    }
    cout<<"Discarded cards: ";
    while(q.size() > 1) {
      current = q.front();
      q.pop();
      cout<<current;
      if(q.size() > 1 ) cout<<", ";
      current = q.front();
      q.pop();
      q.push(current);
    }
    cout<<endl;
    cout<<"Remaining card: "<<q.front()<<endl;
  }
  return 0;
}
