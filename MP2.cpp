#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	//This program computes for interior angles, area, perimeter, apothem (if applicable), and circumcenter
	//also identifies type of triangle based on length of sides and value of interior angles
	
	double a, b, c, A, B, C, Z, angA, angB, angC, area, p, apo, circ;
	
	//Input of values of each side of the triangle
	cout << "ENTER THREE SIDES" << endl;
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	cout << "C = "; cin >> c;
	cout << endl;
	
	//cosA for angle A, then converted to degrees
	A = (b*b + c*c - a*a) / ( 2*b*c);
	angA = acos(A)*180/ 3.14159;
	
	//cosB for angle B, then converted to degrees
	B = (c*c + a*a - b*b) / (2*a*c);
	angB = acos(B)*180/ 3.14159;
	
	//subtract angles A and B from 180 to find angle C
	angC = 180 - angA - angB;
	
	cout << "INTERIOR ANGLES " << endl;
	cout << "-> angle A= " << angA << endl;
	cout << "-> angle B= " << angB << endl;
	cout << "-> angle C= " << angC << endl;
	cout << endl;
	
	//identifies the type of triangle using the length of the sides
	if (a==b && b==c)
		cout << "This triangle is an EQUILATERAL TRIANGLE." << endl;
	else if (a==c && c!=b) 
		cout << "This triangle is an ISOSCELES TRIANGLE." << endl;
	else if (a==b && a!=c) 
		cout << "This triangle is an ISOSCELES TRIANGLE." << endl;
	else	
		cout << "This triangle is a SCALENE TRIANGLE." << endl;
	
	//calculating the perimiter
	p = a+b+c;
	
	//calculating the area
	Z = p * (p-a) * (p-b) * (p-c);
	area = sqrt(Z);
	
	cout<<endl;
	cout << "Area = " << area << endl;
	cout << "Perimeter = " << p << endl;
	cout << endl;
	
	//determining type of angle using interior angle
	if (angA<90 && angB <90 && angC<90)
		cout << "This triangle is an ACUTE TRIANGLE.";
	else if (angA==90)
		cout << "This triangle is a RIGHT TRIANGLE.";
	else if (angB==90)
		cout << "This triangle is a RIGHT TRIANGLE.";
	else if (angC==90)
		cout << "This triangle is a RIGHT TRIANGLE.";
	else
		cout << "This triangle is an OBTUSE TRIANGLE.";
	
	//calculating apothem given the area and perimeter value
	//If-Else statement was used as only polygons with equal lengths of sides have apothems
	if (a==b && b==c)
	{
		apo =( 2 * area )/ p;
		cout << endl << endl;
		cout << "Apothem = " << apo << endl;
	}
	else
	{
		cout << " Only polygons with equal sides have an apothem." << endl;
	}
	
	//calculating the circumcenter of the triangle
	//center of the circle that can be drawn with the edges of the polygon
	circ = ( a*b*c ) / sqrt( ( (a+b+c) * (b+c-a) * (c+a-b) * (a+b-c) ) );
	
	cout << "Circumcenter = " << circ << endl;
	
	getch();
	return 0;
}
