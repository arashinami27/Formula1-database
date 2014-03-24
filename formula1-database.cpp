//Formula 1 database

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct race_t{
	char driver[25];
	int posr;
	char fastlap[25];
	int pos_start;
	char rtime[25];
} race, result;

void print_race(race_t result);

int main(){
	
	cout << "Enter Driver name: " << "\n";
	cin >> race.driver;
	cout << "Enter actual starting position: " << "\n";
	cin >> race.pos_start;
	cout << "Enter race time: " << "\n";
	cin >> race.rtime;
	cout << "Enter Fastest Lap: " << "\n";
	cin >> race.fastlap;
	cout << "Enter Race Position: " << "\n";
	cin >> race.posr;
	
	print_race(race);

	
	return 0;
}
	

void print_race(race_t result) {
	
	ofstream myfile;
	myfile.open("Brazil GP.txt", ios::out | ios::app);
	myfile << "Driver: " << result.driver << "\n";
	myfile << "Race Time: " << result.rtime << "\n";
	myfile << "Race Position: " << result.posr << "\n";
	myfile << "Fastest Lap: " << result.fastlap << "\n";
	myfile << "Starting Position: " << result.pos_start << "\n";
	myfile.close();
}
