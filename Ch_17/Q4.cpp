#include <simplecpp>

struct ComplexNumber
{
  float real;
  float imaginary;

ComplexNumber Adding_number(ComplexNumber a, ComplexNumber b)
  {
     ComplexNumber temp;
     temp.real = a.real + b.real;
     temp.imaginary = a.imaginary + b.imaginary;

     if(temp.imaginary > 0)
       cout << "Sum of the two complex numbers is "<< temp.real << " +" << temp.imaginary << "i" << endl;
     else
       cout << "Sum of the two complex numbers is "<< temp.real << " + (" << temp.imaginary << ")i" << endl;
  }
};

int main()
{
  ComplexNumber a, b, sum;

  cout << "Enter real part of Complex Number a: " << endl;

   cin >> a.real;
   cout << "Enter imaginary part of Complex Number a: " << endl;

   cin >> a.imaginary;
   cout << "Enter real part of Complex Number b: " << endl;

   cin >> b.real;
   cout << "Enter imaginary part of Complex Number b: " << endl;

   cin >> b.imaginary;

   sum.Adding_number(a, b);
}










