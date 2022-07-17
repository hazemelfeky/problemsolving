
#include<iostream>
using namespace std;
int main(){
  int n, a, res = 0;
  cin>>n>>a;
  a--;
  int arr[n];
  for(int i = 0; i<n; i++) cin>>arr[i];
  if( arr[a] == 1) res++;
  for(int i = 1; i<n; i++){
    if( a-i>=0 && a+i<n){
      if(arr[a-i] && arr[a+i]) {
        res += 2;
      }
    }
    else if( a-i >= 0 && arr[a-i]){
      res++;
    }
    else if( a+i < n && arr[a+i]){
      res++;
    }
  }
  cout<<res;
}
