
// Part 5




#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
void reverse(int g);
double binary (int q);
double octal (int q);
double hexadecimal (int q);
void reverse(int g){
    int m;
    m=0;
    while(g>0){
    int y=g%10;
     
    m=m*10+y;
    g=g/10;
    }
    cout<<m;
}
double
binary (int q)
{
  int a[9], r = 0, e = 0;
  float w = 0;
  int g=0;
  r = q;
  w = q;
  cout << "Binary number is : ";
  for (int i = 9; i > 0; i--)
    {

      e = r % 2;
      r = r / 2;
      g = g*10+e;
      
    } reverse(g);
cout << endl;
  return 0;
}

double
octal (int q)
{int g=0;
  int r = 0, e = 0, a[3];
  float w = 0;
  r = q;
  w = q;
   cout << "The octal number is :";
  for (int i = 3; i > 0; i--)
    {
      r = r / 8;
      w = w / 8;
      e = (w - r) * 8;
      g =g*10+ e;
    }reverse(g);
 
  cout << endl;
  return 0;
}

double
hexadecimal (int q)
{ int g=0;
  int r = 0, e = 0, a[3];
  float w = 0;
  r = q;
  w = q;
  cout << "The hexagonal is :";
  for (int y = 0; y < 3; y++)
    {
      r = r / 16;
      w = w / 16;
      e = (w - r) * 16;
      g=g*10+ e;
    } 
    
  if (q == 10)
    {
      cout << "A";
    }
  else if (q == 11)
    {
      cout << "B";
    }
  else if (q == 12)
    {
      cout << "C";
    }
  else if (q == 13)
    {
      cout << "D";
    }
  else if (q == 14)
    {
      cout << "E";
    }
  else if (q == 15)
    {
      cout << "F";
    }
  else
    {   reverse(g);
    } return 0;
}

int main ()
{
  int q = 0;

  cout << "enter the number :" << endl;
  cin >> q;
  if (q >= 1 && q <= 256)
    {
      binary (q);
      octal (q);
      hexadecimal (q);
    }
  else
    {
      cout << "Invalid number to convert";
    }
  return 0;
}

