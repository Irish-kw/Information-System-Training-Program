#include<iostream>

using namespace std;


class Person{
	public:
		void inputPerson(){
			char str[128];
			cout << "<輸入個人資料>" << endl;
			cout <<"姓名: ";
			fflush(stdin);
			cin.getline(str, 128);
			Name = str;
			cout <<"電話: ";
			cin >> Phone;
			cout <<"Email: ";
			cin >> Email; 
		}
		
		void outputPerson(){
			cout << "<印出個人資料>" << endl;
			cout << "姓名: " << Name << endl;
			cout << "電話: " << Phone << endl;
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
			cout << "<輸入學生資料>" << endl;
			cout << "學號: ";
			cin >> StudentID;
			cout << "系所: ";
			cin >> Department; 
		} 
		
		void outputStudent(){
			cout << "<印出學生資料>" << endl;
			cout << "學號: " << StudentID << endl;
			cout << "系所: " << Department << endl;
			cout << Name; //父類別的protected參數只能被子類別存取 
		}
	private:
		string StudentID;
		string Department; 
};

class Teacher: public Person{
	public:
		void inputTeacher(){
			cout << "<輸入老師資料>" << endl;
			cout << "職稱: ";
			cin >> Title;
			cout << "系所: ";
			cin >> Department; 
		} 
		
		void outputTeacher(){
			cout << "<印出老師資料>" << endl;
			cout << "職稱: " << Title << endl;
			cout << "系所: " << Department << endl;
		}		
	private:
		string Title;
		string Department; 
};

int main(){
	Person p1; 
	Student s1;
	Teacher t1;
	
	
	
	//Student繼承了Person的公開函式。 只能使用Person的Public,   父類別的private不能被自己的物件讀取使用，子類別也不能使用
	//若希望父類別的private不能被自己的物件讀取使用，但是可以讓子類別使用，把private改成protected 
	//這樣子類別裡面的函式，也叫做方法(method)就可以存取父類別的protected的參數了，但一樣不能被物件直接存取 
	
	
	
	//子類別呼叫時，會先呼叫父類別的建構式，才呼叫子類別的建構式。
	//若子類別沒有建構式，預設呼叫父類別的。
	
	
	//解構跟建構相反，先子類別的解構式，才是父類別的解構式。 
	
	
	
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
