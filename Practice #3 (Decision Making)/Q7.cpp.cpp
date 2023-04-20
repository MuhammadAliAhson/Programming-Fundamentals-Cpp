#include <iostream>
using namespace std;

int price ();

int
price (int cd, int ab)
{
  
 
cout << "Your Price is : " << cd * ab << "Rs" << endl;

} 
int 

main () 
{
  
 
int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s;
  
 
cout <<
    
"Please \ \n Enter 1 for ~Burgers. \ \n Enter 2 for ~Pizzas \ \n  Enter 3 for ~Sandwich \ \n";
  
 
cin >> a;
  
 
switch (a)
    
    {
    
 
case 1:
      
 
cout <<
	
"Enter 1 for Crispy Chicken Burger(600 Rs) \ \n Enter 2 for Beef Burger (650 Rs) \ \n Enter 3 for Fish Burger (700 Rs) "<<endl;
      
 
cin >> b;
      
 
switch (b)
	
	{
	
 
case 1:
	  
 
cout << "Enter the amount of Burgers ." << endl;
	  
 
cin >> c;
	  
cout << "Your " << c <<
	    
" Order of Crispy Chicken Burger have been placed." << endl;
	  
 
 
price (c, 600);
	  
 
break;
	
 
case 2:
	  
 
cout << "Enter the amount of Burgers ." << endl;
	  
 
cin >> d;
	  
 
cout << "Your " << d << " Order of Beef Burger have been placed."
	    
 <<endl;
	  
 
price (d, 650);
	  
 
break;
	
 
case 3:
	  
 
cout << "Enter the amount of Burgers ." << endl;
	  
 
cin >> e;
	  
 
cout << "Your " << e << " Order of Fish Burger have been placed."
	    
 <<endl;
	  
 
price (e, 700);
	break;
 default:
 cout<<"You have entered an invalid value"<<endl<<"Thanks for using our services";
}
      
 
break;
    
 
case 2:
      
 
cout <<
	
"Enter 1/2/3 for Chicken tikka (Small/Medium/Large)    (Rs.850/1200/1600) \ \n Enter 4/5/6 for Chicken Fajita (Small/Medium/Large)     (Rs.850/1200/1600) \ \n Enter 7/8/9 for Four season (Small/Medium/Large)    (Rs.850/1200/1600)"<<endl;
      
 
cin >> f;
      
 
switch (f)
	
	{
	
 
case 1:
	  
 
cout << "Enter the amount of Pizza ." << endl;
	  
 
cin >> g;
	  
 
cout << "Your " << g <<
	    " Order Chicken tikka (Small) have been placed." << 
endl;
	  
price (g, 850);
	  
break;
	
 
case 2:
	  
 
cout << "Enter the amount of Pizza ." << endl;
	  
 
cin >> h;
	  
 
cout << "Your " << h <<
	    " Order Chicken tikka (Medium) have been placed." << 
endl;
	  
price (h, 1200);
	  
break;
	
 
case 3:
	  
 
cout << "Enter the amount of Pizza ." << endl;
	  
 
cin >> i;
	  
 
cout << "Your " << i <<
	    " Order Chicken tikka (Large) have been placed." << 
endl;
	  
price (i, 1600);
	  
break;
	
case 4:
	  
cout << "Enter the amount of Pizza ." << endl;
	  
 
cin >> j;
	  
cout << "Your " << j <<
	    
" Order of Chicken Fajita (Small) have been placed." << endl;
	  
price (j, 850);
	  
break;
	
case 5:
	  
cout << "Enter the amount of Pizza ." << endl;
	  
 
cin >> k;
	  
cout << "Your " << k <<
	    
" Order of Chicken Fajita (Medium) have been placed." << endl;
	  
price (k, 1200);
	  
break;
	
case 6:
	  
cout << "Enter the amount of Pizza ." << endl;
	  
 
cin >> l;
	  
cout << "Your " << l <<
	    
" Order of Chicken Fajita (Large) have been placed." << endl;
	  
price (l, 1600);
	  
break;
	
case 7:
	  
cout << "Enter the amount of Pizza ." << endl;
	  
 
cin >> m;
	  
cout << "Your " << m <<
	    
" Order of Four season (Small) have been placed." << endl;
	  
price (m, 850);
	  
break;
	
case 8:
	  
cout << "Enter the amount of Pizza ." << endl;
	  
 
cin >> n;
	  
cout << "Your " << n <<
	    
" Order of Four season (Medium) have been placed." << endl;
	  
price (n, 1200);
	  
break;
	
case 9:
	  
cout << "Enter the amount of Pizza ." << endl;
	  
 
cin >> o;
	  
cout << "Your " << o <<
	    
" Order of Four season (Large) have been placed." << endl;
	  
price (o, 1600);
	  
break;
 default:
 cout<<"You have entered an invalid value"<<endl<<"Thanks for using our services";
	
}
      
 
break;
    
 
case 3:
      
 
cout <<
	"Enter 1 for Club   (300 Rs) \ \n Enter 2 for Chicken   (325 Rs) \ \n Enter 3 for Vegetable   (315 Rs)"<<endl;
      
 
cin >> p;
      
 
switch (p)
	
	{
	
 
case 1:
	  
 
cout << "Enter the amount of Sandwich ." << endl;
	  
 
cin >> q;
	  
 
cout << "Your " << q <<
	    " Order of Club Sandwich have been placed." 
 <<endl;
	  
price (q, 300);
	  
break;
	
 
case 2:
	  
 
cout << "Enter the amount of Sandwich ." << endl;
	  
 
cin >> r;
	  
 
cout << "Your " << r <<
	    
" Order of Chicken Sandwich have been placed." << endl;
	  
price (r, 325);
	  
break;
	
case 3:
	  
cout << "Enter the amount of Sandwich ." << endl;
	  
 
cin >> s;
	  
 
cout << "Your " << s <<
	    
" Order of Vegetable Sandwich have been placed." << endl;
	  
price (s, 315);
	  
break;
	 default:
 cout<<"You have entered an invalid value"<<endl<<"Thanks for using our services";
}
      
 
break;
    
 
 
default:
      
 
cout <<
	
"You have entered an invalid value \ \nThanks for using our serives ."
	
 <<endl;
    
 
}
  
return 0;

 
}



