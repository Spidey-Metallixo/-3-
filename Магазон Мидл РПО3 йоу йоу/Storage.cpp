#include "Storage.hpp"

size_t sizeSt = 0;
size_t* idArr = nullptr;
std::wstring* nameArr = nullptr;
size_t* countArr = nullptr;
double* priceArr = nullptr;

void CreateStorage(int mode)
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
}