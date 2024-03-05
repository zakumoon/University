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

    Point(float xn, float yn){  ////here it recive value from point a( x , x)
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
      //cout << "Dot Product: " << result << endl;
      return result;
    }

    Point midPoint(Point &xn, Point &yn);

    void show() {
      cout << "X = " << getX() << endl;
      cout << "Y = " << getY() << endl;
      cout << endl;
    }

    ~Point() {
      cout << "Bye " << getX() << endl;
      cout << "Bye " << getY() << endl;
      cout << endl;
    }
};

Point Point::midPoint(Point &xn, Point &yn) {
  float midX = (xn.x * yn.x) / 2;
  float midY = (xn.y * yn.y) / 2;

  std::cout << "Midpoint: (" << midX << ", " << midY << ")" << std::endl;
  return Point(midX, midY);
}


int main() {
  Point x;
  Point b(4.3, 65);


  cout << "Point a:" << endl;
  Point a(3, 5);
  a.show();

  cout << "Point p:" << endl;
  Point p(2, 2);
  cout<<a.dot(p)<<endl;
  

  x = p.midPoint(a, b);
  p.show();

  cout << "Point x:" << endl;
  x.midPoint(p, a);

  x.show();


  return 0;
}
