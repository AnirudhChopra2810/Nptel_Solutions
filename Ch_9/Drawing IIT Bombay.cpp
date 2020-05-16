#include<simplecpp>

void drawI(double ht, double sp)
{
  forward(sp/2); wait(0.5);
  penDown();
  left(90); wait(0.5);
  forward(ht); wait(0.5);
  penUp();
  left(180); wait(0.5);
  forward(ht); wait(0.5);
  left(90); wait(0.5);
  forward(sp/2); wait(0.5);
  return;  
}

bool draw_char(char command, double ht, double sp )
{
  if(command == 'I') 
  {
    drawI(ht, sp) ;
    return true ;
  }
  else return false ;  

}

main_program
{
  int ht = 100, sp = 10;
  char command;
  cin >> command ;
  turtleSim();
  left(90); 
  draw_char(command, ht, sp) ;
}