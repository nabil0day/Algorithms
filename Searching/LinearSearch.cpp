//Linear Search

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

const int MAX= 100010;

int main()
{
   int Number,n,j,algo=0,Position;
   cout<<"Number Of The Array Elements :\n";
   cin>>n;
   vector<int>v(n);
   cout<<"Enter The Elements :\n";
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }
   cout<<"Enter The Number To Search : \n";
   cin>>Number;
   for(int i=0;i<n;i++)
   {
       if(v[i]==Number)
       {
       algo=1;
       Position=i+1;
       break;
       }
   }
   if(algo==0)
   {
       cout<<"Opps! Number Not Found\n";
   }
   else 
   {
       cout<<"YES! Found At Position "<<Position<<"\n";
   }
}
