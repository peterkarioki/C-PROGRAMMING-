#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	string name;
	double balance,withdrawal;
	
	cout<<"Enter account balance:"<<endl;
	cin>>balance;
	
	while(balance>0){
		cout<<"Current balance:"<<balance<<endl;
		cout<<"Enter amount to withdraw:";
		cin>>withdrawal;
		
		if(withdrawal<=0){
			cout<<"Enter a withdrawal amount greater than zero.\n";
			continue;}
		
		if(withdrawal>balance){
			cout<<"Insufficient balance. Transaction stopped.\n";
			break;
	          }
	
		balance-=withdrawal;
		cout<<"Withdrwal successful.\n";
		cout<<"Remaining balance:"<<balance<<'\n';
	}
	if(balance==0)
		cout<<"Your balance is zero. The system has stopped.\n";
	return 0;
}