//BS_1.cpp
#include <iostream>  //C++ basic library
#include <windows.h>  //windows api library

int main(){
    float numa,numb,res;  //define floating point variable name 
    char ope;	//define character variable name
    std::cout<<"Welcome to simple calculator."<<std::endl;
    while(1){
        std::cout<<"Enter a formula (1+1):";
        std::cin>>numa>>ope>>numb;  //let the user to input information
        switch(ope){		//switch judgment statement
            case '+':
                res = numa + numb;
                break;
            case '-':
                res = numa - numb;
                break;
            case '*':
                res = numa * numb;
                break;
            case '/':
                if(numb == 0){				//if judgment statement
                    MessageBox(NULL,TEXT("The divisor cannot be zero"),TEXT("Error"),MB_ICONERROR);		//Meassge Windows provided by WIN API
                    break;
                }
                else{
                    res = numa / numb;
                    break;			//jump out of switch
                }
        }
        int rl = MessageBox(NULL,TEXT("Exit?"),TEXT("Notice"),MB_ICONQUESTION|MB_YESNO);
        if(rl == IDYES){		//contrast key value
            break;
        }
    }
    return 0;
}
