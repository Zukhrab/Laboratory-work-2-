#pragma once
#include <iostream>
#include <cmath> 

using namespace std;

typedef struct point
{
	float X, Y;
}point;


class cardioid
{
	float a;

	public:

		cardioid()
		{
			cout << "Enter changing parameter --> ";
			cin >> a;
		}

		cardioid(float a)
		{
			this->a = a;
		}

		void setA(float a)
		{
			this->a = a;
		}

		float getA()
		{
			return a;
		}

		float dist(float angle)
		{
			return 2 * a * (1 - cos(angle));
		}
		
		point far()
		{
			point Point1, Point2;
			Point1.X = -a / 2;
			Point1.Y = 3 * sqrt(3) * a / 2;
			Point2.X = Point1.X;
			Point2.Y = -Point1.Y;

			return Point1, Point2;
		}

		float area()
		{
			return 6 * 3.14 * a * a;
		}
		
		// ~cardioid();
};