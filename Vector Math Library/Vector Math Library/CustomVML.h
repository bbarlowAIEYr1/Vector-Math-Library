#pragma once
#include <iostream>  
#include <cmath>      
#include <string>
using namespace std;

template<typename T> //templated vector class
class Vector
{
public:
	T x = 0;
	T y = 0;  //variables
	T z = 0;
	T alpha = 0;

	void Print3D() //used to print 3D vecs
	{
		cout << x << " " << y << " " << z << endl;
	}

	void Print2D() //used to print 2D vecs
	{
		cout << x << " " << y << endl;
	}

	void Print4D() //used to print 4D vecs
	{
		cout << x << " " << y << " " << z << " " << alpha << endl;
	}

	Vector()
	{
		x = 0;
		y = 0; //default constructor
		z = 0;
		alpha = 0;
	}

	Vector(T a, T b)
	{
		x = a;  //2D constructor
		y = b;
	}

	Vector(T a, T b, T c)
	{
		x = a; //3D constructor
		y = b;
		z = c;
	}

	Vector(T a, T b, T c, T d)
	{
		x = a;
		y = b; //4D constructor
		z = c;
		alpha = d;
	}

	Vector operator+(Vector other) //addition
	{
		Vector temp(0, 0);
		temp.x = x + other.x;
		temp.y = y + other.y;
		temp.z = z + other.z;
		return temp;
	}

	Vector operator-(Vector other) //subtraction
	{
		Vector temp(0, 0);
		temp.x = x - other.x;
		temp.y = y - other.y;
		temp.z = z - other.z;
		return temp;
	}

	double Magnitude() //finds magnitude of vecs
	{
		int tempx = x * x;
		int tempy = y * y;
		int tempz = z * z;
		double sr = sqrt(tempx + tempy + tempz);

		return sr;
	}

	Vector Normalize() //normalizes vecs
	{
		double div;
		if (x >= y && x >= z)
		{
			div = x;
		}

		else if (y >= x && y >= z)
		{
			div = y;
		}

		else
		{
			div = z;
		}
		double newx = x / div;
		double newy = y / div;
		double newz = z / div;

		Vector temp(newx, newy, newz);
		return temp;
	}

	double operator*(Vector other) //Dot Product
	{
		Vector temp(0, 0);
		temp.x = x * other.x;
		temp.y = y * other.y;
		temp.z = z * other.z;
		double dot = temp.x + temp.y + temp.z;

		return dot;
	}

	Vector operator/(Vector other)//Cross Product
	{
		double crossx, crossy, crossz;
		crossx = (y * other.z) - (other.y * z);
		crossy = (z * other.x) - (other.z * x);
		crossz = (x * other.y) - (other.x * y);

		Vector cross(crossx, crossy, crossz);
		return cross;
	}

	double Angle(Vector b)//Angle between two vectors.
	{
		double base, opp, hyp;
		opp = this->Magnitude();
		base = b.Magnitude();
		hyp = sqrt((base * base) + (opp * opp));

		Vector tri(base, opp, hyp);
		tri = tri.Nomalize();

		double angle = acos(base / hyp);

		angle = (angle / 3.14) * 180;

		return angle;
	}

	double LinearInterpolation(float a, float b, float perc)//LinearInterpolation
	{
		return (a + (b - a)) * perc;
	}

	float DtoR(int d)//Degrees to Radians
	{
		return (d / 180)*3.14;
	}

	float RtoD(int r)//Radians to degrees
	{
		return (r / 3.14) * 180;
	}

	Vector<int> HexColor(unsigned int HexColor) //hex color conversion
	{
		unsigned int Hexred = HexColor >> 24;
		unsigned int Hexgreen = (HexColor >> 16) & 0x00FF;
		unsigned int Hexblue = (HexColor >> 8) & 0x0000FF;
		unsigned int Hexalpha = HexColor & 0x000000FF;
		Vector<int> hex(Hexred, Hexgreen, Hexblue, Hexalpha);

		return hex;
	}
};