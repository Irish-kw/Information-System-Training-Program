#include<iostream> 
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
				cout << "eCash: 請輸入大於0的金額" << endl; 
				return;
			}
			else{
				cout << "eCash: 您存了" << m <<"元"<< endl; 
				balance +=m;
			} 
		}
		
		void pay(int m){
			if (m <=0){
				cout << "eCash: 請輸入大於0的金額" << endl; 
				return;
			}
			
			else if (m >= balance){
				cout << "eCash: 您的錢不夠" << endl;
				return;
			}
			else{
				cout << "eCash: 您花了" << m << "元" << endl;
				balance-=m;
			}
	
		}
		
		void display(){
			cout << "eCash: 您尚有" << balance << "元" << endl; 
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
		cout << "您好，請選擇項目:" << endl; 
		puts("s 儲值");
		puts("p 消費");		
		puts("d 顯示餘額");			
		puts("q 離開");	
		
		scanf(" %c", &op);
		
		switch(op){
			case 's':
				cout << "請輸入儲存金額 :" << endl;
				cin >> m;
				p1.store(m);
				system("pause");
				break;
			case 'p':
				cout << "請輸入消費金額 :" << endl;
				cin >> m;				
				p1.pay(m);
				system("pause");
				break;
			case 'd':
				p1.display();
				system("pause");
				break;

			case 'q':
				cout << "謝謝，ByeBye!" << endl; 
				return 0;
				break;															
		}
		
		system("cls");
	}

	return 0;
 } 
