#include "ccalculator.h"

CCalculator::CCalculator(){}

//helloworld
QString CCalculator::helloWorld(){
    std::string str = "Hello World ";
    std::cout<<str<<"at Server!\n";
    emit ICalculator::computationCompleted("Hello world completed");
    return QString::fromStdString(str);
}

//add nos.
int CCalculator::addition(int a, int b){
    int res = a+b;
    std::cout<<a<<" + "<<b<<" = "<<res<<std::endl;
    emit ICalculator::computationCompleted("Addition completed");
    return res;
}

//subtract
int CCalculator::subtraction(int a, int b){
    int res = a-b;
    std::cout<<a<<" - "<<b<<" = "<<res<<std::endl;
    emit ICalculator::computationCompleted("Subtraction completed");
    return res;
}

//multiply
int CCalculator::multiply(int a, int b){
    int res = a*b;
    std::cout<<a<<" * "<<b<<" = "<<res<<std::endl;
    emit ICalculator::computationCompleted("Multiply completed");
    return res;
}

//divide
double CCalculator::divide(int a, int b){
    int res = (double)a/b;
    std::cout<<a<<" / "<<b<<" = "<<res<<std::endl;
    emit ICalculator::computationCompleted("Divide completed");
    return res;
}
