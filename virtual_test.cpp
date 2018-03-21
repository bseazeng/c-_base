#include <iostream>
using namespace std;
class Base 
{  
  
     public:  
  
            virtual void f() { cout << "Base::f" << endl; }  
  
            virtual void g() { cout << "Base::g" << endl; }  
  
            virtual void h() { cout << "Base::h" << endl; }  
  
   
  
}; 

class Derive:public Base
{
     public:  
  
            virtual void f() { cout << "Derive::f1" << endl; }  
  
            virtual void g1() { cout << "Derive::g1" << endl; }  
  
            virtual void h1() { cout << "Derive::h1" << endl; }  
};

int main(void)
{
    typedef void(*Fun)(void);  
    Base b;  
    Fun pFun = NULL;  
    cout << "虚函数表地址：" << (int*)(&b) << endl;  
    cout << "虚函数表 — 第一个函数地址：" << (int*)*(int*)(&b) + 0<< endl;  
    // Invoke the first virtual function   
    pFun = (Fun)*((int*)*(int*)(&b));  
    pFun(); 
    
    cout << "虚函数表 — 第二个函数地址：" << (int*)*(int*)(&b) + 1 << endl;  
    // Invoke the second virtual function   
    pFun = (Fun)*((int*)*(int*)(&b) + 1);  
    pFun(); 
    
    cout << "虚函数表 — 第三个函数地址：" << (int*)*(int*)(&b) + 2 << endl;  
    // Invoke the third virtual function   
    pFun = (Fun)*((int*)*(int*)(&b) + 2);  
    pFun();
    
    Derive d;
    cout << "虚函数表地址：" << (int*)(&d) << endl;  
    cout << "虚函数表 — 第一个函数地址：" << (int*)*(int*)(&d) + 0<< endl;  
    // Invoke the first virtual function   
    pFun = (Fun)*((int*)*(int*)(&d));  
    pFun(); 
    
    cout << "虚函数表 — 第二个函数地址：" << (int*)*(int*)(&d) + 1 << endl;  
    // Invoke the second virtual function   
    pFun = (Fun)*((int*)*(int*)(&d) + 1);  
    pFun(); 
    
    cout << "虚函数表 — 第三个函数地址：" << (int*)*(int*)(&d) + 2 << endl;  
    // Invoke the third virtual function   
    pFun = (Fun)*((int*)*(int*)(&d) + 2);  
    pFun();
    cout << "虚函数表 — 第4个函数地址：" << (int*)*(int*)(&d) + 3<< endl;  
    // Invoke the first virtual function   
    pFun = (Fun)*((int*)*(int*)(&d) + 3);  
    pFun(); 
    
    cout << "虚函数表 — 第5个函数地址：" << (int*)*(int*)(&d) + 4 << endl;  
    // Invoke the second virtual function   
    pFun = (Fun)*((int*)*(int*)(&d) + 4);  
    pFun(); 
    
    cout << "虚函数表 — 第6个函数地址：" << (int*)*(int*)(&d) + 5 << endl;  
    // Invoke the third virtual function   
    pFun = (Fun)*((int*)*(int*)(&d) + 5);  
    pFun();
    
    return 0;
}
