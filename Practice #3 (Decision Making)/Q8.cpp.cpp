#include <iostream>
using namespace std;

int h (int, int);

int
main ()
{
  
int x, z;
  
cout << "Enter your ammount in Pkr :" << endl;
  
cin >> x;
  
cout << "Enter your preferences note :" << endl;
  
cin >> z;
  
h (x, z);
  
return 0;

}


int
h (int x, int z)
{
  
int a, b, c, d, e, f, g, y;
  
if (z == 500)
    {
      
a = x / 500;
      
z = a - 200;
      
a = a - z;
      
x = x - (a * 500);
      
b = x / 100;
      
x = x % 100;
      
c = x / 50;
      
x = x % 50;
      
d = x / 20;
      
x = x % 20;
      
e = x / 10;
      
x = x % 10;
      
f = x / 5;
      
x = x % 5;
      
g = x / 2;
      
x = x % 2;
      
y = x / 1;
      
x = x % 1;
      
cout << " 500 : " << a << endl << " 100 : " << b << endl << " 50 :" <<
	c << endl << " 20 : " << d << endl << " 10 : " << e << endl << " 5 : "
	<< f << endl << " 2 :" << g << endl << " 1 : " << y;
    
}
  
if (z == 100)
    {
      
b = x / 100;
      
z = b - 200;
      
b = b - z;
      
x = x - (b * 100);
      
a = x / 500;
      
x = x % 500;
      
c = x / 50;
      
x = x % 50;
      
d = x / 20;
      
x = x % 20;
      
e = x / 10;
      
x = x % 10;
      
f = x / 5;
      
x = x % 5;
      
g = x / 2;
      
x = x % 2;
      
y = x / 1;
      
x = x % 1;
      
cout << " 500 : " << a << endl << " 100 : " << b << endl << " 50 :" <<
	c << endl << " 20 : " << d << endl << " 10 : " << e << endl << " 5 : "
	<< f << endl << " 2 :" << g << endl << " 1 : " << y;
    
 
 
}
  
if (z == 50)
    {
      
c = x / 50;
      
z = c - 200;
      
c = c - z;
      
x = x - (c * 50);
      
a = x / 500;
      
x = x % 500;
      
b = x / 100;
      
x = x % 100;
      
d = x / 20;
      
x = x % 20;
      
e = x / 10;
      
x = x % 10;
      
f = x / 5;
      
x = x % 5;
      
g = x / 2;
      
x = x % 2;
      
y = x / 1;
      
x = x % 1;
      
cout << " 500 : " << a << endl << " 100 : " << b << endl << " 50 :" <<
	c << endl << " 20 : " << d << endl << " 10 : " << e << endl << " 5 : "
	<< f << endl << " 2 :" << g << endl << " 1 : " << y;
    
 
}
  
if (z == 20)
    {
      
d = x / 20;
      
z = d - 200;
      
d = d - z;
      
x = x - (d * 20);
      
a = x / 500;
      
x = x % 500;
      
b = x / 100;
      
x = x % 100;
      
c = x / 50;
      
x = x % 50;
      
e = x / 10;
      
x = x % 10;
      
f = x / 5;
      
x = x % 5;
      
g = x / 2;
      
x = x % 2;
      
y = x / 1;
      
x = x % 1;
      
cout << " 500 : " << a << endl << " 100 : " << b << endl << " 50 :" <<
	c << endl << " 20 : " << d << endl << " 10 : " << e << endl << " 5 : "
	<< f << endl << " 2 :" << g << endl << " 1 : " << y;
    
 
}
  
if (z == 10)
    {
      
e = x / 10;
      
z = e - 200;
      
e = e - z;
      
x = x - (e * 10);
      
a = x / 500;
      
x = x % 500;
      
b = x / 100;
      
x = x % 100;
      
c = x / 50;
      
x = x % 50;
      
d = x / 20;
      
x = x % 20;
      
f = x / 5;
      
x = x % 5;
      
g = x / 2;
      
x = x % 2;
      
y = x / 1;
      
x = x % 1;
      
cout << " 500 : " << a << endl << " 100 : " << b << endl << " 50 :" <<
	c << endl << " 20 : " << d << endl << " 10 : " << e << endl << " 5 : "
	<< f << endl << " 2 :" << g << endl << " 1 : " << y;
    
 
}
  if (z == 5)
    {
      
f = x / 5;
      
z = f - 200;
      
f = f - z;
      
x = x - (f * 5);
      
a = x / 500;
      
x = x % 500;
      
b = x / 100;
      
x = x % 100;
      
c = x / 50;
      
x = x % 50;
      
d = x / 20;
      
x = x % 20;
      
e = x / 10;
      
x = x % 10;
      
f = x / 5;
      
g = x / 2;
      
x = x % 2;
      
y = x / 1;
      
x = x % 1;
      
cout << " 500 : " << a << endl << " 100 : " << b << endl << " 50 :" <<
	c << endl << " 20 : " << d << endl << " 10 : " << e << endl << " 5 : "
	<< f << endl << " 2 :" << g << endl << " 1 : " << y;
    
 
}
  if (z == 2)
    {
      
g = x / 2;
      
z = g - 200;
      
g = g - z;
      
x = x - (g * 2);
      
a = x / 500;
      
x = x % 500;
      
b = x / 100;
      
x = x % 100;
      
c = x / 50;
      
x = x % 50;
      
d = x / 20;
      
x = x % 20;
      
e = x / 10;
      
x = x % 10;
      
f = x / 5;
      
x = x % 5;
      
y = x / 1;
      
x = x % 1;
      
cout << " 500 : " << a << endl << " 100 : " << b << endl << " 50 :" <<
	c << endl << " 20 : " << d << endl << " 10 : " << e << endl << " 5 : "
	<< f << endl << " 2 :" << g << endl << " 1 : " << y;
    
}
  
if (z == 1)
    {
      
y = x / 1;
      
z = y - 200;
      
y = y - z;
      
x = x - (y * 1);
      
a = x / 500;
      
x = x % 500;
      
b = x / 100;
      
x = x % 100;
      
c = x / 50;
      
x = x % 50;
      
d = x / 20;
      
x = x % 20;
      
e = x / 10;
      
x = x % 10;
      
f = x / 5;
      
x = x % 5;
      
g = x / 2;
      
x = x % 2;
      
cout << " 500 : " << a << endl << " 100 : " << b << endl << " 50 :" <<
	c << endl << " 20 : " << d << endl << " 10 : " << e << endl << " 5 : "
	<< f << endl << " 2 :" << g << endl << " 1 : " << y;
    
 
}

 
}

