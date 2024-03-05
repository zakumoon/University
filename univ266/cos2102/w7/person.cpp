#include <iostream>
#include <string>
using namespace std;

class Birth {
private:
    int day, month, year;

public:
    Birth(int d, int m, int y) : day(d), month(m), year(y) {}

    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }

    ~Birth() {
        cout << "Birth class end" << endl;
    }
};

class Addr {
private:
    int road, zip;
    string city;

public:
    Addr(int r, int z, string ct) : road(r), zip(z), city(ct) {}

    int getRoad() { return road; }
    string getCity() { return city; }
    int getZip() { return zip; }

    ~Addr() {
        cout << "Class Address end" << endl;
    }
};

class Person {
protected:
    string name;
    int age;
    Birth* birth;
    Addr* addr;

public:
    Person(string n, int a, Birth* b, Addr* ad) : name(n), age(a), birth(b), addr(ad) {}

    string getName() { return name; }
    int getAge() { return age; }

    ~Person() {
        cout << "Person class end" << endl;
    }
};

class Teacher : public Person {
private:
    int experience;

public:
    Teacher(string n, int a, Birth* b, Addr* ad, int exp) : Person(n, a, b, ad), experience(exp) {}

    int getExp() { return experience; }

    ~Teacher() {
        cout << "Teacher class end" << endl;
    }
};

class Student : public Person {
private:
    string id;

public:
    Student(string n, int a, Birth* b, Addr* ad, string i) : Person(n, a, b, ad), id(i) {}

    string getId() { return id; }

    ~Student() {
        cout << "Student class end" << endl;
    }
};

class Assistant: public Student, public Teacher{
  public:
    void show(){
      cout<<"Assistant Student ID Number = " <<Student::getId()<<endl;
      cout<<"Assistant Name = " <<Student::getName()<<endl;
      cout<<"Assistant Age = " <<Student::getAge()<<endl;
      cout<<"Assistant Experience = " <<Teacher::getExp()<<endl;
      cout<<"Assistant Birth Date = " <<Teacher::birth->getDay()<<"/"<<Teacher::birth->getMonth()<<"/" <<Teacher::birth->getYear()<<endl;
      cout<<"Assistant Address = "<<Teacher::add->getRoad()<< " "<<Teacher::add->getCity()<< " "<<Teacher::add->getZip()<<endl;
      cout<< "--------------- Assistant End--------------- \n";
      cout<<endl;
    }
  ~Assistant(){
    cout<<"Assistant class end~ "<<endl;
  }
};

int main(){
    Teacher *teacher = new Teacher();
    Student *student = new Student();
    Assistant *assistant = new Assistant(); // Instantiate Assistant

    // Set up teacher's information
    teacher->setTeach("Mr.Bean", 22);
    teacher->birth->setB(14, 2, 1409);
    teacher->add->setA(754, 80808, "Thung Song");
    teacher->setExp(10);

    // Set up student's information
    student->setStudent("Jane Smith", 20);
    student->birth->setB(10, 12, 1509);
    student->add->setA(381, 80345, "Surathani");
    student->setId("T105003221");

    // Set up assistant's information
    assistant->setStudent("Limy Franz", 23);
    assistant->setExp(5);

    // Display information
    cout << "Teacher's Information:" << endl;
    teacher->show();

    cout << "Student's Information:" << endl;
    student->show();

    cout << "Assistant's Information:" << endl; // Display assistant's information
    assistant->show();

    // Clean up memory
    delete teacher;
    delete student;
    delete assistant;

    return 0;
}

