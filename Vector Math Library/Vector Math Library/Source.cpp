/*
Assignment : Math...
1. Create a templated class that supports 2D Vector addition and subtraction. //Done
2. Add support for 3D vectors. //Done
3. Add support for magnitude of a vector.
4. Add support for normalizing a vector.
5. Add support for dot and cross product. (you have not learned this yet)
*/

#include <iostream>
#include <cmath>
using namespace std;

template<typename T>
class Vec2 //template class for 2D vectors
{
public:
	T x, y; //variables

	Vec2() //Default constructor
	{
		x, y = 0;
	}
	Vec2(T a, T b) //Custom constructor
	{
		x = a;
		y = b;
	}

	Vec2 operator+(const Vec2 &other) //overload operator for addition
	{
		T newX = x + other.x;
		T newY = y + other.y;
		return Vec2(newX, newY);
	}
	Vec2 operator+=(const Vec2 &other) //overload operator for addition (equal to)
	{
		T newX = x + other.x;
		T newY = y + other.y;
		return Vec2(newX, newY);
	}
	Vec2 operator-(const Vec2 &other) //overload operator for subtraction
	{
		T newX = x - other.x;
		T newY = y - other.y;
		return Vec2(newX, newY);
	}
	Vec2 operator-=(const Vec2 &other) //overload operator for subtraction (equal to)
	{
		T newX = x - other.x;
		T newY = y - other.y;
		return Vec2(newX, newY);
	}

	void print2() //prints out x and y for 2D vectors
	{
		cout << x << ", " << y << endl;
	}
};

template<typename T>
class Vec3 //template class for 3D vectors
{
public:
	T x, y, z; //variables

	Vec3() //Default constructor
	{
		x, y, z = 0;
	}
	Vec3(T a, T b, T c) //Custom constructor
	{
		x = a;
		y = b;
		z = c;
	}

	Vec3 operator+(const Vec3 &other) //overload operator for addition
	{
		T newX = x + other.x;
		T newY = y + other.y;
		T newZ = z + other.z;
		return Vec3(newX, newY, newZ);
	}
	Vec3 operator+=(const Vec3 &other) //overload operator for addition (equal to)
	{
		T newX = x + other.x;
		T newY = y + other.y;
		T newZ = z + other.z;
		return Vec3(newX, newY, newZ);
	}
	Vec3 operator-(const Vec3 &other) //overload operator for subtraction
	{
		T newX = x - other.x;
		T newY = y - other.y;
		T newZ = z - other.z;
		return Vec3(newX, newY, newZ);
	}
	Vec3 operator-=(const Vec3 &other) //overload operator for subtraction (equal to)
	{
		T newX = x - other.x;
		T newY = y - other.y;
		T newZ = z - other.z;
		return Vec3(newX, newY, newZ);
	}

	void print3() //prints out x, y and z for 3D vectors
	{
		cout << x << ", " << y << ", " << z << endl;
	}
};

void main()
{
	Vec2 <int> A, B, C; //Vec2 objects
	A.x = 5, A.y = 4; //A = (5,4)
	B.x = -2, B.y = 5; //B = (-2,5)
	A.print2(); //print test
	B.print2(); //print test
	C = A + B; //C will equal ((A.x + B.x)(A.y + B.y))
	C.print2(); //print C add value
	C = A - B; //C will equal ((A.x - B.x)(A.y - B.y))
	C.print2(); //print C sub value

	Vec3 <int> D, E, F; //Vec3 objects
	D.x = -7, D.y = 9, D.z = 2; //D = (-7,9,2)
	E.x = 3, E.y = 14, E.z = -3; //E = (3,14,-3)
	D.print3(); //print test
	E.print3(); //print test
	F = D + E; //F will equal ((D.x + E.x)(D.y + E.y)(D.z + E.z))
	F.print3(); //print F add value
	F = D - E; //F will equal ((D.x - E.x)(D.y - E.y)(D.z - E.z))
	F.print3(); //print F sub value

	system("pause");
}