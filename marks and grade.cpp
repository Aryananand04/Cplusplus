#include<iostream>
using namespace std;
int main()
{
   int n;
   cout << "Enter your marks : ";
   cin >> n;
   if(n > 100 || n < 0)
   {
    cout << "Invalid Input , Enter your real marks kiddo !";
   }
   else if(n >= 80 && n <= 100)
   {
       cout << "Grade A";
   }
   else if(n >= 60)
   {
       cout << "Grade B";
   }
   else if(n >= 40)
   {
       cout << "Grade C";
   }
   else
   {
       cout << "Grade D";
   }
}