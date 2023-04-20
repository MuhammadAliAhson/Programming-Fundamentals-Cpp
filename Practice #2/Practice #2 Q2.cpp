#include <iostream>
using namespace std;
int length();
int main()
{
	
	length();
	return 0;	
}
int length()
	{
		float a,b,c,d,e;
		// converting km/h into m/s
		a=(72*1000)/3600;
		cout<<"Passenger's train speed in meter per second : "<<a<<" m/s"<<endl;
		// converting km/h into m/s
		b=(54*1000)/3600;
		cout<<"Good's train speed in meter per second : "<<b<<" m/s"<<endl;
		// its a rule in physics which is that  two opposite speeds add up (Doppler effect)
		// adding speeds
		c=a+b;
		cout<<"Enter the time in seconds : ";
		cin>>d;
		// Distance formula(calculating distance or length)
		e=d*c;
		cout<<"Length of train in meter : "<<e<<" meter"<<endl;
		
		return 0;
	}
