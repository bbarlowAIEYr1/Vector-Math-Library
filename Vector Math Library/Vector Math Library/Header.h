/*
Assignment : Math...
1. Create a templated class that supports 2D Vector addition and subtraction. //Done
2. Add support for 3D vectors.                                                //Done
3. Add support for magnitude of a vector.                                     //Currently working on//
4. Add support for normalizing a vector.                                      //work on after magnitude//
5. Add support for dot and cross product. (you have not learned this yet)     //work on after normalizing vector//
*/

#pragma once
#include <iostream>   //c++ standard library
#include <cmath>      //c++ library that allows the use of "sqrt" and "pow" math

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
	Vec2 operator*(const Vec2 &other) //overload operator for multiplication
	{
		T newX = x * other.x;
		T newY = y * other.y;
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
	Vec3 operator*(const Vec3 &other) //overload operator for multiplication
	{
		T newX = x * other.x;
		T newY = y * other.y;
		T newZ = z * other.z;
		return Vec3(newX, newY, newZ);
	}

	void print3() //prints out x, y and z for 3D vectors
	{
		cout << x << ", " << y << ", " << z << endl;
	}
};