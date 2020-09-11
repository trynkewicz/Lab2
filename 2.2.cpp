#include <iostream>
#include <cmath>
#include <fstream>
#define _USE_MATH_DEFINES
using namespace std;

double func (double x){
return pow(7,x)-6*x-2;
}
int main(){
double e=0.0001;
ofstream efout;
double a=-5.;
double y;
efout.open("2.2.txt");
do {
y=func(a);
efout << a << " " << y <<endl;
a=a+0.001;
} while (a<=5.);
 efout.close();
 
 double rez,x,p; 
 cout << "Vvedite x0 " << endl;
 cin >> x;
 p=x;
   do {
    rez = x;
    //x = 6*x + (log(2)/log(7));
    x = (pow(7,x)-2)/6;
  } while (fabs(rez - x) > e);
  cout << "Po metodu iteracii koren="<< x << endl;
  x=p;
 double f, df; 
  do {
    f = func (x);
    df = pow(7,x)*log(7)-6;
    x = x - f / df;
    
  } while (fabs(f) > e );
  cout << "Po metodu Niutona koren="<< x  << endl;
  return x; 
return 0;
}
