#include<iostream> 
#include<string>
using namespace std;


class Pokemon{
	public:
		
		//Constructer 物件建立時執行預設值 
		Pokemon(){
			Name = "No Name";
			Lv = 1;
			HpCur = 0;
			HpMax = 0;
			tools = new string[100];
		}
		
		//Constructer 物件建立時執行預設值  
		Pokemon(string ini_n, int ini_lv, int ini_hpcur, int ini_hpmax){
			SetData(ini_n, ini_lv, ini_hpcur, ini_hpmax);
			tools = new string[100];
		}
		
		//Destructer main return0時釋放物件記憶體，通常是釋放動態的物件記憶體 
		~Pokemon(){
			cout << Name << "已回歸大自然" << endl; 
			delete [] tools;
		}
		

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
		
		//friend void PokemonCenter(Pokemon &pk);
		friend class PokemonCenter;

	private:
		string Name;
		string *tools;
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

/*
//friend 可以直接存取private，比傳遞參數給函數讀取還要快，除非很在乎執行速度，不然盡量不要用 
void PokemonCenter(Pokemon &pk){
	pk.HpCur = pk.HpMax;
	cout << pk.Name << "已在中心恢復健康" << endl; 
}
*/

class PokemonCenter{
	public:
		
		//建構式初始值 
		PokemonCenter(string na){
			Name = na;
		}		
		
		void Cure(Pokemon &pk){
			pk.HpCur = pk.HpMax;
			cout << pk.Name << "已在"<< Name << "中心恢復健康" << endl; 
		}
	private:
		string Name;
};

 

int main()
{
	
	/*	動態記憶體 
	Pokemon *p0 = new  Pokemon("傑尼龜",18,30,30);
	p0->Show();
	delete p0;*/

	Pokemon p1("皮卡丘",10,15,15), p2("小火龍",15,25,25);
	PokemonCenter pc1("台大健康中心");
	
	//沒有建構式時需要設計初始值，但若忘記設定就很麻煩，所以用建構式指定預設值或初始值 
	//p1.SetData("皮卡丘",10,15,15);
	//p2.SetData("小火龍",15,25,25);
	
	
	p1.Attack(p2);
	p2.Attack(p1);
	
	//設定這個函數為friend 
	//PokemonCenter(p1);
	
	//設定這個Class為friend 
	pc1.Cure(p1);
	pc1.Cure(p2);
	
	
	p1.Show();
	p2.Show();

	
	return 0;
 } 
