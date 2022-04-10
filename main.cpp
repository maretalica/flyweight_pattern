#include "Factory.h"
#include "GameManager.h"

int main()
{
	Factory factory;
	GameManager gamemanager;
	gamemanager.generateObject();
	cout << "List Object " << endl;
	gamemanager.printArray();
	gamemanager.printVectorSize();

	int pilih = 0;
	while (pilih != 4)
	{
		cout << endl;
		cout << "1. Gunakan Object" << endl;
		cout << "2. Display Semua Objects" << endl;
		cout << "3. List Object Vector" << endl;
		cout << "4. Keluar" << endl;
		cout << "[] : "; cin >> pilih;

		switch (pilih)
		{
		case 1:
			gamemanager.useObject();
			break;
		case 2:
			gamemanager.printArray();
			break;
		case 3:
			gamemanager.printVectorSize();
			break;
		}
	}
}
