#include<iostream> 
#include<string>
using namespace std;


class Square
{
	public:
		
		int area()
		{
			return len *len;
		}
		
		void setLen(int n)
		{
			if (n > 0){
				len = n;
			}
			else{
				cout << "len value can't  less then 0'" << endl;
				len = 0;
			}
		}
		
		int getLen()
		{
			return len;
		}
		
		friend int compare(Square &s1, Square &s2);
		
	private:
		int len;

};

// &¬°°Ñ¦Ò 
int compare(Square &s1, Square &s2){ 
	if (s1.len == s2.len)
		return 0;
	else if (s1.len > s2.len)
		return 1;
	else
		return -1;
}


int main()
{
	Square p1,p2;


	p1.setLen(20);
	p2.setLen(40);

	cout << compare(p1, p2) << endl;


	cout << p1.getLen() << endl;
	cout << p1.area() << endl;


	return 0;
 } 
