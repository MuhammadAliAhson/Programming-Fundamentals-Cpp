
//PART 3


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// declaring the functions
double LHS(float o);
double RHS(float o);
double difference(float y,float z);
double terms(float o);

int main(){
	float const pi=3.1415;
	float x,o;
   cout<<"Enter the angle in degree : ";
cin>>x;
// converting angle from degree into radian
o=(x*pi)/180;
	double j = LHS(o);
	double l = RHS(o);
	difference(j,l);
	terms(o);
	
	return 0;
}
// Left-Hand-Side
double LHS(float o)
{float y;
	y=sin(o);
	cout<<"Result of left hand side is : "<<y<<endl;
	return y;
}
//Right-Hand-Side
double RHS(float o){
float z;
z=o-(pow(o,3))/(3*2*1)	+(pow(o,5))/(5*4*3*2*1) -(pow(o,7))/(7*6*5*4*3*2*1) +(pow(o,9))/(9*8*7*6*5*4*3*2*1);
cout<<"Result of right hand side is : "<<z<<endl;
return z;
}
// Difference between LHS-RHS
double difference(float y,float z){
	long double a;
	a=y-z;
	cout<<"Difference between left and right hand side is : "<<a<<endl;
	return a;
}
// displaying the terms
double terms(float o){
	float b,c,d,e;
	cout<<"The First term is : "<<o<<endl;
	b=o-(pow(o,3))/(3*2*1);
	cout<<"The series of two terms is : "<<b<<endl;
	c=o-(pow(o,3))/(3*2*1)	+(pow(o,5))/(5*4*3*2*1);
		cout<<"The series of three terms is : "<<c<<endl;
		d=o-(pow(o,3))/(3*2*1)	+(pow(o,5))/(5*4*3*2*1) -(pow(o,7))/(7*6*5*4*3*2*1);
		cout<<"The series of four terms : "<<d<<endl;
		e=o-(pow(o,3))/(3*2*1)	+(pow(o,5))/(5*4*3*2*1) -(pow(o,7))/(7*6*5*4*3*2*1) +(pow(o,9))/(9*8*7*6*5*4*3*2*1);
		cout<<"The series of five terms : "<<e<<endl;
	
}
