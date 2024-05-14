#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin>> n;
    if(n > 99 && n < 1000){
        cout << "The number is three digits . i.e "<< n;
    }
    else{
        cout << "The number is not three digits . i.e "<< n;
    }
}