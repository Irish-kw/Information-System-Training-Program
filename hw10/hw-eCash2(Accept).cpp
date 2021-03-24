#include<iostream>
#include<stdio.h> 
#include<string>
using namespace std;


class eCash{
	public:
		
		//Constructer 物件建立時執行預設值 
		eCash(){
			balance = 0;
		}
		
		//Constructer 物件建立時執行預設值  
		eCash(int ini_balance){
			balance = ini_balance;
		}
		
		void store(int m){
			if (m <=0){
				cout << "eCash: Please enter a number > 0" << "."<< endl; 
				return;
			}
			else{
				cout << "eCash: You stored " << m << "."<< endl; 
				balance += m;
			} 
		}
		
		void pay(int m){
			if (m <=0){
				cout << "eCash: Please enter a number > 0" << "."<< endl; 
				return;
			}
			
			else if (m >= balance){
				cout << "eCash: Insufficient balance" << "."<< endl;
				return;
			}
			else{
				cout << "eCash: You spend " << m << "."<< endl;
				balance-=m;
			}
	
		}
		
		void display(){
			cout << "eCash: You remaining " << balance << "."<< endl; 
		}

	
	private:
		int balance;
	
};



int main()
{
	eCash p1;
	char op;
	int m;
	
	while(1){
		scanf(" %c", &op);
		
		switch(op){
			case 's':
				cin >> m;
				p1.store(m);
				break;
			case 'p':
				cin >> m;				
				p1.pay(m);
				break;
			case 'd':
				p1.display();
				break;

			case 'q':
				cout << "eCash: Thank you. Bye Bye." << endl; 
				return 0;
				break;															
		}
	}

	return 0;
 } 
