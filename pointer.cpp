#include<iostream>
using namespace std;

//you are making a software for bank//
class Client
{
	private:
		int creditcardnumber;
	
		int cvv;
		int password;
		int user_name;
		public:
		
		string name;
		//we use public functaions to set private data.
		void set_creditcardnumber(int number)
		{
		
			this->creditcardnumber=number;
			
		}
		void getcreditcardnumber()
		{
			cout<<"the credit card number"<<creditcardnumber;
			
		}
		//we use get function sto get data
		//we use set funnctions to set data
		void setallinstancesatonce(int number,int username,int pass)
		{
			this->creditcardnumber=number;
			this->name=name;
		this->password=pass;
		}
         
};
int main()
{
	Client a;
	a.name="Rohit";
	a.set_creditcardnumber(56);
	
	cout<<"The addredd of this obj "<<&a<<endl;
	return 0;

}
