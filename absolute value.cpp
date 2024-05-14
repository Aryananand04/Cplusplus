#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
//     if(n > 0){
//         cout<< n ;
//     }
//     else{
//         cout<< -n ;
//     }
// }

// if you want to change the VALUE of n and not just print absolute value :

if (n<0){
    n = -n;
    cout<<n;
}
}