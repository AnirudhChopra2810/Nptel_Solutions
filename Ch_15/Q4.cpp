#include <simplecpp>

bool compare_strings(char str1[], char str2[])
{
   int i = 0;
   char nChar = '\0';
   while (true)
   {
     if(str1[i] == nChar && str2[i] == nChar) return true; // both strings were eq and we reached end
     if(str1[i] == nChar || str2[i] == nChar) return false; // either of str1 or str2 terminated first than other
     if(str1[i] != str2[i]) return false;
     i++;
   }
}

int main()
{
  int n, i = 0, L = 4;
  float marks[L];
  char name[L][20];
  cout << "No. of students: " << endl;
  cin >> n ;


  for(i = 0; i < n; i++)
  {
     cout << "Name of the student: " << endl;
     cin >> name[i];

     cout << "Marks of the student: " << endl;
     cin >> marks[i];
  }

    cout << "Enter the Name: " << endl;
    char Name[20];
    cin >> Name;

    bool found = false;
    for(int i = 0; i < n; i++ )
    {
        if(compare_strings(Name, name[i]))
        {
          cout << marks[i] << endl;
          found = true;
          break;
        }
    }

    if(!found) cout << "No record for name " << Name << " was found"<<endl;
}

