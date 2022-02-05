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
	vector<string> param = rf.readDocument("путь к файлу");
	CheckTrue ct = CheckTrue();
	if (ct.checkTrue(param))
	{
		ActionPriority ap = ActionPriority();
		int result = ap.work(param);
		string sringResult = to_string(result);
		rf.writeDocument("путь к файлу" ,sringResult);
	}
	else
	{
		cout << "ошибка: 1001";
	}
}