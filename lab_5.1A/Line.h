#pragma once
#include <iostream> 
#include <string> 
#include <istream> 

using namespace std;

class Line
{
	int first, second;
public:
	Line();
	Line(int, int);
	Line(const Line&);
	~Line();

	void setFirst(int);
	void setSecond(int);

	int getFirst() const;
	int getSecond() const;

	operator string() const;

	friend Line operator + (const Line&, const Line&);
	friend Line operator * (const Line&, const Line&);

	friend ostream& operator << (ostream&, const Line&);
	friend istream& operator >> (istream&, Line&);

	Line& operator ++();
	Line& operator --();
	Line operator ++(int);
	Line operator --(int);
};

