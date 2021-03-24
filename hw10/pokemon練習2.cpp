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
		
	private:
		string Name;
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


int main()
{
	Pokemon p1, p2;
	
	p1.SetData("�֥d�C",10,15,15);
	p2.SetData("�p���s",15,25,25);
	
	
	p1.Attack(p2);
	p2.Attack(p1);
	p1.Attack(p2);
	p2.Attack(p1);
	
	p1.Cure();
	
	
	p1.Show();
	p2.Show();

	
	return 0;
 } 
