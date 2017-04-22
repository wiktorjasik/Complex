#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

class Complex
{
private:
	double x, y;

public:
	Complex();
	Complex(double);
	Complex(double, double);
	Complex(const Complex&);
	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator>>(istream&, Complex&);
	Complex operator+(const Complex&);
	Complex operator-(const Complex&);
	Complex operator*(const Complex&);
	Complex operator/(const Complex&);
	Complex& operator=(const Complex&);
	ofstream& operator<<(ofstream&);
	ifstream& operator>>(ifstream&);
	double abs();
	bool operator ==(const Complex&);
	bool operator <(const Complex&);
	bool operator >(const Complex&);
	bool operator <=(const Complex&);
	bool operator >=(const Complex&);
	Complex& operator+=(const Complex&);
	Complex& operator-=(const Complex&);
	void loadA();
	void saveA();
	void loadB();
	void saveB();
};