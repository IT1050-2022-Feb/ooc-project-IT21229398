#include<iostream>
#include<cstring>

using namespace std;

class Unregistered_member;
class Reference_item;

//Reference_item class

class Reference_Items
{
	private:
		char rItemname[20];
		int rItemId;
		Unregistered_member *Items[3];
		
		
	public:
		Reference_Items()
		{
			
		};
		Reference_Items(const char rName[],int rId)
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
			cout<<"Reference_Items Destructer called!!"<<endl;
		};
};

class Unregisterd_member
{
	private:
		char uName[20];
		int uTellNo;
		Reference_Items *Member;
		
	
	public:
		Unregisterd_member()
		{
			
		};
		
		Unregisterd_member(const char name[20],int no)
		{
			strcpy(uName,name);
			uTellNo=no;
		};
		
		view_Reference_Item()
		{
			
		};
		
		~Unregisterd_member()
		{
			cout<<"Unregisterd_member Destructer called!!"<<endl;
		};
		
		
		
};

int main(void)
{
	Reference_Items *Items1 = new Reference_Items("Ebook",001);
	Reference_Items *Items2 = new Reference_Items("CD",002);
	
	Unregisterd_member *Member1 = new Unregisterd_member("Gimhani", 0701117153);
	Unregisterd_member *Member2 = new Unregisterd_member("shehan", 070117155);
	
	return 0;
	
}
