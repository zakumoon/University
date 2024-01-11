#include <iostream>

using namespace std;

class Point{
  int x;
  int y;
  
  public:
    Point(){
    x = 0; y = 0;
    }
    void set(int xn, int yn){x = xn;      y = yn;}
    Point (int xn){ set(xn , 0); }  
    Point (int xn, int yn){set(xn, yn);}
    
    int getX(){return x;}
    int getY(){return y;}

    void show();

    ~Point(){
      cout<<endl;
      cout<<"Bye "<<getX()<<endl;
      cout<<"Bye "<<getY()<<endl;
      cout<<endl;
    }

};

void Point::show(){
  cout<<endl;
  cout<<"X = " <<getX()<<endl;
  cout<<"Y = " <<getY()<<endl;
  cout<<endl;

}

int main(){
  Point x;
  Point p(7);
  Point a(3, 5);

  p.show();
  a.show();
  x.show();
}
