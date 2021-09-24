/*                       Author : Hadiur Rahman Nabil
                         ID     : 20-42095-1
                         Course : Algorithms [L]
*/
                  

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

const int MAX= 100010;

int main()
{
    int minimum,n,j,i;
    vector<int>v(MAX);
    cout<<"Number Of The Array Elements :\n";
    cin>>n;
    cout<<"Enter The Elements :\n";
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
    }
    for(int i=0;i<n-1;i++)
    {
         minimum = i;
         for(int j =i+1;j<n;j++)
         {
            if(v[j]<v[minimum])
             {
               minimum = j;
             }
         }
         if(minimum!=i)
          {
            swap(v[i],v[minimum]);
          }

          cout<<"After "<< i+1 <<" Times Swapping Array Elements Are :\n";
          for(int j =0;j<n;j++)
               cout<<v[j]<<" \n";
       
   }
}