#include<iostream>
#include<cstring>

using namespace std;

//Implement Books class

class Books
{
	private:
		int bookId;
		char bookName[50];
		
	public:
		Books(int bkId,const char bkName[])
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
			cout<<"Books deleted:"<<bookId<<endl;
		};
		
		
};

class borrow_Items
{
	private:
		char date[20];
		char status[50];
		Books * books[3];
		
	public:
		borrow_Items()
		{
			books[0] = new Books(001,"A room without books is like a body without a soul");
			books[1] = new Books(002,"Take a good book to bed with you—books do not snore");
			books[2] = new Books(003,"Outside of a dog, a book is a man's best friend");
		};
		borrow_Items(const char bDate[],const char bStatus[])
		{
			strcpy(date,bDate);
			strcpy(status,bStatus);
		};
		addBorrowingDetails()
		{
			
		};
		~borrow_Items()
		{
			cout<<"Delete Books Items"<<endl;
				for(int x = 0; x < 3; x++){
				delete books[x];
			}
		}
			
		
			
};

int main(void){
	
	borrow_Items * books1 = new borrow_Items();
	
	delete books1;
	
	return 0;
}
