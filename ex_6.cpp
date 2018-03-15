/*
定义常量

在 C++ 中，有两种简单的定义常量的方式：
使用 #define 预处理器。
使用 const 关键字。
#define 预处理器

下面是使用 #define 预处理器定义常量的形式：
*/
#include <iostream>
using namespace std;

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

int main()
{

   int area;  
   
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;
   
   cout << "const begin-----------------"<< endl;
   const int  LENGTH1 = 10;
   const int  WIDTH1  = 5;
   const char NEWLINE1 = '\n';
   int area1;  
   
   area1 = LENGTH1 * WIDTH1;
   cout << area1;
   cout << NEWLINE1;
   
   return 0;
}