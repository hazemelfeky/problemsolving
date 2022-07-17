#include<iostream>
using namespace std;
bool is_sympol(char x){
  bool s1 = false, s2 = false;
  for( char i = '!'; i < '0'; i++){
    if(x == i){s1 = true; break;}
  }
  if(!s1){
    for( char i = ':'; i < 'A'; i++){
      if(x == i){s2 = true; break;}
    }
  }
  return s1 || s2;
}
int main(){
  string res = "NO";
  int x, pos;
  int arr[4][4]={0};
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      cin>>arr[i][j];
    }
  }
  for(int i = 0; i < 4; i++){
    if(arr[i][3] == 1){
      for(int j = 0; j < 3; j++){ // check if car same p and road are open
        if(arr[i][j] == 1){
          res = "YES";
          break;
        }
      }
      if(res == "YES"){
        break;
      }
      if(i == 0){
        if(arr[1][0] || arr[2][1] || arr[3][2]){
          res = "YES";
          break;
        }
      }
      if(i == 1){
        if(arr[0][2] || arr[3][1] || arr[2][0]){
          res = "YES";
          break;
        }
      }
      if(i == 2){
        if(arr[0][1] || arr[1][2] || arr[3][0]){
          res = "YES";
          break;
        }
      }
      if(i == 3){
        if(arr[0][0] || arr[1][1] || arr[2][2]){
          res = "YES";
          break;
        }
      }
      if(res == "YES"){
        break;
      }
    }
    if(res == "YES"){
      break;
    }
  }
 
  cout<<res;
}
