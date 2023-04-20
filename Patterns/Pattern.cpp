#include <iostream>
using namespace std;
void pattern1(){	
    int q = 0;
    cout<<"Part A "<<endl;

  while ( q < 6 )
    {
        int g = 0;
      while ( g < q )
	{
	  cout << "\\\\";
	  g++;
	}
	int r = 0; 
      while (r < 2)
	{
	    int w = 12;
	  while ( w / 2 > q)
	    {
	      cout << "!";
	      w--;
	    } r++;
      }
      g = 0;
      while ( g < q)
	{
	  cout << "//";
	  g++;
	}
      cout << endl;
      q++;
    }



    
}
void pattern2(){
    cout<<endl<<endl<<endl<<"Part B  "<<endl;
  for (int q = 7; q > 0; q--)
    {
      for (int g = 0; g < q - 1; g++)
	{
	  cout << "*";
	}
      for (int w = 7; w > q - 1; w--)
	{
	  cout << " ";
	}
      for (int g = 0; g < q - 1; g++)
	{
	  cout << "//";
	}
      for (int g = 7; g > q; g--)
	{
	  cout << "\\\\";
	}
      for (int w = 7; w > q - 1; w--)
	{
	  cout << " ";
	}
      for (int g = 0; g < q - 1; g++)
	{
	  cout << "*";
	}
      cout  << endl;
    }
}
void pattern3(){
    cout<<endl<<endl<<"Part C "<<endl;
  int na = 1, ma = 1;
  for (int q = 9; q > 0; q--)
    {
      for (int w = 0; w < q - 1; w++)
	{
	  cout << "  ";
	}
      for (int g = 0; g < 1; g++)
	{
	  na = 1;

	  for (int y = q; y <= 9; y++)
	    {

	      cout <<" "<< na;
	      na++;
	    }
	  for (int y = na - 2; y > 0; y--)
	    {

	      cout <<" "<< y;
	      ma++;

	    }
	  ma--;
	}



      cout << endl;

    }
  for (int q = 9; q > 0; q--)
    {
      for (int w = 9; w > q - 1; w--)
	{
	  cout << "  ";
	}
      for (int g = 0; g < 1; g++)
	{
	  na = 1;

	  for (int y = q - 1; y > 0; y--)
	    {

	      cout << " "<<na;
	      na++;
	    }

	  cout << endl;
    }}
}
void pattern4(){
    cout<<endl<<endl<<endl<<"Part D"<<endl;



 for(int a=5;a>0;a--){
        for(int b=0;b<a;b++){
            cout<<" ";
        }
        for(int q=5;q>=a;q--){
            cout<<"/";
        }
        for(int e=0;e<2;e++){
            cout<<"*";
        }for(int q=5;q>=a;q--){
            cout<<"\\";
        }
    cout<<endl;
       
        } cout<<"+";
        for(int q=5;q>=0;q--){
            cout<<"_*";
    }
    cout<<"+"<<endl;
    cout<<"|";
    for(int g=0;g<2;g++){
        cout<<"__/";
        cout<<"\\__";
    }cout<<"|";
    cout<<endl;
    cout<<"|";
    
    for(int g=0;g<2;g++){
        cout<<"_/\\";
        cout<<"/\\_";
    }cout<<"|";
    cout<<endl;
    cout<<"|";
    
    for(int g=0;g<3;g++){
        cout<<"/\\";
        cout<<"/\\";
    }cout<<"|";
cout<<endl;
    cout<<"|";
    
    for(int g=0;g<6;g++){
        cout<<"\\";
        cout<<"/";
    }cout<<"|";
    cout<<endl;
    cout<<"|";
    
    for(int g=0;g<2;g++){
        cout<<"_\\/";
        cout<<"\\/_";
    }cout<<"|";
    cout<<endl;
    cout<<"|";
    
    for(int g=0;g<2;g++){
        cout<<"__\\";
        cout<<"/__";
    }cout<<"|";
    cout<<endl;
       
         cout<<"+";
        for(int q=5;q>=0;q--){
            cout<<"_*";
    }         cout<<"+";
    cout<<endl;
    cout<<"|";
    
    for(int g=0;g<6;g++){
        cout<<"\\";
        cout<<"/";
    }cout<<"|";
    cout<<endl;
    cout<<"|";
    
    for(int g=0;g<2;g++){
        cout<<"_\\/";
        cout<<"\\/_";
    }cout<<"|";
    cout<<endl;
    cout<<"|";
    
    for(int g=0;g<2;g++){
        cout<<"__\\";
        cout<<"/__";
    }cout<<"|";
    cout<<endl;
    cout<<"|";
    for(int g=0;g<2;g++){
        cout<<"__/";
        cout<<"\\__";
    }cout<<"|";
    cout<<endl;
    cout<<"|";
    
    for(int g=0;g<2;g++){
        cout<<"_/\\";
        cout<<"/\\_";
    }cout<<"|";
    cout<<endl;
    cout<<"|";
    
    for(int g=0;g<3;g++){
        cout<<"/\\";
        cout<<"/\\";
    }cout<<"|";
cout<<endl;
    cout<<"+";
        for(int q=5;q>=0;q--){
            cout<<"_*";
    }
    cout<<"+"<<endl;
    for(int a=5;a>0;a--){
        for(int b=0;b<a;b++){
            cout<<" ";
        }
        for(int q=5;q>=a;q--){
            cout<<"/";
        }
        for(int e=0;e<2;e++){
            cout<<"*";
        }for(int q=5;q>=a;q--){
            cout<<"\\";
        }
    cout<<endl;
       
        }
   
}
void pattern5(){
    cout<<endl<<endl<<endl<<"Part E"<<endl;
for(int q=1;q>0;q--){
    for(int w=0;w<25;w++){
        cout<<" ";
    }
    
    for(int e=7;e>0;e--){
        cout<<"*";
    }
    
cout<<endl;
    for(int w=0;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }for(int w=20;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
        cout<<endl;
    }for(int w=0;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }for(int w=20;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }cout<<endl;
    for(int w=6;w<25;w++){
        cout<<" ";
    }for(int e=7;e>0;e--){
        cout<<"*";
    }for(int w=20;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }cout<<endl;
    for(int w=6;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }for(int w=14;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }cout<<endl;
    for(int w=6;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }for(int w=14;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }cout<<endl;
    for(int w=12;w<25;w++){
        cout<<" ";
    }for(int e=7;e>0;e--){
        cout<<"*";
    }for(int w=14;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }cout<<endl;
    for(int w=12;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }for(int w=8;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }cout<<endl;
    for(int w=12;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }for(int w=8;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }cout<<endl;
    for(int w=18;w<25;w++){
        cout<<" ";
    }for(int e=7;e>0;e--){
        cout<<"*";
    }for(int w=8;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }cout<<endl;
    for(int w=18;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }for(int w=2;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }cout<<endl;
    for(int w=18;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }for(int w=2;w<25;w++){
        cout<<" ";
    }for(int e=1;e>0;e--){
        cout<<"*";
    }cout<<endl;
    for(int t=0;t<32;t++){
    	cout<<"*";
	}
    
}

}
int
main ()
{
	
pattern1();
pattern2();
pattern3();
pattern4();
pattern5();

  return 0;
}

