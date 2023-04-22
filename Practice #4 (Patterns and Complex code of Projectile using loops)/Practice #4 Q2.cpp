
// Part 2



#include <iostream>
#include <conio.h>
using namespace std;
int add();
int sub();
int mul();
int div();
int add(int num1,int num2){
	int f;
	for(;num2>0;){
		f =num1 & num2;
		num1=num1^num2;
		num2=f<<1;
		
	}
	cout<<"After addition  ; " << num1;
	 cout<<endl;
}
int sub(int num1, int num2){
	int f;
	while(num2 > 0){
		// use of negation to change the number in binary to use it as subtraction
					f =(~num1) & num2;
		num1=num1^num2;
		num2=f<<1;
		
	}
	cout<<"Subtraction  :  "<<num1;
cout<<endl;

}
int mul(int num1, int num2){
	
	
}


int main()
{
	int num1,num2;
   cout<<"Enter two digits ; ";
   cin>>num1>>num2;
    add(num1, num2);
    sub(num1,num2);
   //mul(num1,num2);
   //div(num1,num2);
    return 0;
}

