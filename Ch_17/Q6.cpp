#include<simplecpp>

struct Point
{
  double x, y;
};

Point sectionPoint(Point p1, Point p2, Point m)
{
   Point p;
   p.x = (m.x*p2.x + m.y*p1.x)/(m.x + m.y);
   p.y = (m.x*p2.y + m.y*p1.y)/(m.x + m.y);
   return p;
}

int main()
{
  Point m = {1, 2}, p1 = {-3, 1}, p2 = {3, -6}, p ;
  p = sectionPoint(p1, p2, m);
  cout << p.x << ',' << p.y << endl;
}
