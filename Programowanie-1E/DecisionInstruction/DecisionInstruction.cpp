#include <iostream>

/*
DRY - don't repeat yourself - nie powtarzaj si�
*/

/*
Operatory por�wnania:

* r�wno�ci				==
* r�no�ci				!=
* wi�kszo�ci			>
* mniejszo�ci			<
* wi�ksze lub r�wne		>=
* mniejsze lub r�wne	<=

argument1 >= argument2

Wynikiem dzia�ania tych operator�w
jest warto�� logiczna true/false typu bool

bool zmienna = true;
bool zmienna2 = 5 > 74;

*/

/*
Operatory logiczna:
F - false
T - true

			  and		  or		not
A	B		A && B		A || B		!A
F	F		  F			  F			T
F	T		  F			  T			T
T	F		  F			  T			F
T   T		  T			  T			F

*/

/*
Napisz funkcj�, kt�a wczyta dwie liczby i wykona dzielenie na nich
*/
void task1()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe (nie podawaj zera):\n";
	std::cin >> secondNumber;

	//iloraz
	int quotient = 0;

	/*if (secondNumber != 0)
		quotient = firstNumber / secondNumber;

	if (secondNumber != 0)
		std::cout << "Iloraz: " << quotient << "\n";

	if (secondNumber == 0)
		std::cout << "Dzielenie przez zero!!!!\n";*/

	if (secondNumber != 0)
	{
		quotient = firstNumber / secondNumber;
		std::cout << "Iloraz: " << quotient << "\n";
	}
	else
	{
		std::cout << "Dzielenie przez zero!!!!\n";
	}

	std::cout << "Koniec programu\n";
}

/*
Napisz funkjc�, kt�ra wczyta liczb� i wy�wietli informacj�
czy jest ona dodatnia czy nie.
*/
void task2()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	if (numberToCheck > 0)
		std::cout << "Liczba wi�ksza od zera\n";
	else
		std::cout << "Liczba r�wna lub mniejsza od zera\n";
}

/*
Napisz funkcj�, kt�ra wczyta liczb� i wy�wietli informacj�
czy jest ona w zakresie <10, 25>.
*/
void task3()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	/*if (numberToCheck >= 10)
	{
		if (numberToCheck <= 25)
		{
			std::cout << "Liczba jest w zakresie\n";
		}
		else
		{
			std::cout << "Liczba nie jest w zakresie\n";
		}
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}*/

	if (numberToCheck >= 10 && numberToCheck <= 25)
	{
		std::cout << "Liczba jest w zakresie\n";
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}
}

/*
Napisz funkcj� kt�ra wczyta liczb� i wy�wietli informacj� czy jest ona parzysta czy nie.
*/
void task4()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	int rest = numberToCheck % 2;
	//if (rest == 0)
	if (numberToCheck % 2 == 0)
		std::cout << "Liczba jest parzysta\n"; //liczba dzieli si� przez 2
	else
		std::cout << "Liczba jest nieparzysta\n"; //liczba nie dzieli si� przez 2
}

/*
Napisz funkcj� kt�ra wczyta liczb� kt�ra b�dzie bokiem kwadratu i wy�wietli�
informacj� o polu i obwodzie.
*/
void task5()
{
	int sideOfSquare;

	std::cout << "Podaj d�ugosc boku kwadratu:\n";
	std::cin >> sideOfSquare;

	if (sideOfSquare > 0)
	{
		int area = sideOfSquare * sideOfSquare;
		int circuit = 4 * sideOfSquare;

		std::cout << "Pole: " << area << " Obw�d: " << circuit << "\n";
	}
	else
		std::cout << "Poda�e� nieprawid�ow� warto�� boku. Powinna by� wi�ksza od zera.\n";
}


/*
Zadanie 6
Napisz funkcj�, kt�ra wczyta dwie liczby i wy�wietli wi�ksz� z nich.
*/
void task6()
{
	int firstNumberFromUser, secondNumberFromUser;

	std::cout << "Podaj pierwsz� liczb�:\n";
	std::cin >> firstNumberFromUser;

	std::cout << "Podaj drug� liczb�:\n";
	std::cin >> secondNumberFromUser;

	if (firstNumberFromUser > secondNumberFromUser)
		std::cout << "Wi�ksza liczba to: " << firstNumberFromUser;
	else if (secondNumberFromUser > firstNumberFromUser)
		std::cout << "Wi�ksza liczba to: " << secondNumberFromUser;
	else
		std::cout << "Liczby s� r�wne\n";
}

/*
Zadanie 7
Napisz funkcj� kt�ra wczyta trzy liczby i wy�wietli najwi�ksz� z nich.
*/

void task7()
{
	int firstNumberFromUser, secondNumberFromUser, thirdNumberFromUser;

	std::cout << "Podaj pierwsz� liczb�:\n";
	std::cin >> firstNumberFromUser;

	std::cout << "Podaj drug� liczb�:\n";
	std::cin >> secondNumberFromUser;

	std::cout << "Podaj trzeci� liczb�:\n";
	std::cin >> thirdNumberFromUser;

	if (firstNumberFromUser >= secondNumberFromUser && firstNumberFromUser >= thirdNumberFromUser)
		std::cout << "Wi�ksza liczba to: " << firstNumberFromUser;
	else if (secondNumberFromUser >= firstNumberFromUser && secondNumberFromUser >= thirdNumberFromUser)
		std::cout << "Wi�ksza liczba to: " << secondNumberFromUser;
	else
		std::cout << "Wi�ksza liczba to: " << thirdNumberFromUser;
}

