#include <iostream>

using namespace std;

class Point {
  float x;
  float y;

  public:
    Point() {
      x = 0;
      y = 0;
    }

    void set(float xn, float yn) {
      x = xn;
      y = yn;
    }

    Point(float xn){ 
      set(xn, 0); 
    }

    Point(float xn, float yn){
      set(xn, yn);
    }

    float getX(){
      return x; 
    }

    float getY(){
      return y; 
    }

    float dot(Point &other) {
      float result = x * other.x + y * other.y;
      return result;
    }

    Point midPoint(Point &xn, Point &yn) {
      float midX = (xn.x + yn.x) / 2;
      float midY = (xn.y + yn.y) / 2;

      Point midpoint(midX, midY);
      return midpoint;
    }

    void show() {
      cout << "X = " << getX() << endl;
      cout << "Y = " << getY() << endl;
      cout << endl;
    }

    ~Point() {
      cout<<"Bye"<<endl;
      cout << endl;
    }
};

int main() {
  Point x;
  Point b(44, 65);

  cout << "Point a:" << endl;
  Point a(22, 12);
  a.show();

  cout << "Point p:" << endl;
  Point p(19, 43);
  cout<<a.dot(p)<<endl;
  
  x = p.midPoint(a, b);
  p.show();

  cout << "Point x:" << endl;
  x.midPoint(p, a);
  x.show();
  
  return 0;

}
