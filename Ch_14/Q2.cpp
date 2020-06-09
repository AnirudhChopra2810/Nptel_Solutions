#include <simplecpp>


int main(){
  float roll_no[5], marks[5];

  cout << "Enter Roll No.: " << endl;

  for(int i=0; i<5; i++)
  {
    cin >> roll_no[i];
  }
  cout << "Enter Marks: " << endl;

  for(int i = 0; i < 5; i++)
  {
     cin >> marks[i];
  }

  float maxSoFar = marks[0];
  for(int i=1; i<5; i++)
  {
    maxSoFar = max(maxSoFar, marks[i]);
  }
  for(int i=0; i<5; i++)
    {
      if(marks[i] == maxSoFar)
      cout << "Roll number " << roll_no[i]  << " got maximum marks." << endl;
    }

}
