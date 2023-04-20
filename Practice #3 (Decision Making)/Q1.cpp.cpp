
// PART 1




#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

 
int 
main () 
{
  
 // declaring variabes in strings and int datatype.
string match1, match2, match3, match4, match5, match6, teama, teamb,
    
teamc, teamf, teamf2, match7, match8, match9, teamw;
  
 
int n, o, p, q, r, s, t, u, v, w, x, y, z, ab, bc, cd, ef;
  
 
string a = "Afghanistan";
  
 
string b = "Australia";
  
 
string c = "Bangladesh";
  
 
string d = "England";
  
 
string e = "India";
  
 
string f = "Ireland";
  
 
string g = "Pakistan";
  
 
string h = "Scotland";
  
 
string j = "South Africa";
  
 
string k = "Sri Lanka";
  
 
string l = "West Indies";
  
 
string m = "Zimbabwe";
  
 
string win = " wins the match.";
  
  // Starting with the match 1. By using random number.
  
cout << "Match 1: Team " << a << " vs " << b << "=>  ";
  
n = 0 + rand () % 2;
  
 
srand (time (0));
  
 
 
if (n == 1)
    
    {
      
 
cout << a << win << endl;
      
 
match1 = a;
    
 
}
  
 
if (n == 2)
    
    {
      
 
cout << b << win << endl;
      
 
match1 = b;
    
 
}
  
cout << "Match 2: Team " << c << " vs " << d << "=>  ";
  
o = 1 + rand () % 2;
  
 
srand (time (0));
  
 
if (o == 1)
    
    {
      
 
cout << c << win << endl;
      
 
match2 = c;
    
 
}
  
 
if (o == 2)
    
    {
      
 
cout << d << win << endl;
      
 
match2 = d;
    
 
}
  
cout << "Match 3: Team " << e << " vs " << f << "=>  ";
  
p = 1 + rand () % 2;
  
 
srand (time (0));
  
 
if (p == 1)
    
    {
      
 
cout << e << win << endl;
      
 
match3 = e;
    
 
}
  
 
if (p == 2)
    
    {
      
 
cout << f << win << endl;
      
 
match3 = f;
    
 
}
  
cout << "Match 4: Team " << g << " vs " << h << "=>  ";
  
q = 1 + rand () % 2;
  
 
srand (time (0));
  
 
if (q == 1)
    
    {
      
 
cout << g << win << endl;
      
 
match4 = g;
    
 
}
  
 
if (q == 2)
    
    {
      
 
cout << h << win << endl;
      
 
match4 = h;
    
 
}
  
cout << "Match 5: Team " << j << " vs " << k << "=>  ";
  
r = 1 + rand () % 2;
  
 
srand (time (0));
  
 
if (r == 1)
    
    {
      
 
cout << j << win << endl;
      
 
match5 = j;
    
 
}
  
 
if (r == 2)
    
    {
      
 
cout << k << win << endl;
      
 
match5 = k;
    
 
}
  
cout << "Match 6: Team " << l << " vs " << m << "=>  ";
  
s = 1 + rand () % 2;
  
 
srand (time (0));
  
 
if (s == 1)
    
    {
      
 
cout << l << win << endl;
      
 
match6 = l;
    
 
}
  
 
if (s == 2)
    
    {
      
 
cout << m << win << endl;
      
 
match6 = m;
    
 
}

// Round two ....
  
cout << "Round Two:" << endl;
  
cout << "Match 7: Team " << match1 << " vs " << match2 << "=>  ";
  
t = 1 + rand () % 2;
  
 
srand (time (0));
  
 
if (t == 1)
    
    {
      
 
cout << match1 << win << endl;
      
 
teama = match1;
    
 
}
  
 
if (t == 2)
    
    {
      
 
cout << match2 << win << endl;
      
 
teama = match2;
    
 
}
  
cout << "Match 8: Team " << match3 << " vs " << match4 << "=>  ";
  
u = 1 + rand () % 2;
  
 
srand (time (0));
  
 
if (u == 1)
    
    {
      
 
cout << match3 << win << endl;
      
 
teamb = match3;
    
 
}
  
 
if (u == 2)
    
    {
      
 
cout << match4 << win << endl;
      
 
teamb = match4;
    
 
}
  
cout << "Match 9: Team " << match5 << " vs " << match6 << "=>  ";
  
v = 1 + rand () % 2;
  
 
srand (time (0));
  
 
if (v == 1)
    
    {
      
 
cout << match5 << win << endl;
      
 
teamc = match5;
    
 
}
  
 
if (v == 2)
    
    {
      
 
cout << match6 << win << endl;
      
 
teamc = match6;
    
 
}
  
  // Round Robin is used in this condition.
  
cout << "Round Robin:" << endl;
  
cout << "Match 10: Team " << teama << " vs " << teamb << "=>  ";
  
w = 1 + rand () % 2;
  
 
srand (time (0));
  
 
if (w == 1)
    
    {
      
 
cout << teama << win << endl;
      
 
match7 = teama;
    
 
}
  
 
if (w == 2)
    
    {
      
 
cout << teamb << win << endl;
      
 
match7 = teamb;
    
 
}
  
cout << "Match 11: Team " << teamb << " vs " << teamc << "=>  ";
  
x = 1 + rand () % 2;
  
 
srand (time (0));
  
 
if (x == 1)
    
    {
      
 
cout << teamb << win << endl;
      
 
match8 = teamb;
    
 
}
  
 
if (x == 2)
    
    {
      
 
cout << teamc << win << endl;
      
 
match8 = teamc;
    
 
}
  
cout << "Match 12: Team " << teamc << " vs " << teama << "=>  ";
  
y = 1 + rand () % 2;
  
 
srand (time (0));
  
 
if (y == 1)
    
    {
      
 
cout << teamc << win << endl;
      
 
match9 = teamc;
    
 
}
  
 
if (y == 2)
    
    {
      
 
cout << teama << win << endl;
      
 
match9 = teama;
    
 
}
  
if (match7 == match8 || match7 == match9)
    {
      
cout << match7 << win << " go in finals" << endl;
      
teamf = match7;
    
}
  
if (match9 == match7 || match9 == match8)
    {
      
cout << match9 << win << " in finals" << endl;
      
teamf = match8;
    
}
  
  else if (match7 != match8 && match7 != match9)
    {
      
      // Qualifying team by toss.
z = 1 + rand () % 3;
      
srand (time (0));
      
if (z == 1)
	{
	  
cout << match7 <<
	    " qualified for the final after winning the toss." << endl;
	  
teamf = match7;
	
}
      
if (z == 2)
	{
	  
cout << match8 <<
	    " qualified for the final after winning the toss. " << endl;
	  
teamf = match8;
	
}
      
if (z == 3)
	{
	  
cout << match9 <<
	    " qualified for the final after winning the toss." << endl;
	  
teamf = match9;
	
}
    
}
  
 
if (teamf == teama)
    {
      
cout << "Match 13: Team " << teamb << " vs " << teamc << "=>  ";
      
ab = 1 + rand () % 2;
      
 
srand (time (0));
      
 
if (ab == 1)
	
	{
	  
 
cout << teamb << win << " go to the finals" << endl;
	  
 
teamf2 = teamb;
	
 
}
      
 
if (ab == 2)
	
	{
	  
 
cout << teamc << win << " go to the finals" << endl;
	  
 
teamf2 = teamb;
	
 
}
    
}
  
 
if (teamf == teamb)
    {
      
cout << "Match 13: Team " << teama << " vs " << teamc << "=>  ";
      
bc = 1 + rand () % 2;
      
 
srand (time (0));
      
 
if (bc == 1)
	
	{
	  
 
cout << teama << win << " go to the finals" << endl;
	  
 
teamf2 = teama;
	
 
}
      
 
if (bc == 2)
	
	{
	  
 
cout << teamc << win << " go to the finals" << endl;
	  
 
teamf2 = teamc;
	
 
}
    
}
  
if (teamf == teamc)
    {
      
cout << "Match 13: Team " << teama << " vs " << teamb << "=>  ";
      
cd = 1 + rand () % 2;
      
 
srand (time (0));
      
 
if (cd == 1)
	
	{
	  
 
cout << teama << win << " go to the finals" << endl;
	  
 
teamf2 = teama;
	
 
}
      
 
if (cd == 2)
	
	{
	  
 
cout << teamb << win << " go to the finals" << endl;
	  
 
teamf2 = teamb;
	
 
}
    
}
  
cout << "Final Match:" << endl;
  
cout << "Match 14: Team " << teamf << " vs " << teamf2 << "=>  ";
  
ef = 1 + rand () % 2;
  
 
srand (time (0));
  
 
if (ef == 1)
    
    {
      
 
cout << teamf << win << " and are the champions of the tornament" <<
	endl;
      
 
teamw = teamf;
    
 
}
  
 
if (ef == 2)
    
    {
      
 
cout << teamf2 << win << " and are the champions of the tornament" <<
	endl;
      
 
teamw = teamf2;
    
 
}
  
cout << "Congratulations to " << teamw <<
    " for winning the T20 World Cup 2020.";
  
return 0;

 
}


 

