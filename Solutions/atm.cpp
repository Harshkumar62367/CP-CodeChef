#include <iostream>
using namespace std;

int main() {
	int money_wth;
	float acc_money;
	cin>>money_wth;
	cin>>acc_money;
	if (money_wth%5==0 && acc_money>=(money_wth+0.50))
	{
	    
	cout<<(acc_money - money_wth - 0.50)<<endl;
	}
	else
	{
	    cout<<float(acc_money)<<endl;
	}
	return 0;
}
