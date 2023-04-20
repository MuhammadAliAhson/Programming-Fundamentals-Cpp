#include <string>
#include <iostream>
using namespace std;
// Declaring two functions .

string one();
string two();
string one(){
	string g;
	 int a,b,c,d;
    string x="Grey Color";
    string y="Blue Color";
    string z="Red Color";
cout<<"Enter a number between 1-81"<<endl;
cin>>a;
if(a>=1 && a<=9){
    if(a==1||a==4||a==7){
      //  cout<<x;
        g=x;
    }
    else if(a==2||a==5||a==8){
       // cout<<y;
        g=y;
    }
    else{
 //   cout<<z;
    g=z;
}}
if(a>=10 && a<=18){
    if(a==12||a==15||a==18){
   // cout<<x;    
    g=x;
    }else if(a==10||a==13||a==16){
      //  cout<<y;
        g=y;
    }else
      //  cout<<z;
    g=z;
}
if(a>=19&&a<=27){
    if(a==19||a==22||a==25){
  //  cout<<x;    
    g=x;
    }else if(a==20||a==23||a==26){
      //  cout<<y;
        g=y;
    }else{
       // cout<<z;
        g=z;
    }
}
if(a>=28&&a<=36){
    if(a==30||a==33||a==36){
   // cout<<x;    
    g=x;
    }else if(a==28||a==31||a==34){
        //cout<<y;
        g=y;
    }else{
       // cout<<z;
        g=z;
    }
}
if(a>=37&&a<=45){
    if(a==37||a==40||a==43){
    //cout<<x;    
    g=x;
    }else if(a==38||a==41||a==44){
      //  cout<<y;
        g=y;
    }else{
      //  cout<<z;
        g=z;
    }
}if(a>=46&&a<=54){
    if(a==48||a==51||a==54){
    //cout<<x;    
    g=x;
    }else if(a==46||a==49||a==52){
     //   cout<<y;
        g=y;
    }else{
      //  cout<<z;
        g=z;
    }
} if(a>=55 && a<=63){
    if(a==55||a==58||a==61){
    //cout<<x; 
	g=x;   
    }else if(a==56||a==59||a==62){
      //  cout<<y;
        g=y;
    }else{
      //  cout<<z;
        g=z;
    }
}if(a>=64&&a<=72){
    if(a==66||a==69||a==72){
    //cout<<x;    
    g=x;
    }else if(a==64||a==67||a==70){
       // cout<<y;
        g=y;
    }else{
      //  cout<<z;
        g=z;
    }
}if(a>=73&&a<=81){
    if(a==73||a==76||a==79){
    //cout<<x;  
	g=x;  
    }else if(a==74||a==77||a==80){
        //cout<<y;
        g=y;
    }else{
       // cout<<z;
        g=z;
    }
}
//cout<<g<<endl;
return g;
}
string two()
{
	string h;
	 int a,b,c,d;
    string x="Grey Color";
    string y="Blue Color";
    string z="Red Color";
cout<<"Enter a number between 1-81"<<endl;
cin>>a;
if(a>=1 && a<=9){
    if(a==1||a==4||a==7){
      //  cout<<x;
        h=x;
    }
    else if(a==2||a==5||a==8){
       // cout<<y;
        h=y;
    }
    else{
 //   cout<<z;
    h=z;
}}
if(a>=10 && a<=18){
    if(a==12||a==15||a==18){
   // cout<<x;    
    h=x;
    }else if(a==10||a==13||a==16){
      //  cout<<y;
        h=y;
    }else
      //  cout<<z;
    h=z;
}
if(a>=19&&a<=27){
    if(a==19||a==22||a==25){
  //  cout<<x;    
    h=x;
    }else if(a==20||a==23||a==26){
      //  cout<<y;
        h=y;
    }else{
       // cout<<z;
        h=z;
    }
}
if(a>=28&&a<=36){
    if(a==30||a==33||a==36){
   // cout<<x;    
    h=x;
    }else if(a==28||a==31||a==34){
        //cout<<y;
        h=y;
    }else{
       // cout<<z;
        h=z;
    }
}
if(a>=37&&a<=45){
    if(a==37||a==40||a==43){
    //cout<<x;    
    h=x;
    }else if(a==38||a==41||a==44){
      //  cout<<y;
        h=y;
    }else{
      //  cout<<z;
        h=z;
    }
}if(a>=46&&a<=54){
    if(a==48||a==51||a==54){
    //cout<<x;    
    h=x;
    }else if(a==46||a==49||a==52){
     //   cout<<y;
        h=y;
    }else{
      //  cout<<z;
        h=z;
    }
} if(a>=55 && a<=63){
    if(a==55||a==58||a==61){
    //cout<<x; 
	h=x;   
    }else if(a==56||a==59||a==62){
      //  cout<<y;
        h=y;
    }else{
      //  cout<<z;
        h=z;
    }
}if(a>=64&&a<=72){
    if(a==66||a==69||a==72){
    //cout<<x;    
    h=x;
    }else if(a==64||a==67||a==70){
       // cout<<y;
        h=y;
    }else{
      //  cout<<z;
        h=z;
    }
}if(a>=73&&a<=81){
    if(a==73||a==76||a==79){
    //cout<<x;  
	h=x;  
    }else if(a==74||a==77||a==80){
        //cout<<y;
        h=y;
    }else{
       // cout<<z;
        h=z;
    }
}
//cout<<h<<endl;
return h;
}

int main()
{
// use of switch for the option 1 and 2 depend upon the user choice.

int a;
string t,q,y;
	cout<<"Enter 1 for option 1 and 2 for option 2 : "<<endl;
	cin>>a;
	switch(a){
	case 1:
t=one();
cout<<t<<endl;
break;
 case 2:
 q=	one();
 y=	two();
if(q==y){
	cout<<"same color ";
}else
cout<<"not same color ";

 
 break;
default:
	cout<<"wrong value";}
return 0;
}
