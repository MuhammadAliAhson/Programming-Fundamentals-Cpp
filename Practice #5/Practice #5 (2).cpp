
#include <iostream>

using namespace std;

int main()
{ char d;
    do{ 
        int n=0,m=0;
        long int ddays=0,pdays=0;
    int tamount,instal,da[50],pa[50],dd[50],pd[50],days=0,dayspel=0,balance,dueamount=0,paidamount=0,penalty=0,tbalance=0;
  float percentage=0;
    cout<<"Please Enter the Amount you Want to take loan :";
    cin>>tamount;
    cout<<"Enter the number of Installments you want :";
    cin>>instal;
    
   for(int i=0;da[i]!=0;i++){
        cout<<endl;
        
       cout<<i+1<<"  Due Amount: ";
       cin>>da[i];
     dueamount=dueamount+da[i];
       if(da[i]==0){
           break;
       }
   cout<<"  Due Date : ";
   cout<<endl<<"Enter Day : ";
   cin>>dd[n];
   cout<<endl<<"Enter Month : "; 
   cin>>dd[n+1];
   cout<<endl<<"Enter Year : ";
   cin>>dd[n+2];
       cout<<" Paid Amount : ";
       cin>>pa[i];
        cout<<" Paid Date : ";
        cout<<endl<<"Enter Day : ";
        cin>>pd[m];
        cout<<endl<<"Enter Month : "; 
        cin>>pd[m+1];
        cout<<endl<<"Enter Year : ";
        cin>>pd[m+2];
       paidamount=paidamount+pa[i];
       n=n+3;
        m=m+3;
       }
       n=0;m=0;
	   cout<<endl<<endl<<endl<<endl<<endl;
       cout<<"Loan Amout :       "<<tamount<<"                          No of Installments:        "<<instal<<endl;
       cout<<"SNO"<<"    "<<"Due Amount "<<" Due Date "<<" PaidAmount "<<" PaidDate "<<"        No of Days "<<" Penalty "<<" Balence ";
         for(int i=0;da[i]!=0;i++){
             cout<<endl;
        days=0;
           dayspel=0;
           balance=0;
           percentage=0;
           cout<<i+1<<"   |   "<<da[i]<<"   |  "<<dd[n]<<"/"<<dd[n+1]<<"/"<<dd[n+2]<<"   |   "<<pa[i]<<"  |  "<<pd[m]<<"/"<<pd[m+1]<<"/"<<pd[m+2]<<"      |      ";
          ddays=((dd[n])+((dd[n+1])*30)+((dd[n+2])*365));
          pdays=((pd[n])+((pd[n+1])*30)+((pd[n+2])*365));
           if(ddays<pdays){
          
           days=pdays-ddays;
           dayspel=days*100;
           cout<<days;
       }else if(ddays>pdays || ddays==pdays){
           cout<<"0";
       }
       if(da[i]>pa[i]){
           percentage=da[i]*0.05;
           cout<<"    |    "<<percentage+dayspel<<"   |  ";
           penalty=penalty+(percentage+dayspel);
           balance=da[i]-pa[i];
           cout<<balance;
           tbalance=tbalance+balance;
       }else if(da[i]==pa[i]){
           cout<<"    |     "<<"0"<<"    |    "<<"0";
       }
       else{
       cout<<"0"<<"    |    "<<"0"<<"    |    "<<"0";
       }
   n=n+3;
   m=m+3;
   
         }
        cout<<endl<<"Total |  "<<dueamount<<"                 | "<<paidamount<<"           |          "<<penalty<<"    |   "<<tbalance;
        cout<<endl<<"Charges   "<<5000+penalty;
        cout<<endl<<"Do you want to continue enter Y ";
        cin>>d;
        }while(d=='Y');
    return 0;
}

