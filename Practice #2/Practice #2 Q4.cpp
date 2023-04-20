
// PART 4

#include <iostream>
using namespace std;
int speed();
int main()
{
	
	speed();
	return 0;
	
}
int speed()
	{
		float t,x,x_Speed,y,y_Speed,e,z_Speed,z,z_Minutes,a,b,c,d,f,g;
		cout<<"Enter Distance in km : ";
		cin>>x;
		// Taking Speed in m/s
		cout<<"Enter speed in m/s : ";
		cin>>x_Speed;
		// converting into km/h
		g=(x_Speed*3600)/1000;
		// calculating time for x
		a=x/g;
		cout<<"Enter Distance in km : ";
		cin>>y;
		cout<<"Enter speed in km/h : ";
		cin>>y_Speed;
		// calculating time for y
		b=y/y_Speed;
		cout<<"Enter speed in km/h : ";
		cin>>z_Speed;
		cout<<"time in mins : ";
		cin>>z_Minutes;
		// converting min into hours
		t=z_Minutes/60;
		// calculating distance
		c=z_Speed*t;
		// total distance
		d=x+y+c;
		// total time
		e=a+b+t;
		// calculating average speed in km/h
		f=d/e;
		// Displaying Avg Speed
		cout<<"Average speed is : "<<f<<" km/h";
		return 0;
	}
