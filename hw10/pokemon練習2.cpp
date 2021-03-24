#include<iostream> 
#include<string>
using namespace std;


class Pokemon{
	public:
		void Show(){
			cout << "Name: " << Name << endl;
			cout << "Lv: " << Lv << endl;
			cout << "HP: " << HpCur << "/" 
			     <<  HpMax << endl;
		}
		void SetData(string na, int lv, int hpc, int hpm){
			
			if(hpc > hpm){
				cout << "HPCur error" << endl;
				return;
			} 
			
			Name = na;
			Lv = lv;
			HpCur = hpc;
			HpMax = hpm;
			
		};
		void Attack(Pokemon &target){
			if (HpCur <=0){
				cout << Name << "無法攻擊" << endl;
				return;  
			}
			
			if (target.HpCur <=0){
				cout << "目標" << target.Name << "已失去戰鬥力，不可攻擊" << endl; 
				return;
			}
			cout << Name << "攻擊" << target.Name << Lv << "點" << endl;
			target.Defence(Lv);

		}
		void Defence(int n){
			HpCur -=n;
			if (HpCur <= 0){
				cout << Name << "失去戰鬥力" << endl;
				HpCur = 0; 
			}
		}
		
		void Cure(){
			cout << Name << "恢復健康" << endl;
			HpCur = HpMax;
		}
		
	private:
		string Name;
		int Lv;
		int HpCur, HpMax;
	
};


/*把函數拉出Class的寫法，需要加上範疇解析運算子  Class::，
告訴程式這個函數是屬於某個Class的，除了該Class以外，其
他方式無法直接呼叫這個函數 
void Pokemon::Show(){
	cout << "Name: " << Name << endl;
	cout << "Lv: " << Lv << endl;
	cout << "HP: " << HpCur << "/" 
	     <<  HpMax << endl;
}*/


int main()
{
	Pokemon p1, p2;
	
	p1.SetData("皮卡丘",10,15,15);
	p2.SetData("小火龍",15,25,25);
	
	
	p1.Attack(p2);
	p2.Attack(p1);
	p1.Attack(p2);
	p2.Attack(p1);
	
	p1.Cure();
	
	
	p1.Show();
	p2.Show();

	
	return 0;
 } 
