#include "ccalculator.h"

CCalculator::CCalculator(){}

//helloworld
QString CCalculator::helloWorld(){
    std::string str = "Hello World ";
    std::cout<<str<<"at Server!\n";
    return QString::fromStdString(str);
}

//add nos.
int CCalculator::addition(int a, int b){
    int res = a+b;
    std::cout<<a<<" + "<<b<<" = "<<res<<std::endl;
    return res;
}

//subtract
int CCalculator::subtraction(int a, int b){
    int res = a-b;
    std::cout<<a<<" - "<<b<<" = "<<res<<std::endl;
    return res;
}

//multiply
int CCalculator::multiply(int a, int b){
    int res = a*b;
    std::cout<<a<<" * "<<b<<" = "<<res<<std::endl;
    return res;
}

//divide
double CCalculator::divide(int a, int b){
    int res = (double)a/b;
    std::cout<<a<<" / "<<b<<" = "<<res<<std::endl;
    return res;
}
