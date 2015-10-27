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
	Vec2 operator*(const Vec2 &other) //overload operator for multiplication
	{
		T newX = x * other.x;
		T newY = y * other.y;
		return Vec2(newX, newY);
	}

	double mag2() //test function to find magnitude
	{
		return 0;
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
	Vec3 operator*(const Vec3 &other) //overload operator for multiplication
	{
		T newX = x * other.x;
		T newY = y * other.y;
		T newZ = z * other.z;
		return Vec3(newX, newY, newZ);
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	void print3() //prints out x, y and z for 3D vectors
	{
		cout << x << ", " << y << ", " << z << endl;
	}
};

double mag2(double);

void main()
{
	Vec2 <float> A, B, C; //Vec2 objects of data type float
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
				  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Vec2 <double> AA, CC; //Vec2 objects of data type double
	cout << "2D vector AA:" << endl; //info
	AA.x = 3, AA.y = 0; //AA = (3,0)
	AA.print2(); //print test
	cout << endl; //new line
	cout << "2D vector magnitude:" << endl; //info
	CC = AA * AA; //CC will equal ((AA.x * AA.x)(AA.y * AA.y))
				  //mag2(CC); //Error: no suitable conversion from "Vec2<double>" to "double" exists 
	CC.print2(); //print CC multiplication value (not the magnitude)
	cout << endl; //new line
				  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	Vec3 <float> D, E, F; //Vec3 objects of data type float
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
				  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Vec3 <double> DD, FF; //Vec3 objects of data type double
	cout << "3D vector DD:" << endl; //info
	DD.x = 5, DD.y = 0, DD.z = 0; //DD = (5,0,0)
	DD.print3(); //print test
	cout << endl; //new line
	cout << "3D vector magnitude:" << endl; //info
	FF = DD * DD; //FF will equal ((DD.x * DD.x)(DD.y * DD.y)(DD.z * DD.z))
	FF.print3(); //print FF multiplication value (not the magnitude)
	cout << endl; //new line
				  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	system("pause");
}

/* October 26, 2015:
//
int Magnitude2(int, int);                /////////////////////////////////////////////////////////
int Normalise2();                        //Vector functions for 2D and 3D vectors/////prototypes//
int Magnitude3(int a, int b);            /////////////////////////////////////////////////////////
int Normalise3();
//
int Normalise3()
{
int newNX = x / newM;                    /////////////////////////////////////////////////////////
int newNY = y / newM;                    //Normalise function for 3D vectors, currently testing///
int newNZ = z / newM;                    /////////////////////////////////////////////////////////
return newNX, newNY, newNZ;
}
//
int Magnitude3()
{
int newX = x * x;
int newY = y * y;                        /////////////////////////////////////////////////////////
int newZ = z * z;                        //Magnitude function for 3D vectors, currently testing///
int newM = sqrt(newX + newY + newZ);     /////////////////////////////////////////////////////////
return newM;
}
//
int Normalise2()
{
int newNX = x / newM;                    /////////////////////////////////////////////////////////
int newNY = y / newM;                    //Normalise function for 2D vectors, currently testing///
return newNX, newNY;                     /////////////////////////////////////////////////////////
}
//
int Magnitude2()
{
int newX = x * x;                        /////////////////////////////////////////////////////////
int newY = y * y;                        //Magnitude function for 2D vectors, currently testing///
int newM = sqrt(newX + newY);            /////////////////////////////////////////////////////////
cout << newM << endl;
return newM;
}
//
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
//
int Vec2Mag::Magnitude(int a, int b)
{
int newX = x * x;
int newY = y * y;
int newM = sqrt(newX + newY);
return newM;
}
//
Vec2Mag G = { 6,12 };
//
int Normalise()
{
T newX = x * x;
T newY = y * y;
T newM = sqrt(newX + newY);

T newNX = x / newM;
T newNY = y / newM;
return newNX, newNY;
}
//
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
//
double Magnitude()
{
T newX = x * x;
T newY = y * y;                    //old function
T newM = sqrt(newX + newY);
return newM;
}
*/

/* October 27, 2015:
// October 27, 2015 at 9:30 AM:
//
Vec2 operator*(const Vec2 &other) //Version one of custom magnitude function, was in the Vec2D template class.
{
T newX = x * other.x;
T newY = y * other.y;
T newM = sqrt(newX + newY);
return Vec2(newM);
}
//
cout << "2D vector magnitude:" << endl; //This was in the main function.
C = A * A;
C.print2();
cout << endl;
//
Error: C4244 - 'initializing':conversion from 'double' to 'int', possible loss of data
Error: C2440 - '<function-style-cast>':cannot convert from 'int' to 'Vec2<int>'
//
In the main function, my A, B and C Vec2D objects are <int>. Did not test Vec2 <double> objects.
//
// October 27, 2015 at 9:56 AM:
//
Vec2 operator*(const Vec2 &other) //Version two of custom magnitude function, was in the Vec2D template class.
{
T newX = x * other.x;
T newY = y * other.y;
return Vec2(newX, newY);
}
//
cout << "2D vector magnitude:" << endl; //This was in the main function.
C = A * A;
C.print2();
cout << endl;
//
When testing, the code runs. The result printed out to the screen is 25, 16: //A is (5,4) 5*5 = 25, 4*4 = 16
2D vector magnitude:
25, 16
This is wrong since this the answer has not been sqrt. //Vec2D objects A, B and C are <int>
//
If this is done:
Vec2 operator*(const Vec2 &other)
{
T newX = sqrt(x * other.x);
T newY = sqrt(y * other.y);
return Vec2(newX, newY);
}
//
Then this is printed to the screen:
2D vector magnitude:
5, 4
This is wrong, its just reprinting Vec2D A. //Vec2D A, B and C is set as <int>.
//
// October 27, 2015 at 11:00 AM:
//
Vec2 operator*(const Vec2 &other)
{
T newX = x * other.x;
T newY = y * other.y;
T newM = (newX + newY);
return Vec2(newM); //Error points here: Error - C2440 '<function-style-cast>':cannot convert from 'double' to 'Vec2<double>'
}
//
In my main function, I have two new Vec2 objects called AA and CC of data type <double>. Without "T newM = (newX + newY);" and "return Vec2(newM);" code will be fine.
//
// October 27, 2015 at 11:59 AM:
//
double mag2()                        //In Vec2 template class
{
return 0;
}
//
double mag2(double);                 //prototype function outside of main
//
Vec2 <double> AA, CC;                //In main function
cout << "2D vector AA:" << endl;
AA.x = 3, AA.y = 0;
AA.print2();
cout << endl;
cout << "2D vector magnitude:" << endl;
CC = AA * AA;
mag2(CC);--------Error: no suitable conversion from "Vec2<double>" to "double" exists
CC.print2();
cout << endl;
//
// October 27, 2015 at place holder time:
//
*/