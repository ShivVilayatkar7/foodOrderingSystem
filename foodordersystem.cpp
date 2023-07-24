# foodOrderingSystem

#include<iostream>
#include<string>
using namespace std;

struct Food{
	string name,email,address,accno;
	int phno;
	int price[16],total1[4],total2[4],total3[4],total4[4];
	int choice,subchoise1[10],subchoise2[10],subchoise3[10],subchoise4[10];
	int quantity1[4],quantity2[4],quantity3[4],quantity4[4];
	int cal1[4], cal2[4], cal3[4], cal4[1], calculate1[1],calculate2[1],calculate3[1],calculate4[1];
	int arr1[4]={150,150,150,150};
	int arr2[4]={170,170,170,170};
	int arr3[4]={50,50,50,50};
	int arr4[4]={90,90,90,90};
};

Food in;

void payment(){
	
	cout << "\n\t--------------------------------------------------";
	cout << "\n\tPERSONAL INFO\n";
	cout << "\t--------------------------------------------------\n\n";
	cout << "\tPlease Fill Details Without add Space Between Words.\n\n";
	
	cout << "\tName : ";
	cin >> in.name;
	cout << "\tEmail id : ";
	cin >> in.email;
	cout << "\tAddress : ";
	cin >> in.address;
	cout << "\tAccout / UPI Number : ";
	cin >> in.accno;
	cout << "\tPhone Number : ";
	cin >> in.phno;
	cout << "\n\tDetails Saved Successfully...\n";
}

void displayPayment(){
	
	cout << "\n\t--------------------------------------------------";
	cout << "\n\tDetails";
	cout << "\n\t--------------------------------------------------\n";
	cout << "\tName                  : " << in.name << "\n";
	cout << "\tEmail id              : " << in.email << "\n";
	cout << "\tAccount Num. / UPI id : " << in.accno << "\n";
	cout << "\tAddress               : " << in.address << "\n";
	cout << "\tPhone Number          : " << in.phno << "\n";
	cout << "\t--------------------------------------------------\n";
}

