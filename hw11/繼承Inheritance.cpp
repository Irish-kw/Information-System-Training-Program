#include<iostream>

using namespace std;


class Person{
	public:
		void inputPerson(){
			char str[128];
			cout << "<��J�ӤH���>" << endl;
			cout <<"�m�W: ";
			fflush(stdin);
			cin.getline(str, 128);
			Name = str;
			cout <<"�q��: ";
			cin >> Phone;
			cout <<"Email: ";
			cin >> Email; 
		}
		
		void outputPerson(){
			cout << "<�L�X�ӤH���>" << endl;
			cout << "�m�W: " << Name << endl;
			cout << "�q��: " << Phone << endl;
			cout << "Email: " << Email << endl; 
		}
	//private:
	protected:
		string Name;
		string Phone;
		string Email;

};


class Student: public Person{
	public:
		void inputStudent(){
			cout << "<��J�ǥ͸��>" << endl;
			cout << "�Ǹ�: ";
			cin >> StudentID;
			cout << "�t��: ";
			cin >> Department; 
		} 
		
		void outputStudent(){
			cout << "<�L�X�ǥ͸��>" << endl;
			cout << "�Ǹ�: " << StudentID << endl;
			cout << "�t��: " << Department << endl;
			cout << Name; //�����O��protected�Ѽƥu��Q�l���O�s�� 
		}
	private:
		string StudentID;
		string Department; 
};

class Teacher: public Person{
	public:
		void inputTeacher(){
			cout << "<��J�Ѯv���>" << endl;
			cout << "¾��: ";
			cin >> Title;
			cout << "�t��: ";
			cin >> Department; 
		} 
		
		void outputTeacher(){
			cout << "<�L�X�Ѯv���>" << endl;
			cout << "¾��: " << Title << endl;
			cout << "�t��: " << Department << endl;
		}		
	private:
		string Title;
		string Department; 
};

int main(){
	Person p1; 
	Student s1;
	Teacher t1;
	
	
	
	//Student�~�ӤFPerson�����}�禡�C �u��ϥ�Person��Public,   �����O��private����Q�ۤv������Ū���ϥΡA�l���O�]����ϥ�
	//�Y�Ʊ�����O��private����Q�ۤv������Ū���ϥΡA���O�i�H���l���O�ϥΡA��private�令protected 
	//�o�ˤl���O�̭����禡�A�]�s����k(method)�N�i�H�s�������O��protected���ѼƤF�A���@�ˤ���Q���󪽱��s�� 
	
	
	
	//�l���O�I�s�ɡA�|���I�s�����O���غc���A�~�I�s�l���O���غc���C
	//�Y�l���O�S���غc���A�w�]�I�s�����O���C
	
	
	//�Ѻc��غc�ۤϡA���l���O���Ѻc���A�~�O�����O���Ѻc���C 
	
	
	
	s1.inputPerson();
	s1.inputStudent();
	cout << endl;
	s1.outputPerson();
	s1.outputStudent();
	cout << endl;
	 
	 
	/* 
	t1.inputPerson();
	t1.inputTeacher();
	cout << endl;
	t1.outputPerson();
	t1.outputTeacher();	
	*/
	
	return 0;
}
