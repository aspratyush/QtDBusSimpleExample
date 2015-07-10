#include "signalhandler.h"

SignalHandler::SignalHandler(QObject *parent) :
    QObject(parent)
{
//    //connect to DBus session-bus
//    QDBusConnection conn = QDBusConnection::sessionBus();
//    if (!conn.isConnected()){
//        std::cerr<<"Error connecting to D-Bus session-bus\n";
//        std::cerr<<qPrintable(conn.lastError().message())<<std::endl;
//    }
//    else{
//        std::cout<<"Connected to session-bus\n";


//        //connect to the interface exposed by the service
//        mIFace = new com::wp::asp::Calculator
//                ("com.wp.asp.ServerTest", "/serverEg", conn, 0);
//        if (!mIFace->isValid()){
//            std::cerr<<"Error connecting to interface provided\n";
//            std::cerr<<qPrintable(conn.lastError().message())<<std::endl;
//        }
//        else{
//            std::cout<<"Connected to interface..\n";


//            //subscribe to signal
//            if( !QObject::connect(mIFace, SIGNAL(computationCompleted(QString)), this, SLOT(printToConsole(QString))) ){
//                std::cerr<<"Error connecting to D-Bus signal\n";
//                std::cerr<<qPrintable(conn.lastError().message())<<std::endl;
//            }
//            std::cout<<"Listening for signal..\n";
//        }
//    }

}


//slot
void SignalHandler::printToConsole(QString str){
    qDebug()<<"Signal received.. inside slot now";
    qDebug()<<str;
}
