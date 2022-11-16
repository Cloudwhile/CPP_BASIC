# C++ Basic No.1

**Let's learn the basics of C++ with the Hello world program.**

Here is *Hello world* source code

```c++
//Hello world.cpp
#include <iostream> //C++ basic library

using namespace std; //Use IOSTREAM std Namespace
int main(){			 //main function
    cout<<"Hello world"<<endl; //Output 
    return 0;			//Return Value
}
```

**When running the program, you will find that the program will flash and disappear, and we can use the following statement to solve the problem.**

- ```C++
  system("pause");
  ```

- ```C++
  while(1);
  ```

- ```C++
  cin>>variable_name;
  ```
  
- ```C++
  getchar();
  ```

  

**But I don't recommend use** *while* **to solve the problem.**

------

The complete code

```C++
//Hello world.cpp
#include <iostream> // C++ basic library

using namespace std;

int main(){
    int a;
    cout<<"Hello world"<<endl;
    system("pause");
    //or 
    //cin>>a;
    return 0;
}
```

***

In C++ code, we must reference a ***iostream*** library.

```C++
#include <iostream>
```

We can use ***#include*** to reference any C/C++ library.



The names defined by the iostream library are in the namespace ***std***;

+ If we not declare **using namespace std**, we should use standard object name.

  ```C++
  #include <iostream>
  
  int main(){
      std::cout<<"Hello world"<<std::endl; //standard object name
      system("pause");
      return 0;
  }
  ```

+ In C++ ***int main*** is essential. And ***int main*** is the access point for the C++ program.  


Look [Hello world.cpp](https://github.com/Cloudwhile/CPP_BASIC/blob/main/resources/Hello%20world/Hello%20world.cpp)
