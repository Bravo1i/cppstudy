#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
	void setX(int x);

	void setY(int y);

	int getX(void);

	int getY(void);

private:
	int m_X,m_Y;
};
