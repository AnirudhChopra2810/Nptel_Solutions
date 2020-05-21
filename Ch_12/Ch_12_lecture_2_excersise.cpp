#include<simplecpp>
#include<functional>

void square(function<void()> fd)
{
  repeat(4)
  {
    fd(); wait(1);
    right(90); wait(1);
  }
}

int main()
{
  turtleSim();
  square([](void){repeat(5){forward(10); penUp(); forward(10); penDown();}});
  wait(100);
}
