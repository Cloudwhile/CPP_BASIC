# BS_1

**In the last tutorial, we looked briefly at C++ code**. **You can learn it again.** [C++ Basic 1](https://github.com/Cloudwhile/CPP_BASIC/blob/main/resources/Hello world/C%2B%2B Basic 1.md)✔

Now let's take C++ a step further with BS_1.cpp.

***

BS_1.cpp source code.

```c++
///BS_1.cpp
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

```

**You can see from *BS_1.cpp* that this is more difficult than the previous [Hello world.cpp](https://github.com/Cloudwhile/CPP_BASIC/blob/main/resources/Hello%20world/Hello%20world.cpp).** **But this is just the tip of the iceberg in C++.**



In ***BS_1.cpp***, I used a lot of strange statements. And I'll explain them all in the next few minutes one by one.

***

+ ```C++
  #include <windows.h>
  ```

  Reference ***windows.h*** to use ***MessageBox*** statement.
  
+ ```C++
  MessageBox(HWND hWnd,LPCTSTR lpText,LPCTSTR lpCaption,UINT uType)
  ```

  Use ***MessageBox*** to show a dialog box.

  ***MessageBox*** returns a value of type int. So we can compare with its key value.
  
+ ```C++
  std::cin>>variable_Name
  ```

  If we not declare **using namespace std**, we should use standard object name[***std::cin***].

  [***std::cin***] can allow user to input information, we can use [***>>***] operator to continuously input.

+ ```C++
  if(boolean_expression){
      //Program execution content.
  }else{
      //Program execution content.
  }
  ```
  
  This is [***if ... else ...***] judgment statement. If[**boolean_expression**] is **True**, program will run the execution content.
  
+ ```C++
  switch(expression){
      case constant-expression:
          break;
      case constant-expression:
          break;
      //....
      default :
          break;
  }
  ```

  This is [***switch***] judgment statement. This statement is superior to the [***if***] statement in cases where there is a lot of judgment to be made.

​    

​     

  

***



