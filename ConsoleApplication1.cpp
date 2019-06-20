#include "stdafx.h"
#include"iostream"
using namespace std;
class CMyDate
{
private:
	int year;
	int month;
	int day;
public:
	CMyDate();
	~CMyDate();
	CMyDate(int y, int m, int d);
	void print() const;
};
CMyDate::CMyDate()
{
	year = 2019;
	month = 1;
	day = 1;
	cout << "CMyDate's constructor called." << endl;
}
CMyDate::~CMyDate()
{
	cout << "CMyDate's constructor called." << endl;
}
CMyDate::CMyDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	cout << "CMyDate's constructor called." << endl;
}
void CMyDate::print() const
{
	cout << year << month << day << endl;
}
class CMeter :public CMyDate
{
private:
	int meters;
public:
	CMeter();
	CMeter(int i, int j);
	~CMeter();
	void print() const;
};
CMeter::CMeter()
{
	meters = 2;
	cout << "CMeters's default constructor called." << endl;
}
CMeter::CMeter(int i, int j)
{
	meters = i;
	cout << "CMeters's constructor called." << endl;
}
CMeter::~CMeter()
{
	cout << "CMeters's constructor called." << endl;
}
void CMeter::print() const
{
	CMyDate::print();
	cout << meters << endl;
}
int main()
{
	CMeter obj(1, 4);
	obj.print();
	return 0;
}