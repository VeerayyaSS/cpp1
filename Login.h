#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Login{
	   private:
		string user_name,password;

	public:
		Login(string uname,string pwd)
		{
			user_name=uname;
			password=pwd;
		}
		string getUname() {return user_name;}
		string getPassword() {return password;}
		void setUsername( string uname){ user_name=uname;}
		void setPassword(string pwd){ password=pwd;}

	protected:

		void log(){
			cout<<"\nenter the user name: "<<endl;																	cin>>user_name;
																							        if(user_name=="veeru"){
																									cout<<"\nenter the password: "<<endl;
																									cin>>password;
																									{
																									if(password=="CG8991"){
																										cout<<"\nLogged In";
																																										                                      }
																				                                      else{
																										 cout<<"\nInvalide password ";																																	                                      	}																			      	 }
																								}																					else{
																									 cout<<"\nyou entered Invalide username and password"<<endl;
																					                      }
																					              }
};
