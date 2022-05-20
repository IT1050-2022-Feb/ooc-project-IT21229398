#include<iostream>
#include<cstring>

using namespace std;

//Implement Reference Items class

class Reference_Items
{
	private:
		char rItemname[20];
		int rItemId;
		
	public:
		Reference_Items()
		{
			
		};
		Reference_Items(char rName[],int rId)
		{
			strcpy(rItemname,rName);
			rItemId=rId;
		};
		updateItem()
		{
			
		};
		addItem()
		{
			
		};
		~Reference_Items()
		{
			cout<<"Reference Items Deleted"<<rItemId<<endl;
		};
};

class borrow_Items
{
	private:
		char date[20];
		char status[50];
		Reference_Items * reference_Items[3];
		
	public:
		borrow_Items()
		{
			reference_Items[0] = new Reference_Items(" eBooks",001);
			reference_Items[1] = new Reference_Items("journal articles",002);
			reference_Items[2] = new Reference_Items("webpages",003);
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
			cout<<"Delete Reference Items"<<endl;
				for(int x = 0; x < 3; x++){
				delete reference_Items[x];
			}
		}
			
		
			
};

int main(void){
	
	Reference_Items *rf1 = new Reference_Items();
	
	delete rf1;
	
	return 0;
}
