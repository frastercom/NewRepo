#include "Math.h"

int Math::math(int p, string d, int p2)
{
	int res = 0;
	if (d == "+") {
		res = p + p2;
	}
	else if (d == "-") {
		res = p - p2;
	}
	else if (d == "*") {
		res = p * p2;
	}
	else if (d == "/") {
		if (p2 == 0) {
			return 0;
		}
		else {
			res = p / p2;
		}
	}
	return res;
}
