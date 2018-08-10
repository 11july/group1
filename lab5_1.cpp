#include<iostream>
using namespace std;
class ComplexNumber
{
	float real;
	float imag;
	char i;

public:
	ComplexNumber()
	{

		cout << "Enter a complex number  :";
		cin >> real >> imag;
		i = 'i';

	}
	ComplexNumber(float real, float imag)
	{
		this->real = real;
		this->imag = imag;
	}
	float getreal()
	{
		return real;
	}
	float getimag()
	{
		return imag;
	}
	void setreal(float real)
	{

		this->real = real;
	}
	void setimag(float imag)
	{
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
		res.real = ((real*obj.real) - (imag*obj.imag));
		res.imag = ((real*obj.imag) + (imag*obj.real));
		return res;
	}

	ComplexNumber operator /(ComplexNumber const &obj)
	{
		ComplexNumber res(0.0, 0.0);

		res.real = ((real*obj.real) + (imag*obj.imag));
		res.imag = ((imag*obj.real) - (real*obj.imag)) / ((obj.real*obj.real) + (obj.imag*obj.imag));
		return res;
	}

	bool operator ==(ComplexNumber const &obj)
	{


		if (real == obj.real && imag == obj.imag)
		{
			return true;
		}
		return false;
	}
	bool operator !=(ComplexNumber const &obj)
	{


		if (real != obj.real && imag != obj.imag)
		{
			return true;
		}
		return false;
	}

	ComplexNumber* operator +=(ComplexNumber const &obj)
	{

		real = real + obj.real;
		imag = imag + obj.imag;
		return this;
	}
	ComplexNumber* operator *=(ComplexNumber const &obj)
	{
		float temp1,temp2;
		temp1 = real;
		real = ((real*obj.real) - (imag*obj.imag));
		temp2 = real;
		real = temp1;
		imag = ((real*obj.imag) + (imag*obj.real));
		real = temp2;
		return this;
	}

	void print()
	{
		if (imag<0)
		{
			cout << real << imag << "i" << endl;
		}
		else
		{
			cout << real << "+" << imag << "i" << endl;
		}

	}
};
int main()
{
	ComplexNumber c1, c2;
	ComplexNumber c3(0.0, 0.0), c4(0.0, 0.0);
	bool flag = false;
	c3 = c1+c2;
	c3.print();


	c3 = c1-c2;
	c3.print();

	c3 = c1*c2;
	c3.print();

	c3 = c1/c2;
	c3.print();

	flag = (c1==c2);
	if (flag == true)
	{
		cout << "\nC1==C2 is true";
	}
	else
	{
		cout << "\nC1==C2 is false";
	}
	flag = (c1!=c2);
	if (flag == true)
	{
		cout << "\nC1!=C2 is true";
	}
	else
	{
		cout << "\nC1!=C2 is false";
	}
	c4 = c1;
	c1 += c2;
	c1.print();
	c1 = c4;
	c1 *= c2;
	c1.print();
	return 0;
}