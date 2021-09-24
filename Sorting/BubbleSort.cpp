//Bubble Sort
                  

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

    for(int i=0;i<n;i++)
    {
        for(int j =0;j<n-1;j++)
         {
            if(v[j]>v[j+1])
              swap(v[j],v[j+1]);
         }
        cout<<"After "<< i+1 <<" Times Swapping Array Elements Are :\n";
        for(j =0;j<n;j++)
           cout<<v[j]<<" \n";
       
   }
}
