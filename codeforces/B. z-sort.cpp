
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n, res = 0;
  cin>>n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  sort(arr, arr + n);
  for(int i = 0, l = 0, r = n-1; i < n; i++ ){
    if(i % 2 == 0) cout<<arr[l++]<<" ";
    else cout<<arr[r--]<<" ";
  }
}
