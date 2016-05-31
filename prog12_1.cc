#include <iostream>
#include "CWin.h"

using namespace std;

int main(int argc, char const *argv[])
{
	// struct Win win1;
	CWin win1;

	win1.id = 'A';
	win1.width = 50; 
	win1.height = 40;

	cout << "Windows " << win1.id << ", area= " << win1.area() << endl;

	return 0;
}