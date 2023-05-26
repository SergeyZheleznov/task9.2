#include <iostream>
#include <windows.h>
#include <numeric>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction()
	{
		int numerator_;
		int denominator_;
	}
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	Fraction operator + (const Fraction & other) {
		this->numerator_ = this->numerator_ * other.denominator_ + this->denominator_ * other.numerator_;
		this->denominator_ = this->denominator_ * other.denominator_;
		return *this;
	}
	
	Fraction operator - (const Fraction& other) {
		this->numerator_ = this->numerator_ * other.denominator_ - this->denominator_ * other.numerator_;
		this->denominator_ = this->denominator_ * other.denominator_;
		return *this;
	}

	Fraction operator * (const Fraction& other) {
		this->numerator_ = this->numerator_ * other.numerator_;
		this->denominator_ = this->denominator_ * other.denominator_;
		return *this;
	}

	Fraction operator / (const Fraction& other) {
		this->numerator_ = this->numerator_ * other.denominator_;
		this->denominator_ = this->denominator_ * other.numerator_;
		return *this;
	}

	Fraction & operator ++()
	{
		this->numerator_ = numerator_ + denominator_;
		this->denominator_;
		return *this;
	}

	Fraction& operator ++(int)
	{
		this->numerator_ = numerator_ + denominator_;
		this->denominator_;
		return *this;
	}

	Fraction& operator --()
	{
		this->numerator_ = numerator_ - denominator_;
		this->denominator_;
		return *this;
	}

	Fraction& operator --(int)
	{
		this->numerator_ = numerator_ - denominator_;
		this->denominator_;
		return *this;
	}

	void print()
	{
		std::cout << numerator_ << "/" << denominator_;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::system("chcp 1251");

	int numerator_1;
	int denominator_1;
	int numerator_2;
	int denominator_2;

	std::cout << "¬ведите числитель дроби 1: ";
	std::cin >> numerator_1;
	std::cout << " " << std::endl;

	std::cout << "¬ведите знаменатель дроби 1: ";
	std::cin >> denominator_1;
	std::cout << " " << std::endl;

	std::cout << "¬ведите числитель дроби 2: ";
	std::cin >> numerator_2;
	std::cout << " " << std::endl;

	std::cout << "¬ведите знаменатель дроби 2: ";
	std::cin >> denominator_2;
	std::cout << " " << std::endl;

	Fraction f1(numerator_1, denominator_1);
	Fraction f2(numerator_2, denominator_2);

	std::cout << "";
	f1.print();
	std::cout << " + ";
	f2.print();
	std::cout << " = ";
	Fraction temp = f1;
	Fraction sum1 = f1 + f2;
	sum1.print();
	std::cout << std::endl;
	f1 = temp;
	
	std::cout << "";
	f1.print();
	std::cout << " - ";
	f2.print();
	std::cout << " = ";
	temp = f1;
	Fraction minus1 = f1 - f2;
	minus1.print();
	std::cout << std::endl;
	f1 = temp;

	std::cout << "";
	f1.print();
	std::cout << " * ";
	f2.print();
	std::cout << " = ";
	temp = f1;
	Fraction  mul1= f1 * f2;
	mul1.print();
	std::cout << std::endl;
	f1 = temp;

	std::cout << "";
	f1.print();
	std::cout << " / ";
	f2.print();
	std::cout << " = ";
	temp = f1;
	Fraction  div1 = f1 / f2;
	div1.print();
	std::cout << std::endl;
	f1 = temp;

	std::cout << "++";
	f1.print();
	std::cout << " * ";
	f2.print();
	std::cout << " = ";
	temp = f1;
	Fraction  mul2 = ++f1 * f2;
	mul2.print();
	std::cout << std::endl;
	f1 = temp;

	std::cout << "«начение дроби 1 = ";
	f1.print();
	std::cout << std::endl;

	f1.print();
	std::cout << " -- * ";
	f2.print();
	std::cout << " = ";
	temp = f1;
	Fraction  mul3 = --f1 * f2;
	mul3.print();
	std::cout << std::endl;
	f1 = temp;

	std::cout << "«начение дроби 1 = ";
	f1.print();
	std::cout << std::endl;

	return 0;
}

