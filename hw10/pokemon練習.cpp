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


/*���ƩԥXClass���g�k�A�ݭn�[�W�då�ѪR�B��l  Class::�A
�i�D�{���o�Ө�ƬO�ݩ�Y��Class���A���F��Class�H�~�A��
�L�覡�L�k�����I�s�o�Ө�� */ 
void Pokemon::Show(){
	cout << "Name: " << Name << endl;
	cout << "Lv: " << Lv << endl;
	cout << "HP: " << HoCur << "/" 
	     <<  HpMax << endl;
}





int main()
{
	Pokemon p1={"�֥d�C",10, 7, 10}, p2={"�p���s",15, 25, 25};
	
	p1.Show();
	p2.Show();
	
	
	
	
	
	return 0;
 } 
