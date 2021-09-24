//Find Factorial Of a Number Using Recursion

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

const int MAX= 100010;


int factorialUsingRecursion(int n)
{
    if(n>1)
        return n*factorialUsingRecursion(n-1);
    else
        return 1;
}

int main()
{
   int n;
   cout<<"Enter The Number :";
   cin>>n;
   //vector<int>v(n);
   cout<<"Factorial is "<<factorialUsingRecursion(n);
   //cout<<
   return 0;
}
   
