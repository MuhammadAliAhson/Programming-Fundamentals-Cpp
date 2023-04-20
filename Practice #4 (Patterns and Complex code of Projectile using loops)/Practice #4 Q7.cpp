#include <iostream>
using namespace std;
int main()
{
	// s=Speed,, 
	// d=distance
	// deld=delta distance
	// deltat = instanous time interval 
	// app = approximate
	// tp = time period
	
double s,d,deld,deltat,app=0;
const double tp = 0.01;
int w=0;


cout << "Input the speed: ";
cin >> s;
// speed when the projectile is launced
double vi = s;
cout << endl;


deld = tp*tp- (0.5*9.8*tp*tp);
d = d + (s*tp);


if(w==0)
{
cout << endl << "Time span : " <<w/100 << " s: " << d << w/100 << "   " << deld << endl;
}


while(d>0)
{
w++;
deltat = w/100;
d = d + (s*tp);
deld = vi*deltat - (0.5*9.8*deltat*deltat);
s = s - (9.8*tp);

if(d>app)
{
app = d;
}

if(w%100==0)
{
cout << endl << "Time span: " << w/100 << " s: " << d << w/100 << "   " << deld << endl;
}


}
// attempt to make the projectile...
//for(int j=0;j<w;j++){
//for(int i =app;i>0;i--){
//	cout<<" ";
//}for(int i =0;i<1;i++){
//	cout<<"*";
//}
//}

return 0;
}

