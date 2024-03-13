#include <iostream>

float simpleint(float Principle, float Rate,float Time)
{
    return Principle * Rate/100 * Time;
}
float compoundint(float Principle,float Rate, float Time, float Number)
{
    return Principle* (1+(Rate/100)/Number * (Number * Time));
}

int main(){
    std::cout << simpleint(100,6,2) << std::endl;
    std::cout << compoundint(100,6,2,15) << std::endl;
}