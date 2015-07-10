#include "menucreator.h"

MenuCreator::MenuCreator(com::wp::asp::Calculator* iFaceObj)
{
    mIFace = iFaceObj;
}

void MenuCreator::createMenu(){

    int ch = 0;
    int res;

    //loop over choices
    do{

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
                std::cout<<"Exiting Menu...\n";
                emit finished();
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

}
