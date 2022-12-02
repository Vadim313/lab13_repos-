///////////////////////////////////////////////////////////
// Lab_13_1.cpp
// головний файл проекту – функція main
#include <iostream>
#include <math.h>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"


using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
	cout << "xp = "; cin >> x_p;
	cout << "xk = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> e;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "e(-x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;


	cout << endl;
	x = x_p;
	while (x <= x_k) {
		sum(); // виклик процедури обчислення суми
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << exp(-x) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cin.get();
	return 0;
}

#pragma once
namespace nsVar {
		extern int n; // зовнішні оголошення змінних
	extern double x, x_p, x_k, dx, e, a, s;
};

#pragma once
namespace nsDod {
	void dod();
};

#pragma once
namespace nsSum {
	void sum();
};