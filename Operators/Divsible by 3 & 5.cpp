#include<iostream>
using namespace std;
int main(){
    int n;
    cout << " Enter the number you think is divisible by 3 and 5 : ";
    cin >> n;
    if(n%3 == 0 && n%5 == 0){
        cout << n << " is divisible by 3 and 5";
    }
    else{
        cout << n << " is not divisible by 3 and 5";
    }
    
}