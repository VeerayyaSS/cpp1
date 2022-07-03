#include<iostream>
#include"Bankuser.h"
#include"Login.h"
#include"Bankacc.h"


using namespace std;
int main()
{
	User  U("veeru","Sav",12345,10000,"veeru98","CG8991",123);
	U.dispuserdet();

	   fstream f1;
	   f1.open("Bank.dat",ios::in|ios::app);
	   if(!f1){
		cout<<"file not found";
		}
	   else{
		string data;
		while(!f1.eof())
	  	{
			f1>>data;
			cout<<data;
		}
					         
	f1.close();
	}
	
//	User U("veeru","Sav",12345,10000,"veeru98","CG8991",123);
//	U.dispuserdet();

	return 0;
}
