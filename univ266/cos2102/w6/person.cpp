#include <iostream>
#include <cstring>
using namespace std;
class Birth{
  private:
    int day, month, year;
  public:
      Birth(){

      day = 0;
      month = 00;
      year = 2332;
    }
    void set(int d, int mm, int yr){
      day = d; 
      month = mm; 
      year = yr;
    }
    void setBirth(int dd, int mm, int yy){
      set(dd, mm, yy);
    }
    int getDay(){
      return day;
    }
    int getMonth(){
      return month;
    }
    int getYear(){
      return year;
    }

    ~Birth(){
    cout<<"Birth class endl~ "<<endl;
  }

};
class Addr{
  int road, zip; 
  string city;
  public:
    Addr(){
      road = 343;
      city = "Bangkok";
      zip = 430432;
    }
    void set(int r, int z, string ct){
      road = r;
      city = ct;
      zip =  z;
    }
    void setAddr(int rd, int zp, string cty){
      set(rd, zp, cty);
    }
    int getRoad(){
      return road;
    }
    string getCity(){
      return city;
    }
    int getZip(){
      return zip;
    }

  ~Addr(){cout<< "Clas Address end~ " << endl;}
};
class Person{
  string name;
  int age;
  public:

  Birth *birth;
  Addr *add;

    Person(){
      age = 0;
      name = ("fullName");
    }
    void set(string nam, int nAge){
      name = nam;
      age = nAge;
    }
    
  void setStudentInfo(string name, int age){
    set(name, age);
  }
  string getName(){
    return name;
  }
  int getAge(){
    return age;
  }
  ~Person(){
    cout<<"Person class end~ " <<endl;
  }
};

class Teacher: public Person{
  int experience;
  public:
    Teacher(){
      experience = 0;
    }
     void setTeach(string nam, int nAge){
        Person::set(nam, nAge);
    }
  void setExp(int nExp){
    experience = nExp;
  }
  int getExp(){
    return experience;
  }
  void show(){
    cout<< "     ---------------Student--------------- \n";
    cout<<"Your Name = " << getName()<<endl;
    cout<<"Your Age = " << getAge()<<endl;
    cout<<"Your Birth Date = " <<birth->getDay()<<"/"<<birth->getMonth()<<"/" <<birth->getYear()<<endl;
    cout<<"Your Experience = " << getExp()<<endl;
    cout<<"Your Address = "<<add->getRoad()<< " "<<add->getCity()<< " "<<add->getZip()<<endl; 
    cout<<endl;
  }
  ~Teacher(){
    cout<<"Teacher class end~ "<<endl;
  }
};

class Student: public Person{
  string id;
  public:
    Student(){
      id = "T01";
    }
     void setStudent(string nam, int nAge) {
        Person::set(nam, nAge); // Call base class set function
    }
    void setId(string nId){
      id = nId;
    }
  string getId(){
    return id;
  }
  void show(){
    cout<< "     ---------------Student--------------- \n";
    cout<<"Your Student ID Number = " << getId()<<endl;
    cout<<"Your Name = " << getName()<<endl;
    cout<<"Your Age = " << getAge()<<endl;
    cout<<"Your Birth Date = " <<birth->getDay()<<"/"<<birth->getMonth()<<"/" <<birth->getYear()<<endl;
    cout<<"Your Address = "<<add->getRoad()<< " "<<add->getCity()<< " "<<add->getZip()<<endl; 
    cout<<endl;
  }
  ~Student(){
    cout<<"Teacher class end~ "<<endl;
  } 

};

int main(){
    Birth *birth = new Birth();
    Addr *address = new Addr();
    Teacher *teacher = new Teacher();
    Student *student = new Student();

    birth->setBirth(14, 2, 1409);
    address->setAddr(17, 80808, "Thung Song");

    teacher->setTeach("Mr.Bean", 22);
    teacher->birth = birth;
    teacher->add = address;
    teacher->setExp(10);

    student->setStudent("Jane Smith", 20);
    student->birth = birth;
    student->add = address;
    student->setId("T105003221");

    cout << "Teacher's Information:" << endl;
    teacher->show();

    cout << "Student's Information:" << endl;
    student->show();


    delete birth;
    delete address;
    delete teacher;
    delete student;
}


#if 0

  void show(){
    cout<< "     ---------------Teacher--------------- \n";
    cout<<"Your Name = " << getName()<<endl;
    cout<<"Your Age = " << getAge()<<endl;
    cout<<"Your Birth Date = " <<getBirth()<<endl;
    cout<<"Your Experiences by year = " << getExp()<<endl;
    cout<<"Your Address = "<<getAddress()<<endl; 
    cout<<endl;
  }


int main(){
  Person p;
  p.setPerson("2001/05/20", "Bangkok city");
  //p.show();
  Teacher t;
  t.setTeacherInfo("Ms. Triphit", 36, 13);
  t.show();
  
  Student s;
  s.setStudentInfo("Praphan", 21, "ST104323234");
  s.show();
}


int main(){
  Person p;
  p.setPerson("2001/05/20", " Bangkok city");
  Teacher t;
  t.setTeacherInfo("Ms. Triphit", 36, 13);
  t.show();
  Person nP;
  nP.setPerson("1994/05/20", " Nakhon Si thammarat city");
  Student s;
  s.setStudentInfo("Praphan", 21, "ST104323234");
  s.show();

#endif