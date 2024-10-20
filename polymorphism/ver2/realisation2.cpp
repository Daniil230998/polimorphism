#include "realisation2.hpp"

//Функция для установки значения полей. На вход принимаются значения полей
void store::set_value( int a,int b,std::string c){
   if(a>=0 && a>=0 && (c=="purchase" || c=="sale")){
    value=a;
    price=b;
    type=c;
    } else {
    std::cout<<"error update\n";
    exit(1);
  }
}
//Функция для получения поля цена
int store::get_price(){
   return price;
};
//Функция для получения поля объем
int store::get_value(){
   return value;
};
//Функция для получения поля типа
std::string store::get_type(){
   return type;
};
//Функция удаления заявки на вход принимается значение номера поля
void realisation2::deletev(int c1){
            std::list<std::shared_ptr<realisation2>>::iterator it;
            it=str.begin();
         if(c1<=str.size() && c1>=0){
            advance(it,c1);
            str.erase(it);
         } else {
            std::cout<<"error\n";
            exit(1);
         }
}
//Функция для создания заявки. На вход принимаются значения полей заявки
void realisation2::create(int b,int d,std::string c){
            str.push_back(std::make_shared<realisation2>(realisation2(b,d,c)));
}
//Функция для обновления заявки. На вход принимаются номер заявки котрую нужно изменить, а так же значения полей.
//Данная функция вызывает функцию set value
void realisation2::update(int c2,int a,int b,std::string c){
          std::list<std::shared_ptr<realisation2>>::iterator it,it1,it2;
          it=str.begin();
          advance(it,c2);
          (*it)->set_value(a,b,c);
}

//Функция для выполнения сортировки
 bool realisation2::srt(std::shared_ptr<realisation2> &x,std::shared_ptr<realisation2> &y){
    return x->get_value()>y->get_value();
}
//Функци для вывода 10 лучших заявок. В ней выполняется сортировка по полю объем. Лучшими считаются 10 заявок с самым большим объемомо.
void realisation2::printstack(){
         std::list<std::shared_ptr<realisation2>>::iterator it1,it2;
         std::list<std::shared_ptr<realisation2>> a;
         int i,it4=0,it5=0;
         a=str;
         a.sort(srt);
        it1=a.begin();
        it2=a.end();
         for(it1;it1!=it2;++it1){
          std::cout<<"sort price="<<(*it1)->get_price()<<" value="<<(*it1)->get_value()<<" type="<<(*it1)->get_type()<<"\n";
          if(i==9)exit(1);
          i=i+1;
         }
         std::cout<<"\n";
}

