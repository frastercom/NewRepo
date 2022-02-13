#include <iostream>
#include <string>
#include <vector>
#include "ReadFile.h"
#include "CheckTrue.h"
#include "ActionPriority.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	ReadFile rf = ReadFile();
	vector<string> param = rf.readDocument("C://Users//Ученик//Desktop//Новая папка//TEST.txt");
	CheckTrue ct = CheckTrue();
	if (ct.checkTrue(param))
	{
		ActionPriority ap = ActionPriority();
		int result = ap.work(param);
		string sringResult = to_string(result);
		cout << "otvet" << sringResult;
		rf.writeDocument("C://Users//Ученик//Desktop//Новая папка//TEST2.txt" ,sringResult);
	}
	else
	{
		cout << "ошибка: 1001";
	}
}