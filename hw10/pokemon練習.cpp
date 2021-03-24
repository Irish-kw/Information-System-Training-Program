#include<iostream> 
#include<string>
using namespace std;


class Pokemon
{
	public:
		void Show();
		void Attack(Pokemon &target);
		void Defence(int n);
		void Cure();

		string Name;
		int Lv;
		int HoCur, HpMax;
	
};


/*把函數拉出Class的寫法，需要加上範疇解析運算子  Class::，
告訴程式這個函數是屬於某個Class的，除了該Class以外，其
他方式無法直接呼叫這個函數 */ 
void Pokemon::Show(){
	cout << "Name: " << Name << endl;
	cout << "Lv: " << Lv << endl;
	cout << "HP: " << HoCur << "/" 
	     <<  HpMax << endl;
}





int main()
{
	Pokemon p1={"皮卡丘",10, 7, 10}, p2={"小火龍",15, 25, 25};
	
	p1.Show();
	p2.Show();
	
	
	
	
	
	return 0;
 } 
