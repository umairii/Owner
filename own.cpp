#include<iostream>
using namespace std;
class String
{	
private:
	int i;
	char a[10];
	char b[10];
	public:
		int strcpy()
		{
			for(i=0;i<10;i++)
			b[i]=a[i];
			
		}
		void input()
		{
			cout<<"Enter your name without space\n";
			cin>>a;
		}
		void output()
		{
			cout<<" copy is  "<<b;
		}
		void length()
		{
			cout << "\nLength of array = " << (sizeof(a)/sizeof(*a));
		}
};
int main()
{
	String a;
	a.input();
	a.strcpy();
	a.output();
	a.length();
	return 0;
}
