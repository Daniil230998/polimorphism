#include "realisation2.hpp"

int main(){
    realisation2 str2;
    
    str2.create(5,2,"purchase");
    str2.create(1,5,"sale");
    str2.create(4,6,"sale");
    str2.create(7,8,"sale");
    str2.create(9,9,"sale");
    str2.create(10,1,"sale");
    str2.create(11,4,"purchase");
    str2.create(2,2,"purchase");
    str2.create(3,11,"purchase");
    str2.create(5,3,"purchase");
    str2.create(6,20,"purchase");
    
    str2.deletev(0);
    str2.update(1,3,8,"purchase");
    str2.printstack();
    
 return 0;
}

