
// Part 1

#include <iostream>
#include <cmath>
using namespace std; 

long double calcTerm (long double angle , long double num);
long double sumTerms (long double y);
long double testFunction (long double b);
int main()
{
        long double angle, turns;
        long double input ;

        cout << "++++++Please enter the angle:++++++ " <<endl;
        cin >> angle ;
        cout << "++++++Please enter the number of terms:++++++ "<<endl ;
        cin >> turns ;

        for(int i = 1 ; i<=turns ; i++)
        {
           input = calcTerm(angle,i) ;
           sumTerms(input) ;
        }

        cout << "++++++Output  =++++++ " <<endl;
		cout<< sumTerms(input) ;
        cout <<endl;
		cout<< "++++++Testing Output =++++++ " <<endl;
		cout<< testFunction(angle) ;

        return 0;
}

long double calcTerm(long double angle , long double i)
{
        const long double pi = 3.14159 ;
        angle = angle * (pi / 180.0);
        long double input ;
        long double sign = 1, fact = 1, exp = 1, res=1;
        
        for (int j = 1; j < i ; j++) 
        {
            sign = sign * -1;
            fact = fact * (2 * j - 1) * (2 * j);
            exp = exp * angle * angle;
            res = res + sign * exp / fact ;
        }
        
        return res ;
}

long double sumTerms(long double input)
{
        long double sum =0;
        sum += input ;
        
        return sum;
}

long double testFunction(long double angle)
{
        long double input1 = angle*(3.14159/180);
        return cos(input1);
}
