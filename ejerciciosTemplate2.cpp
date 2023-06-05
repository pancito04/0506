#include<iostream>
using namespace std;
template <typename T>
T minimo(T _a, T _b, T _c){
    return (_a<_b&&_a<_c)? _a : (_b<_c)&&(_b<_a)? _b : _c;
}
int main(){
    int a,b,c,i;
    cin>>a>>b>>c;
    i=minimo<int>(a,b,c);
    cout<<"El minimo es "<<i<<endl;
    float fa,fb,fc,fi;
    cin>>fa>>fb>>fc;
    fi=minimo<float>(fa,fb,fc);
    cout<<"El minimo es "<<fi<<endl;
    return 0;
}