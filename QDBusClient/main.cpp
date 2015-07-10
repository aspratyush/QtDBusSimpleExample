/**** system includes****/
#include <QCoreApplication>
#include <iostream>

/**** project includes****/
#include "signalhandler.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //connect to DBus session-bus
    QDBusConnection conn = QDBusConnection::sessionBus();
    if (!conn.isConnected()){
        std::cerr<<"Error connecting to D-Bus session-bus\n";
        std::cerr<<qPrintable(conn.lastError().message())<<std::endl;
        return EXIT_FAILURE;
    }
    std::cout<<"Connected to session-bus\n";


    //connect to the interface exposed by the service
    com::wp::asp::Calculator* mIFace = new com::wp::asp::Calculator
            ("com.wp.asp.ServerTest", "/serverEg", conn, 0);
    if (!mIFace->isValid()){
        std::cerr<<"Error connecting to interface provided\n";
        std::cerr<<qPrintable(conn.lastError().message())<<std::endl;
        return EXIT_FAILURE;
    }
    std::cout<<"Connected to interface..\n";

    //init signal-handling object
    SignalHandler *sHandler = new SignalHandler();

    //subscribe to signal
    if( !QObject::connect(mIFace, SIGNAL(computationCompleted(QString)), sHandler, SLOT(printToConsole(QString))) ){
        std::cerr<<"Error connecting to D-Bus signal\n";
        std::cerr<<qPrintable(conn.lastError().message())<<std::endl;
        return EXIT_FAILURE;
    }
    std::cout<<"Listening for signal..\n";

    int ch = 0;
    int res;

    //loop over choices
    do{

        a.processEvents();

        std::cout<<"Enter choice:\n"
                "1) helloWorld\n"
                "2) Addition\n"
                "3) Subtraction\n"
                "4) Multiple\n"
                "5) Divide\n"
                "0) exit\n";
        std::cin>>ch;

        switch(ch){

            case 0:{
                break;
            }
            case 1:{
                QString str = mIFace->helloWorld();
                std::cout<<"Server says = "<<str.toStdString()<<"\n";
                break;
            }
            case 2:{
                res = mIFace->addition(12,13);
                std::cout<<"12+13 = "<<res<<std::endl;
                break;
            }
            case 3:{
                res = mIFace->subtraction(13,14);
                std::cout<<"13-14 = "<<res<<std::endl;
                break;
            }
            case 4:{
                res = mIFace->multiply(14,15);
                std::cout<<"14*15 = "<<res<<std::endl;
                break;
            }
            case 5:{
                res = mIFace->divide(15,4);
                std::cout<<"15/4 = "<<res<<std::endl;
                break;
            }
            default:{
                std::cout<<"Invalid choice.. enter again";
                break;
            }

        }

    }while(ch!=0);

    //delete(iFace);
    //return a.exec();
    return EXIT_SUCCESS;
}
