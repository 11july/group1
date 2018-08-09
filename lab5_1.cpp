#include<iostream>
using namespace std;
class ComplexNumber
{
	float real;
	float imag;

public:
	ComplexNumber()
	{

		cout << "Enter a complex number  :";
		cin >> real >> imag;

	}
	ComplexNumber(float real, float imag)
	{
		this->real = real;
		this->imag = imag;
	}

	ComplexNumber operator +(ComplexNumber const &obj)
	{
		ComplexNumber res(0.0, 0.0);
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	
	ComplexNumber operator -(ComplexNumber const &obj)
	{
		ComplexNumber res(0.0, 0.0);
		res.real = real - obj.real;
		res.imag = imag - obj.imag;
		return res;
	}

	ComplexNumber operator *(ComplexNumber const &obj)
	{
		ComplexNumber res(0.0, 0.0);
		res.real = real * obj.real;
		res.imag = imag * obj.imag;
		return res;
	}

	ComplexNumber operator ==(ComplexNumber const &obj)
	{
		bool r,i;
		r = (real == obj.real);
		i = (imag == obj.imag);
		return;
	}

	ComplexNumber operator !=(ComplexNumber const &obj)
	{
		ComplexNumber res(0.0, 0.0);
		res.real = real * obj.real;
		res.imag = imag * obj.imag;
		return res;
	}

	ComplexNumber operator +=(ComplexNumber const &obj)
	{
		ComplexNumber res(0.0, 0.0);
		res.real = real * obj.real;
		res.imag = imag * obj.imag;
		return res;
	}

	ComplexNumber operator *=(ComplexNumber const &obj)
	{
		ComplexNumber res(0.0, 0.0);
		res.real = real * obj.real;
		res.imag = imag * obj.imag;
		return res;
	}
	void print() { cout << real << " + i" << imag << endl; }
};
int main()
{
	ComplexNumber c1, c2;





	ComplexNumber c3(0.0, 0.0), c4(0.0, 0.0);
	c3 = c1 - c2;
	c3.print();

	return 0;
}