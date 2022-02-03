#include <iostream>
using namespace std;
int main(void) {
	// your code goes here
	int T;
	cin>>T;
	while (T--)
	{
	    int a[3];
	    for (int i=0;i<3;i++)
	    {
	        cin>>a[i];
	    }
	
	    for(int i=1;i<3;i++)
	    {
	        if(a[0]<a[i])
	        {
	           int temp=a[0];
	            a[0]=a[i];
	            a[i]=temp;
	        }
	    }
	    if (a[1]>a[2])
	    {
	        cout<<a[1]<<endl;
	    }
	    else
	    {
	        cout<<a[2]<<endl;
	    }
	    
	}
	return 0;
}
