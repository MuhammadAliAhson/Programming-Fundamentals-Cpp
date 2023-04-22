
// Part 4

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int
main ()
{
  int a = 0, b = 0, c = 0, x = 0, n = 0, y = 0;
  cout << "Enter the value of x and n respectively" << endl;
  cin >> x >> n;
  cout<<endl<<endl<<endl;
  for (int q = x; q >= 0; q--)
    {
      y = pow (q, n) + pow (q, n - 1);
      cout<<y;
      for(int h=y/2;h>=0;h--){
          cout<<" ";
      }
      cout<<"*"<<endl<<endl;

} for (int q = 0; q <= x; q++)
    {
      y = pow (q, n) + pow (q, n - 1);
    
      for(int h=n;h>0;h--){
          cout<<setw(q/2)<<" ";
  }
        cout<<q;  

}
  return 0;
}

