#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    (a>b&&a>c) ? cout<<a: (b>c)&&(b>a)? cout<<b:cout<<c;   
}