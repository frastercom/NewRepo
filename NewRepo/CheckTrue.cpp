#include "CheckTrue.h"

bool CheckTrue::checkTrue(vector<string> a) {
	bool isNum = true;
	for (int i = 0; i < a.size(); i++)
	{
		string str = a.at(i);
		bool isPoint = false;
		bool checkNum = true;
		if (str.length() == 1 && (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/')) {
			if (isNum) {
				cout << "Uncorrect position of '" << str << "' at line #" << i << " - double operation" << endl;
				return false;
			}
			else {
				isNum = true;
			}
		}
		else {
			for (int j = 0; j < str.length(); j++)
			{
				if (str[j] == '.') {
					if (isPoint) {
						cout << "Uncorrect point at line " + j << endl;
						return false;
					}
					else {
						isPoint = true;
					}
				}else
				if (str[j] == '0' || str[j] == '1' || str[j] == '2' || str[j] == '3' || str[j] == '4'
					|| str[j] == '5' || str[j] == '6' || str[j] == '7' || str[j] == '8' || str[j] == '9') {
				}
				else {
					checkNum = false;
				}
			}
			if (checkNum) {
				if (isNum) {
					isNum = false;
				}
				else {
					cout << "Uncorrect position of number at line ¹" << i << " (" << str << ") - double number" << endl;
					return false;
				}
			}
		}
	}
	return true;
}