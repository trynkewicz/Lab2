

#include <iostream>
#include <cmath>
#include <math.h>
#include <fstream>
using namespace std;
double f1(double x, double y) {
	return x*x*x+y*y*y-8;
}
double f2(double x, double y) {
	return y-1-pow(x,(3./2.));
}
double f1x(double x, double y) {
	return 3*x*x;
}
double f1y(double x, double y) {
	return 3*y*y;
}
double f2x(double x, double y) {
	return (3./2.)*pow(x,(1./2.));
}
double f2y(double x, double y) {
	return 1.;
}
double d(double x, double y) {
	return f1x(x, y) * f2y(x, y) - f1y(x, y) * f2x(x, y);
}
double dy(double x, double y) {
	return f1x(x, y) * f2(x, y) - f1(x, y) * f2x(x, y);
}
double dx(double x, double y) {
	return f1(x, y) * f2y(x, y) - f1y(x, y) * f2(x, y);
}

int main()
{
	double x1, y1, x2, y2, e, k = 0;
	e = 0.0001;
	x1 = -10;
	x2 = 10;
	y1 = 1;
	y2 = -2;
	while (abs(f1(x1, y1) - f2(x1, y1)) > e) {
		x1 = x2 - dx(x2, y2) / d(x2, y2);
		y1 = y2 - dy(x2, y2) / d(x2, y2);
		y2=y1;
		x2 = x1;
	}

	cout << x2 << endl << y2 << endl;
	cout << f1(x2, y2) << endl << f2(x2, y2);





}
