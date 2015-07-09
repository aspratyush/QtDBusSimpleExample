/**** system includes****/
#include <QCoreApplication>
#include <memory>

/**** project includes****/
#include "icalculator.h"
#include "ccalculator.h"
#include "calculatorAdapter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //init Obj
    ICalculator* cal = new CCalculator();

    //inject Obj to DbusAdapter
    new CalculatorAdaptor(cal);

    //create conn to D-Bus
    QDBusConnection conn = QDBusConnection::sessionBus();
    if (!conn.isConnected()){
        std::cerr<<"Error connecting to D-Bus\n";
        std::cerr<<qPrintable(conn.lastError().message())<<std::endl;
        return EXIT_FAILURE;
    }

    //register object using serverImpl
    if ( !conn.registerObject("/serverEg", cal) ){
        std::cerr<<"Error creating object\n";
        std::cerr<<qPrintable(conn.lastError().message())<<std::endl;
        return EXIT_FAILURE;
    }
    std::cout<<"Object registered...\n";

    //register service
    if ( !conn.registerService("com.wp.asp.ServerTest") ){
        std::cerr<<"Error registering service\n";
        std::cerr<<qPrintable(conn.lastError().message())<<std::endl;
        return EXIT_FAILURE;
    }
    std::cout<<"Service registered...\n";

//    //init Obj
//    std::shared_ptr<CCalculator> cal(new CCalculator());
//    //hello world
//    cal->helloWorld();
//    //add
//    cal->addition(5,4);
//    //subtract
//    cal->subtraction(12,13);
//    //multiply
//    cal->multiply(12,45);
//    //divide
//    cal->divide(45,4);
//    delete(cal);
//    std::cout<<"Deleted object..\n";

    std::cout<<"Waiting...\n";
    return a.exec();

}
