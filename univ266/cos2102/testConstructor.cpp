#include <iostream>
#include <string>
using namespace std;


class A{
  public:
    string name;
    string surname;
    int age;
    int num;

};

int main(){
  
  A a;
  cout<<" name: "<<a.name<< endl;
  cout<<" surname: "<< a.surname<< endl;
  cout<<" age: "<<a.age<< endl;
  cout<<" tel: "<< a.num<< endl;


}
