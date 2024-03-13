#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int tim, deptti, arivt, number, CNIC;// intiliziting of timings
string name, dept, ariv, clas, date, pm;// of names   


void input()
{


	ofstream datafile("myfile.txt", ios::app);//for writing.It shows list in your file



	cout << "    HEER TRAVELS\n        ";

	/*	for (int i = 0; i < 2; i++)// loop for taking input. for increasing number of loops in value of n(2) */
	cout << "Enter S:NO pessenger";
	cin >> number;
	cout << "Enter name of pessenger";
	cin >> name;

	cout << "Enter CNIC pessenger";
	cin >> CNIC;
	cout << "Enter Date of booking";
	cin >> date;


	cout << "Enter departure of passenger:\n";
	cin >> dept;
	cout << "Enter departure timing of passenger:\n";
	cin >> deptti;
	cout << "Enter Arrival of passenger:\n";
	cin >> ariv;
	cout << "Enter Arrival timing of passenger:\n";
	cin >> arivt;
	cout << "Enter time of booking:\n";
	cin >> tim;
	cout << " AM/pm" << endl;
	cin >> pm;
	cout << "class:\n";
	cin >> clas;
	datafile << number << "\t" << name << "\t" << CNIC << "\t" << date << "\t" << dept << "\t" << deptti << "\t" << ariv << "\t" << arivt << "\t" << tim << "\t" << pm << "\t" << clas << endl;
}
void display()
{
	ifstream datafileoutput("myfile.txt", ios::in);
	string line;
	cout << "\n\n\nOUTPUT DATA:\n";
	cout << "number \t name  \t CNIC \t date \t dept \t deptti \t ariv \t arivt  \t  tim \t pm \t clas" << endl;
	while (!datafileoutput.eof())
	{
		getline(datafileoutput, line);
		cout << line << endl;
	}

}


void search()
{
	string search;
	cout << "\n\n\n\nSEARCHING IN FILE:\n";
	cout << "Enter name of passenger:";
	cin >> search;
	ifstream searchfile("myfile.txt", ios::in);//for reading
	cout << "number \t name  \t CNIC \t date \t dept \t deptti \t ariv \t arivt  \t  tim \t pm \t clas              " << endl;

	while (!searchfile.eof())
	{
		searchfile >> number >> name >> CNIC >> date >> dept >> deptti >> ariv >> arivt >> tim >> pm >> clas;
		if (name == search)
		{
			cout << number << "\t" << name << "\t" << CNIC << "\t" << date << "\t" << dept << "\t" << deptti << "\t" << ariv << "\t" << arivt << "\t" << tim << "\t" << pm << "\t" << clas << endl;
			break;

		}
		else continue;
	}
	cout << endl;
	searchfile.close();

}

void print()
{
	string search;
	cout << "Enter name of passenger:";
	cin >> search;
	ifstream searchfile("myfile.txt", ios::in);//for reading
	while (!searchfile.eof())
	{
		searchfile >> number >> name >> CNIC >> date >> dept >> deptti >> ariv >> arivt >> tim >> pm >> clas;
		if (name == search)
		{
			cout << "departure" << "                                                         " << "arrival" << endl;
			cout << dept << "____________________ | ----->>>>>>__________________________" << ariv << endl;
			cout << "____________________________________________________________________________" << endl;
			cout << endl;
			cout << "***************TRAVEL iltinerary*************" << endl;
			cout << endl;
			cout << "2h 0 min  . NON STOP" << endl;
			cout << "depature=" << dept << "Departure timings=" << deptti << pm << "--" << "Arrival=" << ariv << "Arrival timings" << arivt << pm << endl;
			cout << "seat=" << clas << endl;
			cout << "1 pc(s) 20 kg" << endl;
			cout << endl;
			cout << " BOOKING DETAILS\n" << endl;
			cout << "____________________________________________________________________________" << endl;

			cout << "MR/MRS=" << name << "                    " << "TIME OF BOOKING=" << tim << pm << endl;
			cout << "CNIC=" << CNIC << "                      " << "DATE OF BOOKING=" << date << endl;
			cout << "CLASS=" << clas << "                     " << "  TYPE ONE WAY= " << endl;
			cout << "____________________________________________________________________________" << endl;
			cout << endl;
			cout << "THANK U FOR USING HEER TRAVELS" << endl;
			cout << "HAVE SAFE JOURNEY" << endl;
			break;

		}
		else continue;
	}
	cout << endl;
	searchfile.close();

}


int main()
{
	cout << "================================================\n";
	cout << "       HEER TRAVELS\n      ";
	cout << endl;
	cout << "================================================\n";
	int choice;
	cout << "1. INPUT DATA IN FILE\n";
	cout << "2. DISPLAY DATA FROM FILE\n";
	cout << "3. SEARCH DATA IN FILE\n";
	cout << "4. FOR PRINTING TICKET\n";

	cout << ". EXIT\n\n";
	cout << "ENTER YOUR CHOICE FROM MENU";
	cin >> choice;
	system("pause");
	system("cls");
	switch (choice)
	{

	case 1:
	{
		input();
		system("pause");
		system("cls");
		main();
		break;
	}
	case 2:
	{
		display();
		system("pause");
		system("cls");
		main();
		break;
	}
	case 3:
	{
		search();
		system("pause");
		system("cls");
		main();
		break;
	}
	case 4:
	{
		print();
		system("pause");
		system("cls");
		main();
		break;
	}
	case 0:
	{
		break;

	}
	default:
	{
		cout << "INVALID input";
	}
	}
}

