#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the cost price ; ";
    cin>>cp;
    int sp;
    cout<<"Enter the selling price ; ";
    cin>>sp;
    if(sp > cp ){
        cout << "Profit made is "<<sp - cp;
    }
    else if (sp == cp)
    {
        cout << "No profit or loss ";
    }
    else{
        cout << "Loss made is "<< cp - sp;
    }
    
}