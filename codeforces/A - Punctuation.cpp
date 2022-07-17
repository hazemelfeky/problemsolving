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
  string x, res;
  char letter, last;
  bool symp = false;
  getline(cin, x);
  for(int i = 0; i < x.length(); i++){
    letter = x[i];
    if(is_sympol(letter)){
      res += letter;
      res += ' ';
      symp = true;
    }
    else if(letter == ' '){}
    else{
      if(last == ' '){
        res += ' ';
        res += letter;
      }
      else{
        res+= letter;
        symp = false;
      }
    }
    if(symp){
      last = 'm';
    }else last = x[i];
  }
  cout<<res;
}
