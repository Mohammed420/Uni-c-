#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctype.h>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void viewPat();
void addPat();
void seId(); // search by id

struct patinet{

	string id;
	string name;
	int age;
	string gender;
	string illness;
	vector<string> meds; // medcine prescriped
	string details; 


};

int main(int argc, char** argv) {
	
	int ui;
	bool run=1;
	
	// main program
	while (run){
		cout << "0-Close program 1-to enter new patient 2-to view all patient files"<<"  "; //Print options to user
		cin >> ui;
		if(ui == 0)
			run = 0; // to hault
		else if(ui == 1){
			patinet p1;
			addPat();
			cout << p1.id;
			//file << p1.id;	
		}
		else if(ui == 2){
			cout << "All the patients: " << endl;
			viewPat();
		}
	}
	return 0;
}

void addPat(){
			fstream file; // create a file for patients	
			file.open("patinets.txt", ios_base::app); // open the file now call file inside programm
	
			if(file.fail()){ 
			cerr << "File failed to open" << endl; // massage will apear if file failed to open
			exit(1);
			}
	
			
			patinet p1;
			cout << "Enter patient id: "; // patient id
			cin >> p1.id;
			file << "id: " << p1.id << endl;
			cin.ignore(1, '\n');

			cout << "Enter patient name: "; // patient name
			getline(cin, p1.name);
			file << "name: " << p1.name << endl;
			cin.ignore(1, '\n');

			cout << "Enter patient age: "; // patient age
			cin >> p1.age;
			file << "age: " << p1.age << endl;
			
			cout << "Enter patient gender: "; // patient gender
			cin >> p1.gender;
			file << "Gender: " << p1.gender << endl;
			cin.ignore(1, '\n');
			
			cout << "Enter patient illness: "; // patient illness
			getline(cin, p1.illness);
			file << "illness: " << p1.illness << endl;
			
			cout << "Enter more details about patient: "; // patient more detials
			getline(cin, p1.details);
			file << p1.details << endl << string(25, '=') <<endl;
			
			file.close();
}

void viewPat(){
	fstream file;
	string redFile;
	
	file.open("patinets.txt", ios_base::in);
	if(file.fail()){ 
			cerr << "File failed to open" << endl; // massage will apear if file failed to open
			exit(1);
	}
	
	while(file.good()){
	getline(file, redFile);
	cout << redFile << endl;
	}

	file.close();
}
void seId(){
	
	
	
}




















