#include "Line.h"
#include <sstream>

Line::Line() {
	first = 0;
	second = 0;
}

Line::Line(int f, int s) {
	first = f;
	second = s;
}

Line::Line(const Line& l) {
	first = l.first;
	second = l.second;
}

Line::~Line() {

}

void Line::setFirst(int f) {
	if (f != 0)
		first = f;
	first = 10;
}

void Line::setSecond(int s) {
	second = s;
}

int Line::getFirst() const {
	return first;
}

int Line::getSecond() const {
	return second;
}

Line::operator string () const {
	stringstream ss;

	ss << " First = " << first << endl;
	ss << " Second = " << second << endl;

	return ss.str();
}

Line operator + (const Line& f, const Line& s) {
	return Line(f.first + s.first, f.second + s.second);
}

Line operator * (const Line& f, const Line& s) {
	return Line(f.first * s.first - f.second * s.second,
		f.first * s.second + f.second * s.first);
}

ostream& operator << (ostream& out, const Line& l) {
	out << string(l);
	return out;
}
istream& operator >> (istream& in, Line& l) {
	cout << " First = "; in >> l.first;
	cout << " Second = "; in >> l.second;
	cout << endl;

	return in;
}

Line& Line::operator ++()
{
	first++;
	return *this;
}
Line& Line::operator --()
{
	first--;
	return *this;
}
Line Line::operator ++(int)
{
	Line l(*this);
	second++;
	return l;
}
Line Line::operator --(int)
{
	Line l(*this);
	second--;
	return l;
}



