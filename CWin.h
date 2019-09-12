#include <math.h>


class CWin
{
public:
	char id;
	int width;
	int height;
	int thridSide;

	int area();
	inline float calThirdSideWithRightTriangle();
};

int CWin::area()
{
	return width * height;
}

inline float CWin::calThirdSideWithRightTriangle()
{
	return thridSide = sqrt(width^2 + height^2);
}
