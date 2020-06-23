#include<simplecpp>

char _stack[10];
int top = -1;

void push (char a)
{
     top = top + 1;
    _stack[top] = a;

}

void pop(char t)
{

     if(t == '}')
     {
        if(_stack[top] == '{')
        top = top - 1;
        else top = top + 1;
     }

     else if(t == ')')
     {
          if(_stack[top] == '(')
          top = top - 1 ;
          else top = top + 1;

     }
     else if(t == ']')
     {
         if(_stack[top] == '[')
         top = top - 1;
         else top = top + 1;
     }

}

void show()
{
  if(top == -1) cout << "order is correct" << endl;
  else cout << "order is wrong" << endl;

}


//Driver code.
int main()
{
   char a[6] = {'{', '(', '[', ')', ']', '}' };

   for(int i = 0; i <= 6; i++ )
    {
      if((a[i] == '{') || (a[i] == '(') || (a[i] == '['))
      {
         push(a[i]);
      }

      if((a[i] == '}') || (a[i] == ')') || (a[i] == ']'))
      {
        pop(a[i]);
      }

    }

     show();
}
