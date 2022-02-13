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
	setlocale(LC_ALL, "rus");
	vector <string> readDocument;
	ifstream f(name);
	if (f.is_open()) {
		cout << "OK" << endl;
		string  data;

		while (!f.eof()) {
			f >> data;
			cout << data << endl;
			readDocument.push_back(data);
		}
	}
	else cout << "File no open" << endl;
	f.close();

	
}