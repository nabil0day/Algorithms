//Binary Search
                  

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

const int MAX= 100010;

int main()
{
    
     int n,k,i,j;
     //vector<int>a(MAX);
      int a[MAX];

      cin >> n >> k; //User Input
     

    for(int i=0;i<n;i++)
        {
          cout<<"Enter All The Elements: ";
    	   cin >> a[i];
        }

    sort(a,a+n);

    for(int i=0;i<k;i++)
       {
    	  int q;

    	  cin >> q;

    	  int l=0, r=n-1;

    bool ok=0;

    	while(l<=r)
    	{
    		int mid=(l+r)/2;

            if(a[mid]==q)
             
              {
            	ok=1;

            	break;
              }

            else if(a[mid]>q)

            	r = mid - 1;

            else

            	l = mid + 1;
    	}

    	if(ok) 

            cout << "YES! Number Found" << "\n";

    	else
          
            cout << "OPPS! Number Not Found" << "\n";
    }



 return 0;
 
}
