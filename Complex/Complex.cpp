#include "Complex.h"

Complex::Complex()
{
	x = 0;
	y = 0;
}

Complex::Complex(double a)
{
	x = a;
	y = a;
}

Complex::Complex(double a, double b)
{
	x = a;
	y = b;
}

Complex::Complex(const Complex &c)
{
	x = c.x;
	y = c.y;
}

ostream& operator<<(ostream &out, const Complex &c)
{
	out << showpos << c.x << " " << c.y << "i\n";
	return out;
}

istream& operator>>(istream &in, Complex &c)
{
	cout << "Wpisz czesc rzeczywista: ";
	in >> c.x;
	cout << "Wpisz czesc urojona: ";
	in >> c.y;
	return in;
}

Complex Complex::operator+(const Complex &c)
{
	return Complex(x + c.x, y + c.y);
}

Complex Complex::operator-(const Complex &c)
{
	return Complex(x - c.x, y - c.y);
}

Complex Complex::operator*(const Complex &c)
{
	return Complex(x*c.x - y*c.y, x*c.y + y*c.x);
}

Complex Complex::operator/(const Complex &c)
{
	return Complex((x*c.x - y*-c.y) / (c.x*c.x + c.y*c.y), (x*-c.y + y*c.x) / (c.x*c.x + c.y*c.y));
}

Complex& Complex::operator=(const Complex &c)
{
	return Complex(c.x,c.y);
}

ifstream& Complex::operator>>(ifstream &in)
{
	in >> x >> y;
	return in;
}

ofstream& Complex::operator<<(ofstream &out)
{
	out << x << " " << y << endl;
	return out;
}

double Complex::abs() 
{
	return x*x + y*y;
}

bool Complex::operator ==(const Complex &c)
{
	if ((x*x + y*y) == (c.x*c.x + c.y*c.y))
		return true;
	else
		return false;
}

bool Complex::operator <(const Complex &c)
{
	if ((x*x + y*y) < (c.x*c.x + c.y*c.y))
		return true;
	else
		return false;
}

bool Complex::operator >(const Complex &c)
{
	if ((x*x + y*y) > (c.x*c.x + c.y*c.y))
		return true;
	else
		return false;
}

bool Complex::operator <=(const Complex &c)
{
	if ((x*x + y*y) <= (c.x*c.x + c.y*c.y))
		return true;
	else
		return false;
}

bool Complex::operator >=(const Complex &c)
{
	if ((x*x + y*y) >= (c.x*c.x + c.y*c.y))
		return true;
	else
		return false;
}

Complex& Complex::operator+=(const Complex &c) 
{
	return Complex(x += c.x, y += c.y);
}

Complex& Complex::operator-=(const Complex &c)
{
	return Complex(x -= c.x, y -= c.y);
}

void Complex::loadA()
{
	ifstream file;
	file.open("complexA.txt", ios::in);
	file >> *this;
	file.close();
	cout << "Pomyslnie wczytano liczbe a\n";
}

void Complex::saveA()
{
	ofstream file;
	file.open("complexA.txt", ios::out);
	file << *this;
	file.close();
	cout << "Pomyslnie zapisano liczbe a\n";
}

void Complex::loadB()
{
	ifstream file;
	file.open("complexB.txt", ios::in);
	file >> *this;
	file.close();
	cout << "Pomyslnie wczytano liczbe b\n";
}

void Complex::saveB()
{
	ofstream file;
	file.open("complexB.txt", ios::out);
	file << *this;
	file.close();
	cout << "Pomyslnie zapisano liczbe b\n";
}