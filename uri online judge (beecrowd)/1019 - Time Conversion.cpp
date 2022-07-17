#include <iostream>
 
using namespace std;
 
int main() {
 
    int s,m,h,x,remain;
    cin>>x;
    h=x/3600;
    remain= x%3600;
    m=remain/60;
    remain=remain%60;
    s=remain;
    cout<<h<<":"<<m<<":"<<s<<endl;
 
    return 0;
}
