// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3701

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int t, n, x;
  cin>>t;
  while(t--){
    x = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    for (int i = 1; i < n; i++)
    {
      for (int j = 0; j < i; j++)
      {
        if(arr[i] >= arr[j]){
          x++;
        }
      }
    }
    cout<<x<<endl;;
    
  }
  
  return 0;
}
