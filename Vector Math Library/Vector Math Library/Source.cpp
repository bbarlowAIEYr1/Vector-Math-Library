/*
Assignment : Math...
1. Create a templated class that supports 2D Vector addition and subtraction. //Done
2. Add support for 3D vectors.                                                //Done
3. Add support for magnitude of a vector.                                     //Currently working on//
4. Add support for normalizing a vector.                                      //work on after magnitude//
5. Add support for dot and cross product. (you have not learned this yet)     //work on after normalizing vector//
*/

#include "Header.h"
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
			
	Vec2 <double> AA, CC; //Vec2 objects of data type double
	cout << "2D vector AA:" << endl; //info
	AA.x = 3, AA.y = 0; //AA = (3,0)
	AA.print2(); //print test
	cout << endl; //new line
	cout << "2D vector magnitude:" << endl; //info
	CC = AA * AA; //CC will equal ((AA.x * AA.x)(AA.y * AA.y))
	CC.print2(); //print CC multiplication value (not the magnitude)
	cout << endl; //new line

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
			
	Vec3 <double> DD, FF; //Vec3 objects of data type double
	cout << "3D vector DD:" << endl; //info
	DD.x = 5, DD.y = 0, DD.z = 0; //DD = (5,0,0)
	DD.print3(); //print test
	cout << endl; //new line
	cout << "3D vector magnitude:" << endl; //info
	FF = DD * DD; //FF will equal ((DD.x * DD.x)(DD.y * DD.y)(DD.z * DD.z))
	FF.print3(); //print FF multiplication value (not the magnitude)
	cout << endl; //new line

	system("pause");
}