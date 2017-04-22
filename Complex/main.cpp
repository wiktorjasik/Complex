#include "Complex.h"

int main()
{
	Complex a, b;
	int choose;
	for (;;)
	{
		system("cls");
		cout << "KALKULATOR LICZB ZESPOLONYCH\n\n";
		cout << "1. Wpisz liczby a i b\n";
		cout << "2. Wczytaj liczby a i b z pliku\n";
		cout << "3. Dzialanie a+b\n";
		cout << "4. Dzialanie a-b\n";
		cout << "5. Dzialanie a*b\n";
		cout << "6. Dzialanie a/b\n";
		cout << "7. Zapisz liczby do pliku\n";
		cout << "8. Wyjscie\n\n";
		cout << "Twoj wybor: ";
		cin >> choose;

		switch (choose)
		{
		case 1:
			system("cls");
			cin >> a >> b;
			system("pause");
			break;
		case 2:
			system("cls");
			a.loadA();
			b.loadB();
			system("pause");
			break;
		case 3:
			system("cls");
			cout << a + b << endl;
			system("pause");
			break;
		case 4:
			system("cls");
			cout << a - b << endl;
			system("pause");
			break;
		case 5:
			system("cls");
			cout << a * b << endl;
			system("pause");
			break;
		case 6:
			system("cls");
			cout << a / b << endl;
			system("pause");
			break;
		case 7:
			system("cls");
			a.saveA();
			b.saveB();
			system("pause");
			break;
		case 8:
			system("cls");
			exit(0);
			break;
		default:
			break;
		}

	}
	
	return 0;
}