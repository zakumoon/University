#include <iostream>
#include <cstring>
using namespace std;

class Person{
  public:
    string date;
    string address;

  public:
    Person(){
      date = {"09/12/2000"};
      address = ("bangkok 13054 thailand");
    }
    void set(string dt, string add){
      date = dt; address = add;
    }
    string getDate(){
      return date;
    }
    string getAddress(){
      return address;
    }
    Person(string date){
      cout<<"Your Birth Date = "<<getDate()<<endl; 
    }
    Person(string add){
      cout<<"Your Address = "<<getAddress()<<endl; 
    }
};

class Teacher: public Person{
  string name;
  int age;
  int experience;
  public:
    Teacher(){
      age = 0;
      name = ("fullName");
      experience = 0;
    }
    void get(string nam, int nAge, int exp){
      name = name;
      age = nAge;
      experience = exp;
    }
    
  void setTeacherInfo(string name, int age, int exp){
    get(name, age, exp);
  }
  string getName(){
    return name;
  }
  int getAge(){
    return age;
  }
  int getExp(){
    return experience;
  }
  void show(){
    cout<<"Your Name = " << getName();
    cout<<"Your Age = " << getAge();
    cout<<"Your Birth Date = " ;
    cout<<"Your Experiences by year = " << getExp();

  }


};

