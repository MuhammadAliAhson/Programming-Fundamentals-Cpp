#include <iostream>
#include <cmath>
using namespace std;

int
main ()
{
  
float a, b, c, d, e, f, g, h,x;
  
cout << "Enter the value of a , b and c respectively " << endl;
  
cin >> a >> b >> c;
d = (b * b) - (4 * a * c);
e=((-b) + sqrt (d)) / 2 * a; 
f=((-b) - sqrt (d)) / 2 * a; 
g=sqrt(-d)/2*a;
 x=(-b)/2*a; 
d > 0 ? cout<<" roots  of x are "<<e<<" and  "<<f :d==0? cout<<"The Only Real Part  "<<x:cout<<"The real part is "<<x<<" and the imaginary part is "<<g;

 
return 0;

}

