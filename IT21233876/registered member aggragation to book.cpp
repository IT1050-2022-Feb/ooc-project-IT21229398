#include<iostream>
#include<cstring>

using namespace std;

class Registered_member;
class Books;

//Books class

class Books
{
	private:
		char bookId[10];
		char bookName[20];
		Registered_member *registered_member[3];
		
	public:
		Books()
		{
			
		};
		Books(const char bkId[],const char bkName[])
		{
			strcpy(bookId,bkId);
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
			cout<<"Books Destructer called!!"<<endl;
		};
	
};

class Registered_member
{
	private:
		char rID[10];
		char rName[20];
		char rEmail[30];
	    char rTellNo[20];
	    Books *books;
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
		Registered_Member(const char id[],const char name[], const char email[] ,const char no[],Books *pBook)
		{
			strcpy(rID,id);
			strcpy(rName,name);
			strcpy(rEmail,email);
			strcpy(rTellNo,no);
			books = pBook;
	    };
	    ~Registered_member()
	    {
	    	cout<<"Registered_Member Destructer called!!"<<endl;
		};
};

int main(void)
{
	Books *books1 = new Books("001","Madolduwa");
	Books *books2 = new Books("002","Laila");
	
	Registered_member *registered_member1 = new Registered_member("003","vidura","vidura123@gmail.com","071821727",books1);
	Registered_member *registered_member2 = new Registered_member("004","venura","venura321@gmail.com","071845727",books2);
	
	return 0;
}
