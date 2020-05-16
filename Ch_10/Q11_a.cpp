#include<simplecpp>

void draw_root_node(int length)
{
  forward(length);
  forward(-length);
  
  return;
}

void tree(int levels, int length)
 {
   
  
   if (levels == 0)
   { 
     return;    
   }
   forward(40);
   left(30);
   draw_root_node(length);
   tree(levels-1, length*0.9);

   right(50);
   draw_root_node(length);
   tree(levels - 1, length*0.9);
    
   left(20); 
   forward(-length);
  
 }

main_program
{
  turtleSim();
  left(90);

  tree(2, 45);
 
  wait(50);
}