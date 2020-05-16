#include<simplecpp>

int branchLength = 40, skewAngle = 20, skewRate = 2, animationDelay = 0;

// Type = 1 for left subtree, 2 for right subtree
void tree(int levels, int type = 0, int angle = skewAngle)
{
    if (levels == 0)
    { 
        return;    
    }
  
    if (type == 1) 
    {
        left(angle);
        wait(animationDelay);
    } else if (type == 2) 
    {
        right(angle);
        wait(animationDelay);
    }
    forward(branchLength);
    wait(animationDelay);

    tree(levels - 1, 1, angle - skewRate); // left subtree
    tree(levels - 1, 2,  angle - skewRate); // right subtree

    forward(-1 * branchLength);
    if (type == 1) 
    {
        right(angle);
        wait(animationDelay);
    } else if (type == 2) 
    {
        left(angle);
        wait(animationDelay);    
    }
}

main_program
{
  turtleSim();
  left(90);

  tree(5);
 
  wait(50);
}