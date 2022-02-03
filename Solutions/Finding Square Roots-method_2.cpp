//2nd method 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin>>T;
	while (T--)
	{
	    int x;
	    cin>>x;
	    if (x==0 || x==1)
	    std::cout << x << std::endl;
	    else{
	        int i=1,result=1;
	        while(result<=x)
	        {
	            i++;
	            result=i*i;
	        }
	        cout<<i-1<<endl;
	    }
	}
	return 0;
}
