#include <io.h>
#include <fcntl.h>
#include "Authorization.hpp"


int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	
	Start();

	delete[]loginArr;
	delete[]passArr;
	delete[]statusArr;
	delete[]userIdArr;

	if (isStorageCreated)
	{
		delete[]idArr;
		delete[]nameArr;
		delete[]countArr;
		delete[]priceArr;
	}


	return 0;
}


/*
	авторизация: ввод логина и пароля
	аккаунты: бд пользователей + функции. Суперадмин, админ, пользователь
	продажи: покупка, оплата, чек
	склад: бд товаров, функции
	служебные: всяка для работы программы
*/

/*
	
*/