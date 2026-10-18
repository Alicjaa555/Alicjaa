// Alicjaa.cpp : This file contains the 'main' function. Program execution begins and ends there.




#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()



//zadanie 1


/*
{
	cout << " XXXXXXXXXX         XXXXXXXXXX" <<endl;
	cout << "X          X        X         X"<<endl;
	cout << "X          X        X          X"<<endl;
	cout << "X          X        X         X" << endl;
	cout << "XXXXXXXXXXXX        XXXXXXXXXX" << endl;
	cout << "X          X        X         X"<<endl;
	cout << "X          X        X          X"<<endl;
	cout << "X          X        X         X"<<endl;
	cout << "X          X        XXXXXXXXXX"<<endl;

	return 0;


}
*/

//zadanie 2
/*
{
	cout << "      *      " << endl;
	cout << "     * *     " << endl;
	cout << " ***     *** " << endl;
    cout << "     * *  " << endl;
	cout << "    *   * " << endl;
	return 0;
}
*/



//zadanie 3
/*
{
	cout << "    Lista obecnosci" << endl;
	cout << "-------------------------" << endl;
	cout << "nr   imie   nazwisko" << endl;
	cout << "1    Jakub  Czeresnia" << endl;
	cout << "2    Piotr  Kowalski" << endl;
	cout << "3    Anna   Lewandowska" << endl;
	cout << "-------------------------" << endl;

return 0;
}
*/

//zadanie 4

/*
{
	// int a, b;
	float a, b;
	 cout << "Podaj dwie liczby" << endl;
	 cin >> a >> b;
	 cout << a * b << endl;
	 return 0;
}
*/

// zadanie 5

/*
{
	int a;
	cin >> a;
	double f = a;
	double c;
	c = 5.0 * (f - 32.0) / 9.0;
	cout << f << " stopni Fahrenheita to " << c << " stopni Celsjusza." << endl;
	return 0;
}
*/

//zadanie 6

/*
{

	cout << "Podaj imie, nazwisko i wiek" << endl;
   string imie;
   string nazwisko;
   int wiek;
   cin >> imie >> nazwisko >> wiek;

   cout << "Nazywasz sie " << imie << " " << nazwisko << " " << "i masz" << " " << wiek << " " << "lat" << endl;

	return 0;


}
*/

//zadanie 7 
/*
{
	int a, b;
	cout << "podaj dwie liczby";
	cin >> a >> b;
	cout << "Suma:" << a + b << endl;
	cout << "Roznica:" << a - b << endl;
	cout << "Iloczyn:" << a * b << endl;
	cout << "Iloraz:" << a / b << endl;
	cout << "Reszta z dzielenia:" << a % b << endl;
	return 0;
}
*/

//zadanie 8
/*
{
	double a, b;
	cout << "podaj dwie liczby";
	cin >> a >> b;
	cout << "Suma:" << a + b << endl;
	cout << "Roznica:" << a - b << endl;
	cout << "Iloczyn:" << a * b << endl;
	cout << "Iloraz:" << a / b << endl;
	return 0;
}
*/

//zadanie 9
/*
{
	float pi;
	cout << "podaj promien kola";
	double r;
	cin >> r;
	pi = 3.1415926535;
	cout << "pole kola wynosi: " << pi * r * r << " " << "obwod kola wynosi: " << 2 * pi * r << endl;

	return 0;
}
*/

//zadanie 10
/*
{
	cout << "Podaj dlugosc i szerokosc prostokata";
	double a;
	double b;
	cin >> a >> b;
	cout << "pole:" << " " << a * b << " " << "obwod:" << a + a + b + b << endl;

	return 0;
}
*/

//zadanie 11
/*
{
	double a;
	cout<<"Podaj temp. w stopniach Celsjusza:"<<endl;
	cin >> a;
	cout << "Temp. w stopniach Fahrenheita: " << fixed << setprecision(2) << a * 9.0 / 5.0 + 32.0 << endl;

	return 0;
}
*/

//zadanie 12

/*
{
	cout << "podaj sekundy" << endl;
	int a;
	cin >> a;

	cout << a/60 <<" minut" <<" "<< a % 60 << " sekund" << endl;
	return 0;
}
*/

//zadanie 13
/*
{
cout << "podaj minuty" << endl;
int a;
cin >> a;
cout << a / 60 << " godzin" << " " << a % 60 << " minut" << endl;
return 0;
}
*/