/*
Zadanie 8
Napisz funkcj�, kt�ra wczyta dwie liczby i wy�wietli je w kolejno�ci rosn�cej.
*/

void task8()
{
	int firstNumberFromUser, secondNumberFromUser;

	std::cout << "Podaj pierwsz� liczb�:\n";
	std::cin >> firstNumberFromUser;

	std::cout << "Podaj drug� liczb�:\n";
	std::cin >> secondNumberFromUser;

	if (firstNumberFromUser < secondNumberFromUser)
		std::cout << firstNumberFromUser << ", " << secondNumberFromUser;
	else
		std::cout << secondNumberFromUser << ", " << firstNumberFromUser;
}

/*
Zadanie 9
Napisz funkcj�, kt�ra wczyta trzy liczby i wy�wietli je w kolejno�ci rosn�cej.
*/

void task9()
{
	int firstNumberFromUser, secondNumberFromUser, thirdNumberFromUser;

	std::cout << "Podaj pierwsz� liczb�:\n";
	std::cin >> firstNumberFromUser;

	std::cout << "Podaj drug� liczb�:\n";
	std::cin >> secondNumberFromUser;

	std::cout << "Podaj trzeci� liczb�:\n";
	std::cin >> thirdNumberFromUser;

	if (firstNumberFromUser >= secondNumberFromUser && secondNumberFromUser >= thirdNumberFromUser)
		std::cout << thirdNumberFromUser << ", " << secondNumberFromUser << ", " << firstNumberFromUser;
	else if (firstNumberFromUser >= thirdNumberFromUser && thirdNumberFromUser >= secondNumberFromUser)
		std::cout << secondNumberFromUser << ", " << thirdNumberFromUser << ", " << firstNumberFromUser;
	else if (secondNumberFromUser >= firstNumberFromUser && firstNumberFromUser >= thirdNumberFromUser)
		std::cout << thirdNumberFromUser << ", " << firstNumberFromUser << ", " << secondNumberFromUser;
	else if (secondNumberFromUser >= thirdNumberFromUser && thirdNumberFromUser >= firstNumberFromUser)
		std::cout << firstNumberFromUser << ", " << thirdNumberFromUser << ", " << secondNumberFromUser;
	else if (thirdNumberFromUser >= firstNumberFromUser && firstNumberFromUser >= secondNumberFromUser)
		std::cout << secondNumberFromUser << ", " << firstNumberFromUser << ", " << thirdNumberFromUser;
	else
		std::cout << firstNumberFromUser << ", " << secondNumberFromUser << ", " << thirdNumberFromUser;
}

/*
Zadanie 10
Napisz funkcj�, kt�ra wczyta numer dnia tygodnia i wy�wietli nazw� tego dnia.
*/

void task10()
{
	int dayNumber;

	std::cout << "Podaj numer dnia tygodnia:\n";
	std::cin >> dayNumber;

	if (dayNumber == 1)
		std::cout << "Poniedzia�ek\n";
	else if (dayNumber == 2)
		std::cout << "Wtorek\n";
	else if (dayNumber == 3)
		std::cout << "�roda\n";
	else if (dayNumber == 4)
		std::cout << "Czwartek\n";
	else if (dayNumber == 5)
		std::cout << "Pi�tek\n";
	else if (dayNumber == 6)
		std::cout << "Sobota\n";
	else if (dayNumber == 7 || dayNumber == 0)
		std::cout << "Niedziela\n";
	else //if (dayNumber < 0 || dayNumber > 7)
		std::cout << "B��dny dzie�\n";

	switch (dayNumber)
	{
	case 1:
		std::cout << "Poniedzia�ek\n";
		break;
	case 2:
		std::cout << "Wtorek\n";
		break;
	case 3:
		std::cout << "�roda\n";
		break;
	case 4:
		std::cout << "Czwartek\n";
		break;
	case 5:
		std::cout << "Pi�tek\n";
		break;
	case 6:
		std::cout << "Sobota\n";
		break;
	case 0:
	case 7:
		std::cout << "Niedziela\n";
		break;
	default:
		std::cout << "B��dny dzie�\n";
	}
}

/*
Zadanie 11*
Napisz funkcj�, kt�ra wczyta wsp�czynniki r�wnania kwadratowego
i wy�wietli pierwiastki tego r�wnania.
*/



/*
Zadanie 12
Napisz funkcj�, kt�ra wy�wietli komunikaty "gor�co", "ciep�o", "zimno", "bardzo zimno"
w zale�no�ci od wczytanej temperatury
Zakresy: powy�ej 30, 15-30, 0-15 i poni�ej 0.
*/

void task12()
{

}

int main()
{
	setlocale(LC_CTYPE, "polish");

	int numberOfTask;
	std::cout << "1. Napisz funkcj�, kt�a wczyta dwie liczby i wykona dzielenie na nich\n";
	std::cout << "2. Napisz funkjc�, kt�ra wczyta liczb� i wy�wietli informacj� czy jest ona dodatnia czy nie.\n";

	std::cout << "Podaj numer zadania:\n";
	std::cin >> numberOfTask;

	switch (numberOfTask)
	{
	case 1:
		task1();
		break;
	case 2:
		task2();
		break;
	case 3:
		task3();
		break;
	case 4:
		task4();
		break;
	case 5:
		task5();
		break;
	case 6:
		task6();
		break;
	case 7:
		task7();
		break;
	case 8:
		task8();
		break;
	case 9:
		task9();
		break;
	case 10:
		task10();
		break;
	default:
		break;
	}

	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
}
