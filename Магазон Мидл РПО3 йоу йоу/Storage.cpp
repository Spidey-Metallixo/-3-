#include "Storage.hpp"

size_t sizeSt = 0;
size_t* idArr = nullptr;
std::wstring* nameArr = nullptr;
size_t* countArr = nullptr;
double* priceArr = nullptr;
bool isStorageCreated = false;

size_t maxStorageSize = 2000;
size_t currentStorageSize = 0;

void CreateStorage(int mode)
{
	if (mode == 0 && !isStorageCreated)
	{
		const size_t staticSize = 10;

		size_t idArrStatic[staticSize]{ 1,2,3,4,5,6,7,8,9,10 };
		std::wstring nameArrStatic[staticSize]
		{
			L"Электрогитара", L"Пинанино", L"Гармошка",
			L"Рояль", L"Синтезатор Orchid (от Tame Impala)", L"Скрипка",
			L"Тромбон", L"Кларнет", L"Гусли", L"Барабаны"
		};
		size_t countArrStatic[staticSize]{ 67,69,14,88,22,8,34,63,4,666 };
		double priceArrStatic[staticSize]{ 10000,14000,2000,23480,44000,8000,9000,6000,3000,10000 };

		sizeSt = staticSize;
		idArr = new size_t[sizeSt];
		nameArr = new std::wstring[sizeSt];
		countArr = new size_t[sizeSt];
		priceArr = new double[sizeSt];

		FillArray(idArrStatic, idArr, sizeSt);
		FillArray(nameArrStatic, nameArr, sizeSt);
		FillArray(countArrStatic, countArr, sizeSt);
		FillArray(priceArrStatic, priceArr, sizeSt);

		for (size_t i = 0; i < sizeSt; i++)
		{
			currentStorageSize += countArrStatic[i];
		}
		isStorageCreated = true;
	}
	else if (mode == 1)
	{
		// to do
	}
	else
	{
		std::wcout << L"Склад уже создан\n\n";
		Sleep(1500);
	}
}

void ShowStorage(int mode)
{
	if (mode == 0)
	{
		system("cls");

		std::wcout << L"\n\n\t\t\tПополнение товаров \"Music Mayhem\"\n\n";

		std::wcout << L"ID\t" << std::setw(40) << L"Название товара\t\t" << L"Кол-во\n\n";
		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(40) << nameArr[i] << L"\t" << countArr[i] << L"\t";
		}
		std::wcout << L"\n\n";
		std::wcout << L"Свободного места " << currentStorageSize << L" из " << maxStorageSize << L"\n\n";
	}
	else if (mode == 1)
	{

	}
}

void AddProduct()
{
	std::wstring chooseId, chooseCount, choose;

	while (true)
	{
		ShowStorage(1);

		std::wcout << L"Введите ID товара или \"exit\" для выхода: ";
		Getline(chooseId);

		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершение операции пополнения товара\n\n";
			Sleep(1500);
			return;
		}
		else if (IsNumber(chooseId))
		{
			int id = std::stoi(chooseId) - 1;
			if (id < 0 || id > sizeSt - 1)
			{
				Err();
			}
			else
			{
				std::wcout << L"Введите кол-во товара для пополнения: ";
				Getline(chooseCount);
				if (IsNumber(chooseCount))
				{
					size_t count = std::stoull(chooseCount);
					if (count < 0 && count > maxStorageSize - currentStorageSize)
					{
						// prodoljit tut
					}
				}
			}
		}
	}
}