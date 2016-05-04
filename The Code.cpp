//Author: Anani Assoutovi
//Quiz: 5
//Date: April 19th 2016
#include <iostream>
#include <string>
#include <fstream>
#include <climits>

using namespace std;

int ReadFile(string filename, int &Max_Value, int &Min_Value, int &size);

int main()
{
	string filename;
	int minimum, maximum, size = 0;
	ReadFile(filename, maximum, minimum, size);

	system("pause");
}

int ReadFile(string filename, int &Max_Value, int &Min_Value, int &size)
{
	fstream myfile;
	int temp = 0, total = 0;
	cout << "Please Enter The Name Of The File" << endl;
	cin >> filename;

	myfile.open(filename);
	string lines;
	Max_Value = 0, Min_Value = 0, size = 0;

	while (!myfile.eof())
	{
		getline(myfile, lines);
		//cout << lines << endl;	//This cout statement May not Be Necessary
		temp = atoi(lines.c_str());

		if (temp > Max_Value)
			Max_Value = temp;
		if (temp < Min_Value)
			Min_Value = temp;
		size++;
		total += temp;
	}
	cout << "------------------------------------------------------------------------------"<< endl;
	cout << "The Total Number of Integers In The File Is: " << size << endl;
	cout << "The Maximum Number In The File Is: " << Max_Value << endl;
	cout << "The Minimum Number In The File Is: " << Min_Value << endl;
	cout << "The Sum Of All The Integers In The File Is: " << total << endl;
	cout << "------------------------------------------------------------------------------\n" << endl;
	myfile.close();

	return 0;
}
//12