#include <iostream>
using namespace std;

int main(void) {
	int T;
	cin>>T;
	while(T--)
	{
	    int num,sum=0,r;
	    cin>>num;
	    while(num>0)
	    {
	        r=num%10;
	        sum=sum+r;
	        num=num/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
