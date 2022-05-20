#include<iostream>
#include<cstring>

using namespace std;

//Implement Registered Member class

class Registered_Member
{
private:
	char rID[10];
	char rName[20];
	char rEmail[20];
	int rTellNo;
public:
	Registered_Member(){
			
	};
	EditProfile(){
		
	};
	ViewBooks(){
		
	};
	Registered_Member(const char id[],const char email[],const char name[],int no)
	{
		strcpy(rID,id);
		strcpy(rName,name);
		strcpy(rEmail,email);
		rTellNo = no;
	};
	
	~Registered_Member(){
		cout<<" Regidtered Member Destructor called!!"<<endl;	
	};
};

class payment
{
	private:
		char payId;
		char payMethod[20];
		float amount;
		Registered_Member *regMember[2];
		
	public:
		payment(){
			regMember[0] = new Registered_Member("001","Beesara","beesara@gmail.com",0771234567);
			regMember[1] = new Registered_Member("002","Sahan","sahan@gmail.com",0711234567);

		};
		payment(int pId,const char pMethod[], float pAmount)
		{
			payId=pId;
			strcpy(payMethod,pMethod);
			amount=pAmount;
		};
		getPayment(){
			
		};
		~payment(){
			cout<<" Payment Destructor Called!!"<<endl;
		};
};

int main(void)
{
	payment *pay1 = new payment();
	
	delete pay1;
	
	Registered_Member *reg1 = new Registered_Member("001","Beesara","beesara@gmail.com",0771234567);
	Registered_Member *reg2 = new Registered_Member("002","Sahan","sahan@gmail.com",0711234567);
	
	delete reg1;
	delete reg2;
	
	return 0;

}


