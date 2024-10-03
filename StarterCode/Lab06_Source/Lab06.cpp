#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include "Functions.h"
using namespace std;

int main() {
	vector<vector<double>> values;
	vector<double> answers;
	double temp;
	ifstream inputFile("input.txt");
	if (!inputFile.is_open()) {
		cout << "file not open" << endl;
	}
	
	for (int p = 0; p < 5; p++) {
		vector<double> tempv;
		for (int i = 0; i < 6; i++) {
			
			inputFile >> temp;
			tempv.push_back(temp);
		}
		values.push_back(tempv);
	}
	inputFile.close();


	for (int i = 0; i < values.size(); i++) {
		answers.push_back(calcDistance(values[i][0], values[i][1], values[i][2], values[i][3], values[i][4], values[i][5]));
	}

	sort(answers.begin(), answers.end());

	ofstream outfile("output_sorted.txt");
	for (int i = 0; i < answers.size(); i++) {
		outfile << answers[i] << endl;
	}

	return 0;
}