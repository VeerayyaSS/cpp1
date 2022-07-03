#include<iostream>
#include"Bankacc.h"
#include"Login.h"

using namespace std;

class User: public Bank,public Login{

		private:
			int cell_num;
		public:

			User(std::string name,std::string type,int num,int bal,string uname,string pwd,int clnum):Bank(name,type,num,bal),Login(uname,pwd)
																					                          {                                                                                                                                                                         cell_num=clnum;                                                                                                                                                       }
		
		int getcellnum(){ return cell_num;}
		void setcellnum(int clnum){ cell_num=clnum;}
		void dispuserdet();
};

