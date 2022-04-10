#include "GameManager.h"

void GameManager::generateObject()
{
	srand(time(0));

	for (int i = 0; i < 9; i++)
	{
		array[i] = *factory.getObject(randomTipe(0 + rand() % 3));
		array[i].setKord(i);
		array[i].setUkuran(rand(), rand());
	}
}

void GameManager::printArray()
{
	for (int i = 0; i < 9; i++)
	{
		array[i].generate();
	}
	cout << endl;
}

void GameManager::useObject()
{
	int i;
	cout << "koordinat?" << endl;
	cout << "input koordinat : ";
	cin >> i;
	array[i].use();
	cout << endl;
	cout << "Object  " << array[i].getTipe() << " di " << i << " Dipakai";
}

void GameManager::printVectorSize()
{
	cout << "Object dibuat : ";
	for (auto i = factory.listOf.begin(); i != factory.listOf.end(); ++i)
	{
		cout << i->getTipe() << ", ";
	}
	cout << "Ukuran vector adalah " << factory.listOf.size() << endl;
}

string GameManager::randomTipe(int index)
{
	return type[index];
}
