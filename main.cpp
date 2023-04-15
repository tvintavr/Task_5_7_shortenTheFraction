#include <iostream>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    std::cout<<"Введите числитель: ";
    int num;
    std::cin>>num;

    std::cout<<"Введите знаменатель: ";
    int denom;
    std::cin>>denom;

    if (num*denom<0) {
        num=-abs(num);
        denom=abs(denom);
    } else {
        num=abs(num);
        denom=abs(denom);
    }

    int divisor=std::sqrt(std::max(num,denom));

    while (divisor>1) {
        if ((num%divisor==0) && (denom%divisor==0)) {
            num/=divisor;
            denom/=divisor;
        }
        --divisor;
    }

    std::cout<<num<<"/"<<denom;




}
