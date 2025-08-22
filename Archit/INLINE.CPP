#include<iostream.h>
#include<conio.h>
int add (int a,int b)
{
	return a*b;
}
int main()
{
	int a,b;
	clrscr();
	cout <<"entyer value a"<<endl;
	cin >> a;
	cout <<"entyer value b"<<endl;
	cin >> b;
	cout <<"sum1="<< add (a,b)<<endl;
	cout <<"sum2="<< add (a,b)<<endl;
	cout <<"sum3="<< add (a,b)<<endl;
	cout <<"sum4="<< add (a,b)<<endl;
	cout <<"sum5="<< add (a,b)<<endl;
	getch();
	return 0;



}