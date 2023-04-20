#include <iostream>
using namespace std;
// Declaring the functions
int ID(unsigned int a);

int Acc(unsigned int a);

int encryption_a(unsigned a);

int decryption_a(unsigned w);
// we use the unsigned to get the non-negative value.
int main(){int a,b,g,h;
// Taking input from the value
	cout<<"Enter the digits for 16 bits : ";
	cin>>a;
	// Using conditions because of 16 bits limits
	if (a>65535 | a<0){
	cout<<"You have Entered an invalid value : ";}
	else{
	cout<<"Customer ID is : "<<ID(a)<<endl;
	cout<<"Account Number is : "<<Acc(a)<<endl;
	g=encryption_a(a);
	cout<<"Encrypt value is : "<<encryption_a(a)<<endl;
	cout<<"Decrypt value is : "<<decryption_a(g);
	}
	return 0;
	// Extracting the customer ID
}int ID(unsigned int a){
	unsigned int C_ID,p;
	C_ID=(a&65535);
	p=(C_ID>>9);
	return p;
}
// Extracting Account number
int Acc(unsigned int a){
	unsigned int ACC;
	ACC=(a&511);
	return ACC;
}
// Encrypting the value
int encryption_a(unsigned a){
	int c,v,x;
	c=5;
	v=233;
	x=c*(a)+v;
	return x;
}
// Decrypting the encrypted value
int decryption_a(unsigned x){
	int c,v,w;
	c=5;
	v=233;
	w=(x-v)/c;
	return w;
}
