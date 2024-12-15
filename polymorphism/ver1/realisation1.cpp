#include "realisation1.hpp"

//функция для установки значения. На вход принимаются поля класса стакан
void store::set_value( int a,int b,std::string c){

   if(a>=0 || (a>=0 && (c=="purchase" || c=="sale"))){
    value=a;
    price=b;
    type=c;
    } else {
    std::cout<<"error update\n";
    exit(1);
    }
}
//Функция получения поля цена
int store::get_price(){
   return price;
}
//Функция получения поля объем
int store::get_value(){
   return value;
}
//Функция для получения поля типа
std::string store::get_type(){
   return type;
}

//Метод для выполнения перестановки удаляемого элемента в конец вектора.
std::vector<store*>::iterator realisation1::remove_nth(std::vector<store*>::iterator p,std::vector<store*>::iterator q, size_t n)
{
    std::vector<store*>::iterator a,c1,r,c,c2;
    size_t i=0,i1=0,j=0;
    r=p;
    if(std::distance(p,q)!=0){
    for(a=p;a!=q;++a){
        if(i==n){
           c2=a;
           c2++;
           for(c1=a;c2!=q;++c1){
              std::swap(*c1,*(c2++));

            }
           i1=i1+1;
        }
        i=i+1;
    }
    for(j=0;j<(i-i1);j=j+1){
       ++r;
    }
    return r;
    } else{
      return p;
    }
}

//Функция для удаления заявки. На вход принимается номер заявки которую нужно удалить
void realisation1::deletev(int c1){
 //stockstack* h;
 // Проверка на то, чтобы значение элемента который мы хотим удалить был больше 0 и не выходил за количество элеменов в массиве.
 if(c1<=bp.size() && c1>=0){
    //Далее происходит удаление памяти, которую мы выдлеляли под данный объект
    delete bp.at(c1);
    //Обнуление указателя на адрес
    bp.at(c1)=nullptr;
    //Удаление элемента из вектора
    bp.erase(remove_nth(bp.begin(),bp.end(),c1),bp.end());
 } else {
    std::cout<<"error\n";
    exit(1);
 }

}
//Функция создания заявки на вход принимаются значения полей
void realisation1::create(int b,int d,std::string c){
     bp.push_back(new realisation1(b,d,c));
}
//Функция для обновления заявки. На вход принимаются номер поля, а так же значения полей на которые нужно заменить
void realisation1::update(int c2,int a,int b,std::string c){
     int i=0;
     bp[c2]->set_value(a,b,c);
}
//Функция вывода 10 лучших заявок. В ней выполняется сортировка по полю объем. Лучшими считаются 10 заявок с самым большим объемом.
void realisation1::printstack(){
     int i,j;
     //std::vector<store*> a;
     store * str1;
     //a=bp;
     
     for(j=0;j<bp.size()-1;j=j+1){
       for(i=0;i<bp.size()-1;i=i+1){
          if(bp[i]->get_value()<bp[i+1]->get_value()){
            str1=bp[i+1];
            bp[i+1]=bp[i];
            bp[i]=str1;
          }
        }
       }
      
      for(i=0;i<bp.size();i=i+1){
        std::cout<<"sort price="<<bp[i]->get_price()<<" value="<<bp[i]->get_value()<<" type="<<bp[i]->get_type()<<"\n";
      }
      std::cout<<"\n";
}
