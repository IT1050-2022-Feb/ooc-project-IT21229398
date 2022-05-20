#include <iostream>
#include <cstring>

using namespace std;

class Borrow_items;
class Payment;

class Borrow_items{
	
	private :		
		char date[20];
		char status[50];
		Payment *pay[2];
	
	public:
		Borrow_items(){
			
		};
		Borrow_items(const char bDate[],const char bStatus[]){
			
			strcpy(date,bDate);
			strcpy(status,bStatus);
		};
		void addBorrowingDetails(){
			
		};
		~Borrow_items(){
			cout<<" Destructor called!!"<<endl;	
		};
};

class Payment{
	
	private:
		int payId;
		char payMethod[10];
		float amount;
		Borrow_items *item1;
		
	public:
		Payment(){
			
		};
		Payment(int pID,const char pMethod[],float pAmount,Borrow_items *pItem){
			
			payId = pID;
			strcpy(payMethod,pMethod);
			amount = pAmount;
			item1 = pItem;
		};
		
		float getPayment(){
			
		};
		~Payment(){
			cout<<" Destructor called!!"<<endl;	
		};
};

int main(void)
{
	Borrow_items *item1 = new Borrow_items("2021.10.21","Good");
	Borrow_items *item2 = new Borrow_items("2021.10.30","Too Good");
	
	Payment *pay1 = new Payment(1001,"paypal",2300.00,item1);
	Payment *pay2 = new Payment(1002,"visa",5300.00,item2);

	delete item1;
	delete item2;
	
	delete pay1;
	delete pay2;
	
	return 0;
}
