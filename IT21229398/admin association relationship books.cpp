#include<iostream>
#include<cstring>

using namespace std;

class Books;
class Admin;

//Books class

#include<string>
#include<iostream>
#include<cstring>

using namespace std;

//Implement Books class

class Books
{
	private:
		int bookId;
		char bookName[50];
		Admin *admin[3];
		
	public:
		Books()
		{
			
		};
		Books(int bkId,char bkName[])
		{
			bookId=bkId;
			strcpy(bookName,bkName);
		};
		displayBooks()
		{
				
		};
		viewBooks()
		{
				
		};
		~Books()
		{
			cout<<"Books destructer called!"<<endl;
		};
		
};

class Admin
{
	private:
		int adminId;
		char adminName[20];
		char adminPassword[30];
		Books *books;
		
	public:
		Admin()
		{
			
		};
		Admin(int aId,char aName[],char aPassword[])
		{
			adminId=aId;
			strcpy(adminName,aName);
			strcpy(adminPassword,aPassword);
		};
		addNewBooks()
		{
			
		};
		removeBooks()
		{
			
		};
		~Admin()
		{
			cout<<"ADmin Destructer Called!!"<<endl;
		};
		
			
};

int main(void)
{
	Books *book1 = new Books(001,"One Hundred Years of Solitude");
	Books *book2 = new Books(002,"One Thoused Years of Solitude");
	
	Admin *ad1 = new Admin(003,"sahan","sahan123");
	Admin *ad2 = new Admin(004,"bandara","bandara123");
	
	delete book1;
	delete book2;
	
	delete ad1;
	delete ad2;
	return 0;
	
}
