#include <iostream>
#include <windows.h>

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

	bool operator == (const Fraction& other)
	{
		return this->numerator_ == other.numerator_ && this->denominator_ == other.denominator_;
	}
	
	Fraction operator + (const Fraction & other) {
		Fraction temp;
		temp.numerator_ = this->numerator_ * other.denominator_ + this->denominator_ * other.numerator_;
		temp.denominator_ = this->denominator_ * other.denominator_;



		float p = 0.0, q = 0.0;
		for (int i = 1; i <= temp.numerator_ && i <= temp.denominator_; i++)
		{

			if (!(temp.numerator_ % i) && !(temp.denominator_ % i))
			{
				p = temp.numerator_ / i;
				q = temp.denominator_ / i;
			}
		}
		temp.numerator_ = p;
		temp.denominator_ = q;
		return temp;
	}
	
	Fraction operator - (const Fraction& other) {
		Fraction temp;
		temp.numerator_ = this->numerator_ * other.denominator_ - this->denominator_ * other.numerator_;
		temp.denominator_ = this->denominator_ * other.denominator_;


/*
		float p = 0.0, q = 0.0;
		for (int i = 1; i <= temp.numerator_ && i <= temp.denominator_; i++)
		{

			if (!(temp.numerator_ % i) && !(temp.denominator_ % i))
			{
				p = temp.numerator_ / i;
				q = temp.denominator_ / i;
			}
		}
		temp.numerator_ = p;
		temp.denominator_ = q;*/
		return temp;
	}

	Fraction operator * (const Fraction& other) {
		Fraction temp;
		temp.numerator_ = this->numerator_ * other.numerator_;
		temp.denominator_ = this->denominator_ * other.denominator_;

		float p = 0.0, q = 0.0;
		for (int i = 1; i <= temp.numerator_ && i <= temp.denominator_; i++)
		{

			if (!(temp.numerator_ % i) && !(temp.denominator_ % i))
			{
				p = temp.numerator_ / i;
				q = temp.denominator_ / i;
			}
		}
		temp.numerator_ = p;
		temp.denominator_ = q;
		return temp;
	}

	Fraction operator / (const Fraction& other) {
		Fraction temp;
		temp.numerator_ = this->numerator_ * other.denominator_;
		temp.denominator_ = this->denominator_ * other.numerator_;



		float p = 0.0, q = 0.0;
		for (int i = 1; i <= temp.numerator_ && i <= temp.denominator_; i++)
		{

			if (!(temp.numerator_ % i) && !(temp.denominator_ % i))
			{
				p = temp.numerator_ / i;
				q = temp.denominator_ / i;
			}
		}
		temp.numerator_ = p;
		temp.denominator_ = q;
		return temp;
	}

	Fraction & operator ++()
	{
		this->numerator_ = numerator_ + denominator_;
		this->denominator_;

		return *this;
	}

	Fraction& operator ++(int)
	{
		
		Fraction temp(*this);
		this->numerator_ = numerator_ + denominator_;
		this->denominator_;

		return temp;
	}

	Fraction& operator --()
	{
		this->numerator_ = numerator_ - denominator_;
		this->denominator_;

		return *this;
	}

	Fraction& operator --(int)
	{
		Fraction temp(*this);
		this->numerator_ = numerator_ - denominator_;
		this->denominator_;

		return temp;
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

	std::cout << "������� ��������� ����� 1: ";
	std::cin >> numerator_1;
	std::cout << " " << std::endl;

	std::cout << "������� ����������� ����� 1: ";
	std::cin >> denominator_1;
	std::cout << " " << std::endl;

	std::cout << "������� ��������� ����� 2: ";
	std::cin >> numerator_2;
	std::cout << " " << std::endl;

	std::cout << "������� ����������� ����� 2: ";
	std::cin >> denominator_2;
	std::cout << " " << std::endl;

	Fraction f1(numerator_1, denominator_1);
	Fraction f2(numerator_2, denominator_2);

	std::cout << "";
	f1.print();
	std::cout << " + ";
	f2.print();
	std::cout << " = ";
	Fraction sum1 = f1 + f2;
	sum1.print();
	std::cout << std::endl;
	
	std::cout << "";
	f1.print();
	std::cout << " - ";
	f2.print();
	std::cout << " = ";
	Fraction minus1 = f1 - f2;
	minus1.print();
	std::cout << std::endl;

	std::cout << "";
	f1.print();
	std::cout << " * ";
	f2.print();
	std::cout << " = ";
	Fraction  mul1= f1 * f2;
	mul1.print();
	std::cout << std::endl;

	std::cout << "";
	f1.print();
	std::cout << " / ";
	f2.print();
	std::cout << " = ";
	Fraction  div1 = f1 / f2;
	div1.print();
	std::cout << std::endl;

	std::cout << "++";
	f1.print();
	std::cout << " * ";
	f2.print();
	std::cout << " = ";
	Fraction  mul2 = ++f1 * f2;
	mul2.print();
	std::cout << std::endl;

	std::cout << "�������� ����� 1 = ";
	f1.print();
	std::cout << std::endl;

	f1.print();
	std::cout << " -- * ";
	f2.print();
	std::cout << " = ";
	Fraction  mul3 = --f1 * f2;
	mul3.print();
	std::cout << std::endl;

	std::cout << "�������� ����� 1 = ";
	f1.print();
	std::cout << std::endl;

	return 0;
}

