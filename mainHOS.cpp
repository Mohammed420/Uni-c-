#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct patinet{

	int id;
	string name;
	int age;
	bool gender;
	string illness;
	string details; 


};

int main(int argc, char** argv) {
	
	int ui;
	
	ofstream file; // create a file for patients	
	file.open("patinets.txt"); // open the file now call file inside programm
	
	if(file.fail()){ 
		cerr << "File failed to open" << endl; // massage will apear if file failed to open
		exit(1);
	}
	
	patinet p1;
	
	
	
	// main program
	while (1){
		
		
		
		cout << "0-Close program 1-to enter new patient"; //Print options to user
		cin >> ui;
		if(ui == 0)
			break; // to hault
		if(ui == 1){
			cout << "Entrer patient id: "; // patient id
			cin >> p1.id;
			file << "id: " << p1.i1d << endl;
			cin.ignore(256, '\n');

			cout << "Entrer patient name: "; // patient name
			getline(cin, p1.name);
			file << "name: "<< p1.name << endl;
			cin.ignore(256, '\n');

			cout << "Entrer patient age: "; // patient age
			cin >> p1.age;
			file << "Age: "<< p1.age << endl;
			
			cout << "Entrer patient gender 1 for male 0 for female: "; // patient gender
			cin >> p1.gender;
			switch(p1.gender){
				case 0: p1.gender = "female";
				case 1: p1.gender = "male";
			}
			file << "Gender: " << p1.gender << endl;
			cin.ignore(256, '\n');
			
			cout << "Entrer patient illness: "; // patient illness
			getline(cin, p1.illness);
			file << "Illness: "<< p1.illness << endl;
			
			cout << "Entrer more details about patient: "; // patient more detials
			getline(cin, p1.details);
			file << p1.details << endl << endl;
			
			
		}
		
	}
	file.close();
	
	
	return 0;
}


























