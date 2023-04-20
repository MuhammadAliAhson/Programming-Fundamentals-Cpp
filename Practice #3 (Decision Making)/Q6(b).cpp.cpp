
// PART 6 B PART ONLY




#include <iostream>
using namespace std;
int
main ()
{ char  u;
  float x, y, z, a;
  cout << "Hello! Welcome." << endl;
  cout << "Please enter your data in Gbs" << endl;
  cin >> x;
  cout<<"Enter your Package type  in Capital letters "<<endl;
cin>>u;  
  if (u=='A'){
      cout << "Your Package is A" << endl<<"Data Limit is 1 GB"<<endl<<"It is the cheapest offer to get limited internet for short time."<<endl;
      cout<<"Original Price is 100 Rs"<<endl;
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
      cout << "Your Package is B" << endl<<"Data limit is 2.5 GB"<<endl<<"It is the economic package but could save Rs"<<200-100<<" If you choose Package A"<<endl;
      cout<<"Original Price is 200 Rs"<<endl;
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
      cout << "Your Package is C" << endl<<"Unlimited Data"<<endl<<"You could have save Rs"<<1000-100<<"  and  Rs"<<1000-200<<"If you choose Package A and Package B respectively "<<endl;
      cout << "Total Price is 1000Rs" << endl;
    }

  return 0;
}
#include <iostream>
using namespace std;
int
main ()
{ char  u;
  float x, y, z, a;
  cout << "Hello! Welcome." << endl;
  cout << "Please enter your data in Gbs" << endl;
  cin >> x;
  cout<<"Enter your Package type  in Capital letters "<<endl;
cin>>u;  
  if (u=='A'){
      cout << "Your Package is A" << endl<<"Data Limit is 1 GB"<<endl<<"It is the cheapest offer to get limited internet for short time."<<endl;
      cout<<"Original Price is 100 Rs"<<endl;
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
      cout << "Your Package is B" << endl<<"Data limit is 2.5 GB"<<endl<<"It is the economic package but could save Rs"<<200-100<<" If you choose Package A"<<endl;
      cout<<"Original Price is 200 Rs"<<endl;
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
      cout << "Your Package is C" << endl<<"Unlimited Data"<<endl<<"You could have save Rs"<<1000-100<<"  and  Rs"<<1000-200<<"If you choose Package A and Package B respectively "<<endl;
      cout << "Total Price is 1000Rs" << endl;
    }

  return 0;
}

