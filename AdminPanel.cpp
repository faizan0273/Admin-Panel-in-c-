#include<iostream>
using namespace std;
int main()
{
	cout << "WELCOME TO ADMIN PANEL!"<<endl;
	int R[5], C[5], M[5],u = 0;
	char T;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter roll number of student number " << i + 1<<":";
		cin >> R[i];
		cout << "Enter marks of Computer Science of student " << i + 1 << "within 100:";
		cin >> C[i];
				cout << "Enter marks of Mathematics of student " << i + 1 << "within 100:";
				cin >> M[i];
		u++;
				cout << "Enter Y/y to continue adding students and N/n to stop: ";
				cin >> T;
			if (T == 'n' || T == 'N') { i = 5; }
	}
		cout << "Do you want to perform any of the folllowing operations?" << endl;
		cout << "Update Roll Number of a particular Student." << endl
			<< "Update marks of a particular student for CS." << endl
			<< "Update marks of CS for all students who are already enrolled." << endl
			<< "Update marks for Mathematics." << endl
			<< "Update marks of Mathematics for all students who are already enrolled." << endl
			<< "Delete the record of a particular student." << endl;
		cout << "Press y/Y for Yes" << endl << "Press n/N for No"<<endl;
		cin >> T;
	if (T == 'y' || T == 'Y')
	{
		cout << "1.	Press 1 to update Roll Number of a particular Student." << endl
			<< "2.	Press 2 to update marks of a particular student for CS." << endl
			<< "3.	Press 3 to update marks of CS for all students who are already enrolled." << endl
			<< "4.	Press 4 to update marks for Mathematics." << endl
			<< "5.	Press 5 to update marks of Mathematics for all students who are already enrolled." << endl
			<< "6.	Press 6 to delete the record of a particular student." << endl;
		cin >> T;
	int reg = 0, o = -1;
	if (T == '1' || T == '2' || T == '4' || T == '6')
	{
			cout << "Enter the registration number of the student" << endl;
			cin >> reg;
	}
	for (int i = 0; i < 5; i++) 
	{
		if (R[i] == reg)
		{ 
			o = i; 
		}
	}
			if (o == -1) 
			{
			 cout << "Error! This student does not exist" << endl; 
			}
			if(o!=-1)
			{
				if (T == '1') 
				{
					cout << "Enter the new roll number of the student:";
					cin >> R[reg - 1];
				}
				if (T == '2')
				{
				cout << "Enter the new CS marks of the student:";
				cin >> C[reg - 1];
				}
				if (T == '4')
				{
				cout << "Enter the new Mathematics marks of the student:";
				cin >> M[reg - 1];
				}
				if (T == '6') 
				{
				cout << "The record of the student has been deleted" << endl;
				R[reg - 1] = -1;
				C[reg - 1] = -1;
				M[reg - 1] = -1;//Negative numbers will tell that record of this student does not exist
			}
	}
		if (T == '3' || T == '5')
		{
			for (int i = 0; i < u; i++) 
			{
				cout << "Enter marks of ";
				if (T == '5') { cout << "Mathematics "; }
				if (T == '3') { cout <<"CS "; }
				cout << "of student number " << i + 1<<endl;
				if (T == '5') { cin>>M[i]; }
				if (T == '3') { cin>>C[i]; }
			}
		}
	}
	//u = 1;
	int g = 1,per;
	cout << "Student No    Registration No   CS Marks    Maths Marks   Percentage   Grade"<<endl;
	for (int i = 0; i < u; i++) {
		if (R[i] < 0) { u--; continue; }
		cout << g << "           " << R[i] << "              " << C[i] << "         " << M[i];
		per = (C[i] + M[i]) / 2;
		cout << "     " << per << "             ";
		if (per < 50)cout << "F"; else
		if (per >= 50 && per < 60) cout << "D"; else
		if (per >= 60 && per < 75)cout << "C"; else
		if (per >= 75 && per <= 90)cout << "B"; else
		if (per >= 91 && per <= 100)cout << "A";
		cout << endl;
		g++;
	}
	return 0;
}