void order(){
	back:
		
	int etc1,etc2,etc3,etc4;
	
	cout << "\n\t--------------------------------------------------\n";
	cout << "\tCHOISE\n";
	cout << "\t--------------------------------------------------\n";
	
	cout << "\t(1) Veg. \n\t(2) NonVeg. \n\t(3) Cold Drinks. \n\t(4) Sweets.\n";
	cout << "\tWhat will You Choose... : ";
	cin >> in.choice;
	cout << "\t--------------------------------------------------\n";
	
	switch(in.choice){
		case 1:
			cout << "\n\t--------------------------------------------------\n";
			cout << "\tVEG\n";
			cout << "\t--------------------------------------------------\n";
			
			cout << "\t1. Special Pizza(120gm)\n";
			cout << "\t2. burger(2 mediam size)\n";
			cout << "\t3. Pasta(2 plates)\n";
			cout << "\t4. Maharashtrian thali\n";
			
			cout << "\t--------------------------------------------------\n";
			cout << "\tHow Many dishes you like to add in cart.. : ";
			cin >> etc1;
			cout << "\t--------------------------------------------------\n";
			
			
			for(int i=0;i<etc1;i++){
				cout << "\n\tYour choise : ";
				cin >> in.subchoise1[i];
				cout << "\tQuantity : ";
				cin >> in.quantity1[i];
			}
			
			for(int i=0;i<4;i++){
				in.total1[i]=in.quantity1[i]*in.arr1[i];
				in.cal1[i]+=in.total1[i];
				in.calculate1[i]=in.cal1[i];
			}
			
			break;
		case 2:
			cout << "\n\t--------------------------------------------------\n";
			cout << "\n\tNonVeg\n";
			cout << "\t--------------------------------------------------";
			cout << "\n\t1. chiken pizza(120gm)\n";
			cout << "\t2. crispy chiken pizza(3 piese)\n";
			cout << "\t3. tanduri chiken(150gm)\n";
			cout << "\t4. crispy leg piese(4 piese)\n";
			
			cout << "\t--------------------------------------------------";
			cout << "\n\tHow Many dishes you like to add in cart.. : ";
			cin >> etc2;
			cout << "\t--------------------------------------------------\n";
			
			
			for(int i=0;i<etc2;i++){
				cout << "\n\tYour choise : ";
				cin >> in.subchoise2[i];
				cout << "\tQuantity : ";
				cin >> in.quantity2[i];
			}
		
			for(int i=0;i<4;i++){
				in.total2[i]=in.quantity2[i]*in.arr2[i];
				in.cal2[i]+=in.total2[i];
				in.calculate2[i]=in.cal2[i];
			}
			break;
		case 3:
			cout << "\n\t--------------------------------------------------\n";
			cout << "\tDrinks\n";
			cout << "\t--------------------------------------------------";
			cout << "\n\t1. coca-cola(500ml)\n";
			cout << "\t2. pepsi(500ml)\n";
			cout << "\t3. thums-up(500ml)\n";
			cout << "\t4. banana shake(200ml)\n";
			
			cout << "\t--------------------------------------------------";
			cout << "\n\tHow Many dishes you like to add in cart.. : ";
			cin >> etc3;
			cout << "\t--------------------------------------------------\n";
			
			
			for(int i=0;i<etc3;i++){
				cout << "\n\tYour choise : ";
				cin >> in.subchoise3[i];
				cout << "\tQuantity : ";
				cin >> in.quantity3[i];
			}
			
			for(int i=0;i<4;i++){
				in.total3[i]=in.quantity3[i]*in.arr3[i];
				in.cal3[i]+=in.total3[i];
				in.calculate3[i]=in.cal3[i];
			}
			
			break;
		case 4:
			cout << "\n\t--------------------------------------------------";
			cout << "\n\tSweet";
			cout << "\n\t--------------------------------------------------";
			cout << "\n\t1. ice cream(2 boxs)\n";
			cout << "\t2. donut(3 piese)\n";
			cout << "\t3. cake(300gm)\n";
			cout << "\t4. rasgulla(250gm)\n";
			
			cout << "\n\t--------------------------------------------------";
			cout << "\n\tHow Many dishes you like to add in cart.. : ";
			cin >> etc4;
			cout << "\t--------------------------------------------------\n";
			
			
			for(int i=0;i<etc4;i++){
				cout << "\n\tYour choise : ";
				cin >> in.subchoise4[i];
				cout << "\tQuantity : ";
				cin >> in.quantity4[i];	
			}
			for(int i=0;i<4;i++){
				in.total4[i]=in.quantity4[i]*in.arr4[i];
				in.cal4[i]+=in.total4[i];
				in.calculate4[i]=in.cal4[i];
			}
		
			
			break;
		default:
			cout << "\n\tWrong Input...\n";
			goto back;
	}
	for(int i=0;i<4;i++){
		in.price[i]=in.calculate1[i]+in.calculate2[i]+in.calculate3[i]+in.calculate4[i];
	}
}
void outorder(){
	
	cout << "\t-----------------------------------------------------------\n";
	cout << "\t| Your Orders...                                          |\n";
	cout << "\t-----------------------------------------------------------\n";
	
	for(int i=0;i<4;i++){
	if(in.quantity1>0){	
	if(in.subchoise1[i] == 1){
		cout << "\n\tSpecial Pizza(120gm)\n";
		cout << "\tPrice : " << in.total1[i] << "\n";
	} else if(in.subchoise1[i] == 2){
		cout << "\n\tburger(2 mediam size)\n";
		cout << "\tPrice : " << in.total1[i] << "\n";
	} else if(in.subchoise1[i] == 3){
		cout << "\n\tPasta(2 plates)\n";
		cout << "\tPrice : " << in.total1[i] << "\n";
	} else if(in.subchoise1[i] == 4){
		cout << "\n\tMaharashtrian thali\n";
		cout << "\tPrice : " << in.total1[i] << "\n";
		}
	}
}
	
	for(int i=0;i<4;i++){
	if(in.quantity2>0){	
	if(in.subchoise2[i] == 1){
		cout << "\n\tchiken pizza(120gm)\n";
		cout << "\tPrice : " << in.total2[i] << "\n";
	} else if(in.subchoise2[i] == 2){
		cout << "\n\tcrispy chiken pizza(3 piese)\n";
		cout << "\tPrice : " << in.total2[i] << "\n";
	} else if(in.subchoise2[i] == 3){
		cout << "\n\ttanduri chiken(150gm)\n";
		cout << "\tPrice : " << in.total2[i] << "\n";
	} else if(in.subchoise2[i] == 4){
		cout << "\n\tcrispy leg piese(4 piese)\n";
		cout << "\tPrice : " << in.total2[i] << "\n";
		}
	}
}
	
	for(int i=0;i<4;i++){
	if(in.quantity3>0){
		if(in.subchoise3[i] == 1){
		cout << "\n\tcoca-cola(500ml)\n";
		cout << "\tPrice : " << in.total3[i] << "\n";
	} else if(in.subchoise3[i] == 2){
		cout << "\n\tpepsi(500ml)\n";
		cout << "\tPrice : " << in.total3[i] << "\n";
	} else if(in.subchoise3[i] == 3){
		cout << "\n\tThums-up(500ml)\n";
		cout << "\tPrice : " << in.total3[i] << "\n";
	} else if(in.subchoise3[i] == 4){
		cout << "\n\tbanana shake(200ml)\n";
		cout << "\tPrice : " << in.total3[i] << "\n";
		}
	}
}
	
	for(int i=0;i<4;i++){
	if(in.quantity4>0){
		if(in.subchoise4[i] == 1){
		cout << "\n\tice cream(2 boxs)\n";
		cout << "\tPrice : " << in.total4[i] << "\n";
	} else if(in.subchoise4[i] == 2){
		cout << "\n\tdonut(3 piese)\n";
		cout << "\tPrice : " << in.total4[i] << "\n";
	} else if(in.subchoise4[i] == 3){
		cout << "\n\tcake(300gm)\n";
		cout << "\tPrice : " << in.total4[i] << "\n";
	} else if(in.subchoise4[i] == 4){
		cout << "\n\trasgulla(250gm)\n";
		cout << "\tPrice : " << in.total4[i] << "\n";
		}
	}
}
	cout << "\t-----------------------------------------------------------\n";
	
	for(int i=0;i<1;i++){
	cout << "\tTotal Ammount : " << in.price[i] << "\n";
	}
	cout << "\t-----------------------------------------------------------\n";
}

