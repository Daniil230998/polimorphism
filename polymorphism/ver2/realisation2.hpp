#include "../store.hpp"
#include <list>
#include <memory>

struct realisation2: store{
       explicit realisation2(int a=0,int d=0,std::string c="0"): store(a,d,c){}
       
       void deletev(int c1);
       
       void create(int b,int d,std::string c);
       void update(int c2,int a,int b,std::string c);
       static bool srt(std::unique_ptr<store> &x,std::unique_ptr<store> &y);
       void printstack();
       ~realisation2(){
            str.clear();
       }
       private:
       std::list<std::unique_ptr<store>> str;
};
