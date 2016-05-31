#include "iostream"

using namespace std;

class CWin
{
public:
	char id;
	int width;
	int height;
	int numberOfWindowns;
	
	int area();
	inline int totalArea();
};

int CWin::area()
{
	return width * height;
}

inline int CWin::totalArea()
{
	return area() * numberOfWindowns;
}

int main(int argc, char const *argv[])
{
	// struct Win win1;
	CWin win1;

	win1.id = 'A';
	win1.width = 50; 
	win1.height = 40;
	win1.numberOfWindowns = 2;

	cout << "Windows " << win1.id << ", area= " << win1.area() << endl;
	cout << "Totla Area: " << win1.totalArea() << endl;

	return 0;
}