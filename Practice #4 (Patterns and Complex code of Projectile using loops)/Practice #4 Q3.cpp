#include <iostream>
using namespace std;
int checkPerfectNumber(int i);
int main(){
int x;
cout<<"Enter a integer :";
cin>>x;
for(int i=2;i<=x;i++){
checkPerfectNumber(i);
}
return 0;
}
int checkPerfectNumber(int i)
{
int a,b=0,c;
for(int j=1;j<i;j++){
if(i%j==0)
b=b+j;
}
if(b==i)
cout<<i<<endl;
return 0;
}

