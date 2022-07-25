#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main() {
  int n,m;
  char color;
  cin>>n>>m>>color;
  char arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin>>arr[i][j];
    }
  }
  set<char> res;
  int arrx[] = {0,1,0,-1};
  int arry[] = {-1,0,1,0};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if(arr[i][j] == color) {
        for (int k = 0; k < 4; k++) {
          int searchx = i + arrx[k];
          int searchy = j + arry[k];
          bool valid = searchx > -1 && searchx < n && searchy < m && searchy > -1;
          if(arr[searchx][searchy] != '.' && valid &&  arr[searchx][searchy] != color) {
            res.emplace(arr[i+arrx[k]][j+arry[k]]);
          }
        }
        
      }
    }
  }
  cout<<res.size();

  return 0;
}
