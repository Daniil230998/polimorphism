#include "../store.hpp"
#include <vector>
#include <memory>

class realisation1: store{
       public:
       explicit realisation1(int a=0,int d=0,std::string c="0"): store(a,d,c){};

       std::vector<store*>::iterator remove_nth(std::vector<store*>::iterator p,std::vector<store*>::iterator q, size_t n);
       void deletev(int c1);
       void create(int b,int d,std::string c);
       
       void update(int c2,int a,int b,std::string c);
       
       void printstack();
       ~realisation1(){
            size_t i;
            for(i=0;i<bp.size();i=i+1){
               delete bp[i];
            }
            bp.clear();
       }
       private:
       std::vector<store*> bp;
   
};