int main(){
	hii:
		
	int enter;
	string pass,idd,pass1,id;
	
	cout << "\n\t--------------------------------------------------\n";
	cout << "\t|    INSTANT FOODZ                               |";
	cout << "\n\t--------------------------------------------------\n";
	
	cout << "\n\t--------------------------------------------------\n";
	cout << "\t| SIGN IN                                        |";
	cout << "\n\t--------------------------------------------------\n\n";
	
	cout << "\tEnter E-mail id : " ;
	cin >> id;
	cout << "\tCreate Password : ";
	cin >> pass;
	
	cout << "\n\tSign-in successfully...\n";
	
	system("CLS");
	
	login:
		
	cout << "\n\t--------------------------------------------------\n";
	cout << "\t| LOGIN                                          |";
	cout << "\n\t--------------------------------------------------\n";
		
	cout << "\n\tEnter Email id : ";
	cin >> idd;
	cout << "\tPassword : " ;
	cin >> pass1;
	cout << "\n";
	
	if(pass == pass1 && id == idd){
		goto continuee;
	} else{
		cout << "\n\tWrong Password or Email id ?\n\n";
		goto login;
	}
	continuee:
		
	cout << "\n\tLogin successfully.... ";
	
	system("CLS");
	
	retrn:
		returnnn:
			
	cout << "\n\t--------------------------------------------------\n";
	cout << "\t|    INSTANT FOODZ                               |";
	cout << "\n\t--------------------------------------------------\n";
	
	cout << "\t1. Shopping \n\t2. See Cart \n\t3. add Payment details \n\t4. see Payment details \n\t5. cancel order \n\t6. Exit... : ";
	cin >> enter;
	cout << "\t--------------------------------------------------\n";
	
	if(enter == 1){
		order();
	} else if(enter == 2){
		outorder();
	} else if(enter == 3){
		payment();
	} else if(enter == 4){
		displayPayment();
	} else if(enter == 5){
		cout << "\n\tYour Order cancled !\n";
		goto hii;
	} else if(enter == 6){
		exit(0);
	} else{
		cout << "\n\tWrong Input...\n";
		goto retrn;
	}
	
	char input;
	cout << "\t--------------------------------------------------\n";
	cout << "\tDo you want to order more food ? \n\tIf yes type 'Y' to continue else type 'N' : ";
	cin >> input;
	cout << "\t--------------------------------------------------\n";
	
	if(input == 'y' || input == 'Y'){
		goto returnnn;
	} else if(input == 'n'|| input == 'N'){
		goto pay;
	}
	
	cout << "\n\t--------------------------------------------------\n";
	cout << "\t|    INSTANT FOODZ                               |";
	cout << "\n\t--------------------------------------------------\n";
	
	cout << "\t1. Shopping \n\t2. See Cart \n\t3. add Payment details \n\t4. see Payment details \n\t5. cancel order \n\t6. Exit... : ";
	cin >> enter;
	cout << "\t--------------------------------------------------\n";
	
	if(enter == 1){
		order();
	} else if(enter == 2){
		outorder();
	} else if(enter == 3){
		payment();
	} else if(enter == 4){
		displayPayment();
	} else if(enter == 5){
		cout << "\n\tYour Order cancled !\n";
		goto hii;
	} else if(enter == 6){
		exit(0);
	} else{
		cout << "\n\tWrong Input...\n";
		goto retrn;
	}
	
	cout << "\t--------------------------------------------------\n";
	cout << "\tDo you want to order more food ? \n\tIf yes type 'Y' to continue else type 'N' : ";
	cin >> input;
	cout << "\t--------------------------------------------------\n";
	
	if(input == 'y'){
		goto returnnn;
	}
	
	pay:
		
	payment();
	cout << "\n\t-----------------------------------------------------------\n";
	cout << "\t|                      INSTANT FOODZ                      |\n";
	cout << "\t-----------------------------------------------------------\n";
	cout << "\t" << "Name           : " << in.name << "\n";
	cout << "\t" << "E-mail id      : " << in.email << "\n";
	cout << "\t" << "Address        : " << in.address << "\n";
	cout << "\t" << "Your orders    : \n\n"; 
	outorder();
		
	cout << "\n\tYour Order conformed, it will deliver within 30 mins. \n";
	cout << "\tThanks For Visiting, Have a nice day !!\n";
	cout << "\tthank you.....";
	
	return 0;
}
