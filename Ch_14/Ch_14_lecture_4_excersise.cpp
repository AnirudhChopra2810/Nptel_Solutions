#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int nstud = 10;
	ifstream marks_file("Science.txt");
	ifstream marksfile("Maths.txt");
	
	int rollno[nstud];
	double maths[nstud], science[nstud] ;
	
	for (int i = 0; i <= nstud; i++) //Loop for finding Maths marks.
	{
		marksfile >> rollno[i] >> maths[i];
		marks_file >> rollno[i] >> science[i ];
	}

	while (true)
	{
		int r;
		cin >> r;
		if (r == -1) break;
		bool found = false;
		for (int i = 0; i < nstud; i++)
		{
			if (rollno[i] == r)
			{
				cout << "Maths marks : " <<  maths[i] << " " << "science marks: " << science[i] << endl;
				found = true;
				break;
			}
		
		}
		if (!found) cout << "Roll number not found" << endl;
	}
	

}

