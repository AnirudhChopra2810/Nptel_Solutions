#include<simplecpp>

void tree(int levels)
{
  if(levels > 0)
  {
   forward(levels*10);
   left(15);
   tree(levels-1);
   right(30);
   tree(levels-1);
   left(15);
   forward(-levels*10);
  }
}

main_program
{
  turtleSim();
  left(90);
  tree(6);
  wait(100);
}