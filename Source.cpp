#include <iostream>

void conferirMaiorEndereco(int *x, int *y)
{
	if(x > y)
	{
		std::cout << x << std::endl;
	}
	else
	{
		std::cout << y << std::endl;
	}
}

int main ()
{
	int num1, num2;

	conferirMaiorEndereco(&num1, &num2);

	system("pause");
	return 0;
}