#include "ReadFile.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
void writeDocument(string name, string data) {
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