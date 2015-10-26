/*
Assignment : Math...
1. Create a templated class that supports 2D Vector addition and subtraction. //Done
2. Add support for 3D vectors.                                                //Done
3. Add support for magnitude of a vector.                                     //Currently working on//
4. Add support for normalizing a vector.                                      //work on after magnitude//
5. Add support for dot and cross product. (you have not learned this yet)     //work on after normalizing vector//
*/

#include <iostream>   //c++ standard library
#include <cmath>      //c++ library that allows the use of "sqrt" and "pow" math
using namespace std;  //using namespace

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

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	double Magnitude()
	{
		T newX = x * x;
		T newY = y * y;
		T newM = sqrt(newX + newY);
		return newM;
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	double Magnitude()
	{
		T newX = x * x;
		T newY = y * y;
		T newZ = z * z;
		T newM = sqrt(newX + newY + newZ);
		return newM;
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	void print3() //prints out x, y and z for 3D vectors
	{
		cout << x << ", " << y << ", " << z << endl;
	}
};

void main()
{
	Vec2 <int> A, B, C; //Vec2 objects
	cout << "2D vector A and B:" << endl; //info
	A.x = 5, A.y = 4; //A = (5,4)
	B.x = -2, B.y = 5; //B = (-2,5)
	A.print2(); //print test
	B.print2(); //print test
	cout << endl; //new line
	cout << "2D vector addition:" << endl; //info
	C = A + B; //C will equal ((A.x + B.x)(A.y + B.y))
	C.print2(); //print C add value
	cout << endl; //new line
	cout << "2D vector subtraction:" << endl; //info
	C = A - B; //C will equal ((A.x - B.x)(A.y - B.y))
	C.print2(); //print C sub value
	cout << endl; //new line

	Vec3 <int> D, E, F; //Vec3 objects
	cout << "3D vector D and E:" << endl; //info
	D.x = -7, D.y = 9, D.z = 2; //D = (-7,9,2)
	E.x = 3, E.y = 14, E.z = -3; //E = (3,14,-3)
	D.print3(); //print test
	E.print3(); //print test
	cout << endl; //new line
	cout << "3D vector addition:" << endl; //info
	F = D + E; //F will equal ((D.x + E.x)(D.y + E.y)(D.z + E.z))
	F.print3(); //print F add value
	cout << endl; //new line
	cout << "3D vector subtraction:" << endl; //info
	F = D - E; //F will equal ((D.x - E.x)(D.y - E.y)(D.z - E.z))
	F.print3(); //print F sub value
	cout << endl; //new line

	system("pause");
}

/* October 26, 2015:
int Magnitude2(int, int);                /////////////////////////////////////////////////////////
int Normalise2();                        //Vector functions for 2D and 3D vectors/////prototypes//
int Magnitude3(int a, int b);            /////////////////////////////////////////////////////////
int Normalise3();

int Normalise3()
{
int newNX = x / newM;                    /////////////////////////////////////////////////////////
int newNY = y / newM;                    //Normalise function for 3D vectors, currently testing///
int newNZ = z / newM;                    /////////////////////////////////////////////////////////
return newNX, newNY, newNZ;
}

int Magnitude3()
{
int newX = x * x;
int newY = y * y;                        /////////////////////////////////////////////////////////
int newZ = z * z;                        //Magnitude function for 3D vectors, currently testing///
int newM = sqrt(newX + newY + newZ);     /////////////////////////////////////////////////////////
return newM;
}

int Normalise2()
{
int newNX = x / newM;                    /////////////////////////////////////////////////////////
int newNY = y / newM;                    //Normalise function for 2D vectors, currently testing///
return newNX, newNY;                     /////////////////////////////////////////////////////////
}

int Magnitude2()
{
int newX = x * x;                        /////////////////////////////////////////////////////////
int newY = y * y;                        //Magnitude function for 2D vectors, currently testing///
int newM = sqrt(newX + newY);            /////////////////////////////////////////////////////////
cout << newM << endl;
return newM;
}

class Vec2Mag
{
public:
int x, y;

Vec2Mag()
{
x, y = 0;
}
Vec2Mag(int a, int b)
{
x = a;
y = b;
}

int Magnitude(int, int);
};

int Vec2Mag::Magnitude(int a, int b)
{
int newX = x * x;
int newY = y * y;
int newM = sqrt(newX + newY);
return newM;
}

Vec2Mag G = { 6,12 };

int Normalise()
{
T newX = x * x;
T newY = y * y;
T newM = sqrt(newX + newY);

T newNX = x / newM;
T newNY = y / newM;
return newNX, newNY;
}

int Normalise()
{
T newX = x * x;
T newY = y * y;
T newZ = z * z;
T newM = sqrt(newX + newY + newZ);

T newNX = x / newM;
T newNY = y / newM;
T newNZ = z / newM;
return newNX, newNY, newNZ;
}
*/

/* placeholder date

*/