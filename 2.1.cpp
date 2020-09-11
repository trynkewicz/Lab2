#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

double func (double x){
return (x*x*x*x)+18*x*x*x-6*x*x+x-10;
}

int main (){
	double a,b,x;
	double e=0.00001;
	
	cout << "Vvedite otrezok" << endl;
	cin >> a >> b;
	
	if ((func(a)*func(b))>0)
	cout << "na dannom otrezke net korney ili ih bolee odnogo" << endl;
	else{
		 do {
	if (func(a)<func(b)){
    x = (a + b) / 2;
    if (func(x) > 0) 
    b = x;
    else 
    a = x;
}
    else {
		x = (a + b) / 2;
    if (func(x) < 0) 
    b = x;
    else 
    a = x;
	}
   }while (fabs(func(x)) > e );
    cout << "Po metodu dihotomii koren=" << x << endl;
	
	double rez = b, f0, f;
   
  do {
    f = func(rez);
    f0 = func(a);
    rez = rez - (f/(f - f0))*(rez - a);
    
  } while (fabs(f) > e);
  cout << "Po metodu hord koren=" << rez << endl;
  
	}
	return 0;
}
