#include <iostream>
#include <string>
using namespace std;
int
main ()
{
  cout << "Welcome to Trip Advisor" << endl;
  cout << "Enter the outlook" << endl;
  
  // Declaring variables.
  
  int w, r;
  string i, x, y, z;
  cin >> x;
  string a = "sunny";
  string b = "overcast";
  string c = "rain";
  string d = "normal";
  string e = "high";
  string f = "strong";
  string g = "moderate";
  string h = "poor";
  if (x == a)
    {
      cout << "Enter Humidity" << endl;
      cin >> w;
      if (w < 40)
	{
	  cout << "You can go to trip" << endl;
	}
      if (w >= 40 && w <= 60)
	{
	  cout << "Enter Temperature" << endl;
	  cin >> y;
	}
      if (y == d)
	{
	  cout << "Go to trip";
	}
      if (y == e)
	{
	  cout << "Stay home";
	}
      if (w > 60)
	{
	  cout << "Stay at home" << endl;
	  return 0;
	}
    }
  if (x == b)
    {
      cout << "Enter the Change of perception" << endl;
      cin >> r;
      if (r >= 50)
	{
	  cout << "Saty at home" << endl;
	}
      if  (r < 50)
	{
	  cout << "Wind Factor" << endl;
	  cin >> z;
	  if (z == f)
	    {
	      cout << "Stay home";
	    }
	  if  (z == g)
	    {
	      cout << "go to trip";
	    }
	}
        
    }
      if (x == c)
	{
	  cout << "Enter the Visibility" << endl;
	  cin >> i;
	  if (i == d)
	    {
	      cout << "Go for trip";
	    }
	  if (i == h)
	    {
	      cout << "Stay at home";
	    }
	}
  return 0;
}

