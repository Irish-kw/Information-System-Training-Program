#include<iostream> 
#include<string>
using namespace std;


class eCash{
	public:
		
		//Constructer ����إ߮ɰ���w�]�� 
		eCash(){
			balance = 0;
		}
		
		//Constructer ����إ߮ɰ���w�]��  
		eCash(int ini_balance){
			balance = ini_balance;
		}
		
		void store(int m){
			if (m <=0){
				cout << "eCash: �п�J�j��0�����B" << endl; 
				return;
			}
			else{
				cout << "eCash: �z�s�F" << m <<"��"<< endl; 
				balance +=m;
			} 
		}
		
		void pay(int m){
			if (m <=0){
				cout << "eCash: �п�J�j��0�����B" << endl; 
				return;
			}
			
			else if (m >= balance){
				cout << "eCash: �z��������" << endl;
				return;
			}
			else{
				cout << "eCash: �z��F" << m << "��" << endl;
				balance-=m;
			}
	
		}
		
		void display(){
			cout << "eCash: �z�|��" << balance << "��" << endl; 
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
		cout << "�z�n�A�п�ܶ���:" << endl; 
		puts("s �x��");
		puts("p ���O");		
		puts("d ��ܾl�B");			
		puts("q ���}");	
		
		scanf(" %c", &op);
		
		switch(op){
			case 's':
				cout << "�п�J�x�s���B :" << endl;
				cin >> m;
				p1.store(m);
				system("pause");
				break;
			case 'p':
				cout << "�п�J���O���B :" << endl;
				cin >> m;				
				p1.pay(m);
				system("pause");
				break;
			case 'd':
				p1.display();
				system("pause");
				break;

			case 'q':
				cout << "���¡AByeBye!" << endl; 
				return 0;
				break;															
		}
		
		system("cls");
	}

	return 0;
 } 