//zadanie 14a
/*
{
	cout << "podaj trzy liczby:" << endl;
	double x;
	double a, b, c;
	cin >> a >> b >> c;
	 x = (a + b + c) / 3.0;
	cout << "srednia arytmetyczna wynosi: " << x << endl;
	return 0;

}
*/

//zadanie 14b
/*
{
	cout << "podaj trzy liczby:" << endl;
	double x;
	double a, b, c;
	cin >> a >> b >> c;
	x = (a + b + c) / 3.0;
	cout << "srednia arytmetyczna wynosi: " << fixed << setprecision(1) << x << endl;
	return 0;

}
*/

//zadanie 14c
/*
{
	cout << "podaj trzy liczby:" << endl;
	double x;
	double a, b, c;
	cin >> a >> b >> c;
	x = (a + b + c) / 3.0;
	cout << "srednia arytmetyczna wynosi: " << fixed << setprecision(2) << x << endl;
	return 0;

}
*/

//zadanie 14d
/*
{
	cout << "podaj trzy liczby:" << endl;
	double x;
	double a, b, c;
	cin >> a >> b >> c;
	x = (a + b + c) / 3.0;
	cout << "srednia arytmetyczna wynosi: " << fixed << setprecision(4) << x << endl;
	return 0;

}
*/

//zadanie 15
/*
{
	cout << " podaj cene i liczbe sztuk" << endl;
	double c;
	int s;
	cin >> c >> s;
	cout << "--------------------------------------" << endl;
	cout << "cena:           " << c << endl;
	cout << "liczba sztuk:   " << s << endl;
	cout << "razem:          " << c * s << endl;
	cout << "----------------------------------------" << endl;
	return 0;

}
*/

//zadanie 16
/*
{
	cout << "podaj trzy liczby" << endl;
	int a, b,c;
	cin >> a >> b >> c;
	cout << "wynik: " << (a + b) / c << endl;
	return 0;

}
*/

//zadanie16b
/*
{
	cout << "podaj trzy liczby" << endl;
	double a, b, c;
	cin >> a >> b >> c;
	cout << "wynik: " << (a + b) / c << endl;
	return 0;

}
*/

//zadanie17
/*
{
	cout << "podaj znak i liczbe calkowita" << endl;
	char znak;
	int liczba;
	cin >> znak >> liczba;
	cout << "znak: " << znak << " liczba: " << liczba << endl;
	return 0;
	}
*/

//zadanie17b
/*
{
	cout << "podaj znak i liczbe calkowita" << endl;
	char znak;
	int liczba;
	cin >> znak >> liczba;
	cout << "znak: " << znak << " liczba: " << liczba << endl;
	if (znak == 'A')
		cout << "Jest to znak A" << endl;
	else if (znak == 'B')
		cout << "Jest to znak B" << endl;
	else if (znak == 'C')
		cout << "Jest to znak C" << endl;
	return 0;
}
*/

//zadanie 18
/*
{
	cout << "podaj imie i nazwisko" << endl;
	string a, b;
	cin >> a >> b;
	cout << "+---------------------------------------+" << endl;
	cout << "|IMIE:         " << a << "                       |" << endl;
	cout << "|NAZWISKO:     " << b << "                       |" << endl;
	cout << "+---------------------------------------+" << endl;

	return 0;
}
*/

//zadanie 19
/*
{
	char str[20];

	cout << "nr    nazwa           cena" << endl;
	
	cout << "1" << setw(10) << "mleko" << setw(15) << "5zl" << endl;
	cout << "2" << setw(10) << "chleb" << setw(15) << "2zl" << endl;
	cout << "3" << setw(10) << "jogurt" << setw(15) << "4zl" << endl;
	return 0;
}
*/

//zadanie 20
/*
{
	cout << "podaj dwie liczby" << endl;
	double a, b;
	cin >> a >> b;
	cout << a << " " << b << " ";
	return 0;
}
*/

//zadanie 20b
/*
{
	cout << "podaj dwie liczby" << endl;
	double a, b;
	cin >> a >> b;
	cout<<"Dwa miejsca po przecinku"<<endl;
	cout << fixed << setprecision(2) << a << " " << b << " ";
	return 0;
}
*/



