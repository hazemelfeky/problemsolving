#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int t, left = 0, right = 0, len;
  string x;
  cin>>t;
  while(t--){
    right = 0;
    left = 0;
    cin>>x;
    for(int i = 0; i< x.length(); i++){
      if(x[i] == '<') left++;
      if(x[i] == '>'){
        if(left > 0){
          left--;
          right++;
        }
      }
    }
    cout<<right<<endl;
  }
  return 0;
}
