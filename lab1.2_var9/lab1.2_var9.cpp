#include "lab1.2_var9.h"

namespace Lab2 {

	double getNum(double& a, double b, double c)
	{
		while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
		{
			std::cout << "\tВведите значение: ";
			std::cin >> a;

			if (std::cin.fail()) // если предыдущее извлечение оказалось неудачным,
			{
				std::cin.clear(); // то возвращаем cin в 'обычный' режим работы
				std::cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
				std::cout << "\tERROR!!!" << std::endl;
			}
			else {// если всё хорошо, но значение выходит за границы
				if ((a < b) || (a > c)) {
					std::cin.clear(); // возвращаем cin в 'обычный' режим работы
					std::cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
					std::cout << "\tERROR!" << std::endl;
				}
				else { //всё хорошо
					std::cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
					return a;
				}
			}
		}
	}


	// Пустой инициализитор лемнискаты 
	Lemniscata_Bernoulli::Lemniscata_Bernoulli()
		: a(5)
	{
	}


	// Инициализатор лемнискаты с заданным параметром
	Lemniscata_Bernoulli::Lemniscata_Bernoulli(double a)
		: a(a)
	{
	}

	// Вернуть параметр лемнискаты
	double Lemniscata_Bernoulli::getA() const
	{
		return this->a;
	}


	// Установить параметр лемнискаты
	void Lemniscata_Bernoulli::setA(double a)
	{
		this->a = a;
	}


	// Вернуть расстояние до центра в полярной системе координат в зависимости от угла для точки принадлежащей лемнискате
	double Lemniscata_Bernoulli::getPolarRadiosDependOnPhi(double angle) const
	{
		return pow((2 * (this->a) * (this->a) * abs(cos(angle))), 0.5);
	}


	// Радиус кривизны в зависимости от угла полярного радиуса
	double Lemniscata_Bernoulli::getRadiusOfCurvatureDependingOnPhi(double angle) const 
	{
		return 2 * (this->a) * (this->a) / (3 * pow(2 * (this->a) * (this->a) * abs(cos(angle)), 0.5));
	}


	// Радиус кривизны в зависимости от длины полярного радиуса
	double Lemniscata_Bernoulli::getRadiusOfCurvatureDependingOnPolarRadius(double p) const
	{
		return 2 * (this->a) * (this->a) / (3 * p);
	}


	// Вернуть площадь полярного сектора лемнискаты в зависимости от угла полярного радиуса
	double Lemniscata_Bernoulli::getAreaOfThepolarSectorDependingOnPhi(double angle) const
	{
		return 0.5 * (this->a) * (this->a) * sin(2 * angle);
	}

	// Площадь лемнискаты
	double Lemniscata_Bernoulli::getSquare() const
	{
		return 2 * (this->a) * (this->a);
	}

}