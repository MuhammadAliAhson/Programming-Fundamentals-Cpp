

//PART 6 A PART ONLY


#include <iostream>
using namespace std;
int
main ()
{ char  u;
  float x, y, z, a;
  cout << "Hello! Welcome." << endl;
  cout << "Please enter your data in Gbs" << endl;
  cin >> x;
  cout<<"Enter your Package type in Capital leters"<<endl;
cin>>u;  
  if (u=='A'){
      cout << "Your Package is A" << endl;
      cout<<"Original Price is 100 Rs"<<endl<<"Data limit is 1 GB";
      if (x > 1.00)
	{
	  y = (x - 1.00) * 1000;
	  z = ((x - 1.00) * 10) * 20;
	  a = z + 100;
	  cout << "Additional Mbs you used " << y << " Mbs"<<endl;
	  cout << "Price of Additional data  "  << z << "Rs"<<endl;
	cout << "Total price for Additional data  " << a<<"Rs" << endl;
	    
	}
}
  if (u=='B')
    {
      cout << "Your Package is B" << endl;
      cout<<"Original Price is 200 Rs"<<endl<<"Data limit is 2.5 GB"<<endl;
      if (x > 2.500)
	{
	  y = (x - 2.500) * 1000;
	  z = ((x - 2.500) * 10) * 10;
	  a = z + 200;
	  cout << "Additional Mbs you used "<< y << " Mbs"<<endl;
	  cout << "Price of Additional data  "  << z << "Rs"<<endl;
	cout << "Total price for Additional data  " << a <<"Rs"<< endl;
	    
	}
    }
  if (u=='C')
    {
      cout << "Your Package is C" << endl;
      cout << "Total Price is 1000Rs" << endl<<"Unlimited Data.";
    }

  return 0;
}

