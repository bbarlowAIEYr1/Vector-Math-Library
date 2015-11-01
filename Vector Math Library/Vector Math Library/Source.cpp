/*
Assignment : Math...
1. Create a templated class that supports 2D Vector addition and subtraction. //Done
2. Add support for 3D vectors.                                                //Done
3. Add support for magnitude of a vector.                                     //Done
4. Add support for normalizing a vector.                                      //Done
5. Add support for dot and cross product.                                     //Done
*/

#include "Header.h"   //include header file
using namespace std;  //using namespace

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
	cout << "2D vector magnitude:" << endl; //info
	cout << "Magnitude of A is: " << A.mag2() << endl; //info and prints out magnitude of vector A
	cout << "Magnitude of B is: " << B.mag2() << endl; //info and prints out magnitude of vector B
	cout << endl; //new line
	cout << "2D vector normalise:" << endl; //info
	cout << "Normalise vector A is: " << A.nor2X() << " " << A.nor2Y() << endl; //info and prints out normalise x and y of vector A
	cout << "Normalise vector B is: " << B.nor2X() << " " << B.nor2Y() << endl; //info and prints out normalise x and y of vector B
	cout << endl; //new line
	cout << "2D vector dot product:" << endl; //info
	C = A * B; //C will equal ((A.x * B.x)(A.y * B.y)) 
	C.dot2(); //This will print out the dot product of C
	cout << endl; //new line
	cout << "2D vector cross product:" << endl;
	cout << A.cro2() << endl;
	cout << B.cro2() << endl;
	cout << endl;

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
	cout << "3D vector magnitude:" << endl; //info
	cout << "Magnitude of D is: " << D.mag3() << endl; //info and prints out magnitude of vector D
	cout << "Magnitude of E is: " << E.mag3() << endl; //info and prints out magnitude of vector E
	cout << endl; //new line
	cout << "3D vector normalise:" << endl; //info
	cout << "Normalise vector D is: " << D.nor3X() << " " << D.nor3Y() << " " << D.nor3Z() << endl; //info and prints out normalise x, y and z of vector D
	cout << "Normalise vector E is: " << E.nor3X() << " " << E.nor3Y() << " " << E.nor3Z() << endl; //info and prints out normalise x, y and z of vector E
	cout << endl; //new line
	cout << "3D vector dot product:" << endl; //info
	F = D * E; //F will equal ((D.x * E.x)(D.y * E.y)(D.z * E.z)) 
	F.dot3(); //This will print out the dot product of F
	cout << endl; //new line
	cout << "3D vector cross product:" << endl;
	cout << D.cro3X() << " " << D.cro3Y() << " " << D.cro3Z() << endl;
	cout << E.cro3X() << " " << E.cro3Y() << " " << E.cro3Z() << endl;
	cout << endl;

	system("pause");
}