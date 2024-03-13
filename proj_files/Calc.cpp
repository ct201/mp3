#include <iostream>
using namespace std;
float simpleint(float principal, float rate, float time){
    return principal*rate/100*time;
}
float CompInt(float principal, float rate, float time, float number){
    return principal * (1 + (rate/100)/number * (number * time));
}

int main(){

    cout << simpleint(100,6,2) << endl;
    cout << CompInt(100,6,2,15) << endl;
    
    return 0;
}