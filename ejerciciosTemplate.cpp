#include <iostream>
using namespace std;
template<typename R>
R resta(R a, R b){
    return a-b;
}
int main(){
    float irpta=resta<float> (-989.9,7898);
    cout<<irpta;
    return 0;
}