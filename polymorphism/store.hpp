#ifndef STACK
#define STACK

#include <iostream>
#include <string>
#include <chrono>

class store{
public:   
   explicit store(int a,int b,std::string c): price(a),value(b),type(c) {};
   virtual void deletev(int c1)=0;
   virtual void update(int c2,int a,int b,std::string c)=0;
   void set_value( int a,int b,std::string c);
   int get_price();
   int get_value();
   std::string get_type();
   virtual ~store(){};
   private:
   int price;
   int value;
   std::string type;
};

#endif
