/*
Assignment : Math...
1. Create a templated class that supports 2D Vector addition and subtraction. //Done
2. Add support for 3D vectors.                                                //Done
3. Add support for magnitude of a vector.                                     //Done
4. Add support for normalizing a vector.                                      //Done
5. Add support for dot and cross product.                                     //Done
*/

#include "CustomVML.h"   //include header file\

void main()
{
	Vector <double> A, B, C; //vectors and values in them
	Vector <double> D, E;
	A.x = 5, A.y = 4, A.z = 7, A.alpha = 68;
	B.x = -2, B.y = 5, B.z = 6, B.alpha = 79;
	D.x = 7, D.y = 9, D.z = 4, D.alpha = 0;
	E.x = 8, E.y = 10, E.z = 2, E.alpha = 0;
	
	C = A + B;
	C.Print2D();
	cout << endl;
	C.Print3D();  //addition
	cout << endl;
	C.Print4D();
	cout << endl;

	C = A - B;
	C.Print2D();
	cout << endl;
	C.Print3D();  //subtraction
	cout << endl;
	C.Print4D();
	cout << endl;

	cout << D.Magnitude() << endl;  //magnitude of vecs
	cout << E.Magnitude() << endl;

	system("pause");
}