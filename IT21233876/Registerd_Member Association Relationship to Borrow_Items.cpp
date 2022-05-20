#include<iostream>
#include<cstring>

using namespace std;

class Registered_member;
class Borrow_items;

//borrow items class

class Borrow_items
{
	private:
		char date[20];
		char status[50];
		Registered_member *registered_member[2];
		
	public:
		Borrow_Items()
		{
			
		};
		Borrow_Items(const char bDate[],const char bStatus[])
		{
			strcpy(date, bDate);
			strcpy(status,bStatus);
		};
		addBorrowingDetails()
		{
			
		};
		
		~Borrow_items()
		{
			cout<<"Boorow Items destructer called!!"<<endl;
		};
};

class Registered_Member
{
	private:
		int rID;
		char rName[20];
	 	char rEmail[20];
	  	int rTellNo;
	  	Borrow_items *borrow_items;
	public:
		Registered_Member()
		{
			
		};
		editProfile()
		{
			
		};
		viewBooks()
		{
			
		};
		Registered_Member(int id,const char name[],const char email[] ,int no,Borrow_items *pItrm)
		{
			rID = id;
			strcpy(rName,name);
			strcpy(rEmail,email);
			rTellNo = no;
			borrow_items = pItrm;
		};
		~Registered_Member()
		{
			cout<<"Registered Member destructer called!!"<<endl;
		};
};

int main(void)
{
	Borrow_items *borrow_items1 = new Borrow_items("01/02/2001","Good");
	Borrow_items *borrow_items2 = new Borrow_items("10/15/2002","To Good");
	
	
	Registered_Member *registered_member1 = new Registered_Member(001,"Sahan","sahan123@gmail.com",0701117153,borrow_items1);
	Registered_Member *registered_member2 = new Registered_Member(002,"lahiranga","lahiranga123@gmail.com",0701117154,borrow_items2);
	
	delete borrow_items1;
	delete borrow_items2;
	
	delete registered_member1;
	delete registered_member2;
	return 0;
	
	
	
	
}

