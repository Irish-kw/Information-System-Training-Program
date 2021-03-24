#include<iostream> 
#include<string>
using namespace std;


class Pokemon{
	public:
		
		//Constructer ����إ߮ɰ���w�]�� 
		Pokemon(){
			Name = "No Name";
			Lv = 1;
			HpCur = 0;
			HpMax = 0;
			tools = new string[100];
		}
		
		//Constructer ����إ߮ɰ���w�]��  
		Pokemon(string ini_n, int ini_lv, int ini_hpcur, int ini_hpmax){
			SetData(ini_n, ini_lv, ini_hpcur, ini_hpmax);
			tools = new string[100];
		}
		
		//Destructer main return0�����񪫥�O����A�q�`�O����ʺA������O���� 
		~Pokemon(){
			cout << Name << "�w�^�k�j�۵M" << endl; 
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
				cout << Name << "�L�k����" << endl;
				return;  
			}
			
			if (target.HpCur <=0){
				cout << "�ؼ�" << target.Name << "�w���h�԰��O�A���i����" << endl; 
				return;
			}
			cout << Name << "����" << target.Name << Lv << "�I" << endl;
			target.Defence(Lv);

		}
		void Defence(int n){
			HpCur -=n;
			if (HpCur <= 0){
				cout << Name << "���h�԰��O" << endl;
				HpCur = 0; 
			}
		}
		
		void Cure(){
			cout << Name << "��_���d" << endl;
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


/*���ƩԥXClass���g�k�A�ݭn�[�W�då�ѪR�B��l  Class::�A
�i�D�{���o�Ө�ƬO�ݩ�Y��Class���A���F��Class�H�~�A��
�L�覡�L�k�����I�s�o�Ө�� 
void Pokemon::Show(){
	cout << "Name: " << Name << endl;
	cout << "Lv: " << Lv << endl;
	cout << "HP: " << HpCur << "/" 
	     <<  HpMax << endl;
}*/

/*
//friend �i�H�����s��private�A��ǻ��ѼƵ����Ū���٭n�֡A���D�ܦb�G����t�סA���M�ɶq���n�� 
void PokemonCenter(Pokemon &pk){
	pk.HpCur = pk.HpMax;
	cout << pk.Name << "�w�b���߫�_���d" << endl; 
}
*/

class PokemonCenter{
	public:
		
		//�غc����l�� 
		PokemonCenter(string na){
			Name = na;
		}		
		
		void Cure(Pokemon &pk){
			pk.HpCur = pk.HpMax;
			cout << pk.Name << "�w�b"<< Name << "���߫�_���d" << endl; 
		}
	private:
		string Name;
};

 

int main()
{
	
	/*	�ʺA�O���� 
	Pokemon *p0 = new  Pokemon("�ǥ��t",18,30,30);
	p0->Show();
	delete p0;*/

	Pokemon p1("�֥d�C",10,15,15), p2("�p���s",15,25,25);
	PokemonCenter pc1("�x�j���d����");
	
	//�S���غc���ɻݭn�]�p��l�ȡA���Y�ѰO�]�w�N�ܳ·СA�ҥH�Ϋغc�����w�w�]�ȩΪ�l�� 
	//p1.SetData("�֥d�C",10,15,15);
	//p2.SetData("�p���s",15,25,25);
	
	
	p1.Attack(p2);
	p2.Attack(p1);
	
	//�]�w�o�Ө�Ƭ�friend 
	//PokemonCenter(p1);
	
	//�]�w�o��Class��friend 
	pc1.Cure(p1);
	pc1.Cure(p2);
	
	
	p1.Show();
	p2.Show();

	
	return 0;
 } 
