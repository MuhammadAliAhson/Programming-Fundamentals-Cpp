
// Part 6




#include <iostream>
using namespace std;
int main(){
    int n,w=0,rooms=0,oc_rooms=0,d=0;
    float o;
    cout<<"Enter the number of floors the hotel have : "<<endl;
    cin>>n;
    if(n>=1){
    for(n;n>0;n--){
    
            cout<<"Enter the number  of rooms at "<<n<<" floor. ";
            cin>>w;
            if(w>=10){
            rooms=rooms+w;
            cout<<endl;
            cout<<"Enter the number of occupied rooms at "<<n<<" floor. ";
            cin>>d;
            oc_rooms=oc_rooms+d;
            cout<<endl;
        }
        else{
        	cout<<"Invalid input for the rooms "<<endl;
		break;}
    }
    if(w>=10){
    cout<<"Total rooms "<<rooms<<endl;
    cout<<"Occupied rooms "<<oc_rooms<<endl;
    cout<<"Unoccupied rooms "<<rooms-oc_rooms<<endl;
    o=(oc_rooms/rooms);
    cout<<"The percentage of rooms that are occupied "<<o*100<<"%"<<endl;
}
 }
else {
	cout<<"Invalid input."<<endl;
}
    return 0;
}
