﻿// GeometryConsoleApplication.cpp 
#include <iostream>

/*
* Dla poniższych klas ułóż drzewko dziedziczenia.
																	Animal (Zwierzę)
		Mammal (Ssak)									Reptile (Gad)					Fish (Ryba)								Bird (Ptak)
Dog (Pies)			Cat (Kot)					Snake (Wąż)		Turtle (Żółw)		Trout (Pstrąg)  Salmon (Łosoś)		Eagle (Orzeł)  Sparrow (Wróbel)
			Tiger (Tygrys)  Lion (Lew)

															Vehicle (Pojazd)
		Car (Samochód)										Truck (Ciężarówka)						Motorcycle (Motocykl)
Sedan (Sedan)	SUV (SUV)	Pickup Truck (Pick-up)			Semi-Truck (Ciągnik siodłowy)



																		Electronic Device (Urządzenie elektroniczne)
				Television (Telewizor)														Smartphone (Smartfon)				Laptop (Laptop)
Smart TV (Telewizor Smart)	LED TV (Telewizor LED)		Android Phone (Telefon z systemem Android)	iPhone (iPhone)


*/


//Kwadrat, trapez, prostokąt

class Quadrangle //ang. czworokąt
{
protected:
	double sideA, sideB, sideC, sideD;
public:
	Quadrangle(double a, double b, double c, double d)
	{
		sideA = a;
		sideB = b;
		sideC = c;
		sideD = d;
	}

	double GetPerimeter()
	{
		return sideA + sideB + sideC + sideD;
	}
};

class Trapeze : public Quadrangle
{
protected:
	double height;
public:
	Trapeze(double a, double b, double c, double d, double h) :Quadrangle(a, b, c, d)
	{
		height = h;
	}

	double GetArea()
	{
		return (sideA + sideC) * height / 2;
	}
};

class Rectangle : public Quadrangle
{
protected:

public:
	Rectangle(double a, double b) :Quadrangle(a, b, a, b)
	{
		/*sideA = a;
		sideB = b;
		sideC = a;
		sideD = b;*/
	}

	double GetArea()
	{
		return sideA * sideB;
	}
};

class Square : public Rectangle
{
protected:

public:
	Square(double a) :Rectangle(a, a)
	{

	}
};

int main()
{
	Rectangle r(1, 2);
	std::cout << "Obwód prostokąta: " << r.GetPerimeter() << "\n";
	std::cout << "Pole prostokąta: " << r.GetArea() << "\n";

	Trapeze t(1, 2, 3, 4, 5);
	std::cout << "Obwód trapezu: " << t.GetPerimeter() << "\n";
	std::cout << "Pole trapezu: " << t.GetArea() << "\n";

	Square s(5);
	std::cout << "Obwód kwadratu: " << s.GetPerimeter() << "\n";
	std::cout << "Pole kwadratu: " << s.GetArea() << "\n";
}