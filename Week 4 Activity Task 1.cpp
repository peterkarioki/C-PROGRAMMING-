#include<iostream>
using namespace std;
int main(){
	int i;
	string name;
	double basicsalary,bonus,total;
	
	
	
	for(i=1;i<=5;i++){
		cout<<"\n Employee"<<i<<'\n';
		cout<<"Enter employee name:"<<endl;
	      cin>>name;
	        cout<<"Enter basic salary:"<<endl;
	           cin>>basicsalary;
		
		bonus=0.05*basicsalary;
		total=basicsalary+bonus;
		
		cout<<"\n---EMPLOYEE SALARY REPORT---"<<endl;
		cout<<"Employee name"<<name<<endl;
		cout<<"Basic Salary"<<basicsalary<<endl;
		cout<<"Bonus (5%) "<<bonus<<endl;
		cout<<"Total salary:"<<total<<endl;
		cout<<"======================="<<endl;
	}
	
	return 0;
}