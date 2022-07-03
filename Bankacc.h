#include<iostream>
#include<string>
#include<cstring>
#include<fstream>

using namespace std;

class Bank{
	private:
		
		string acctype,acchname;
		int accnum;
		int balance;

	public:
		Bank(std::string name , std::string type , int num,int bal)  //parameterized conetructor
		{
			
			acctype=type;
			acchname=name;
			accnum = num;
			balance = bal;
		}
		int getAccnum(){ return accnum; }
		string getAcctype(){ return acctype;}
		string getAcchname(){ return acchname;}
		int getBalance(){ return balance;}
		void setvalues(std::string name,std::string type,int num,int bal){
			acchname=name;
			acctype=type;
			accnum=num;
			balance=bal;
		}

	protected:
		void display(){
			cout<<"\n Name : "<<acchname;
			cout<<"\n Account Number : "<<accnum;
			cout<<"\n Account type : "<<acctype;
			cout<<"\n Balance : "<<balance;
		}

};









