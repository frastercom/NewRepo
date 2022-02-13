#include "ReadFile.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
vector<string> ReadFile::readDocument(string name) {
	setlocale(LC_ALL, "rus");
	vector <string> readDocument;
	ifstream f(name);
	if (f.is_open()) {
		string s;
		while (f >> s)
		{
			readDocument.push_back(s);
		}
	}
	else cout << "File no open" << endl;
	f.close();
	return readDocument;
}
void ReadFile::writeDocument(string name, string data) {
	ofstream file(name);
	if (!file) {
		cout << "error" << endl;
		return 0;

	}
	
	for (int i : data) {
		file << i << endl;
	}

	file.close();

	
}