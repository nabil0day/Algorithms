// Insertion Sort


#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

const int MAX= 100010;

int main()
{
   int Gap,n,j;
   vector<int>v(MAX);
   cout<<"Number Of The Array Elements :\n";
   cin>>n;
   cout<<"Enter The Elements :\n";
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }

   for(int i=1;i<n;i++)
   {
       Gap=v[i];
       j = i-1;
       while(j>=0 && v[j]>Gap)
       {
           v[j+1]=v[j];
           j--;
       }
       v[j+1]=Gap;

       cout<<"After "<< i << " Times Sorting: \n";
       for(int j =0;j<n;j++)
           cout<<v[j]<<" \n";
       



   }

}
