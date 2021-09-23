#include <iostream>
#include <math.h>
#include "lab1.2_var9.h"


int main(int argc, char** argv)
	{
		setlocale(LC_ALL, "Russian");
		try
		{
			double a;
			std::cout << "¬ведите параметр лемнискаты" << std::endl;
			std::cin >> a;
			Lemniscata_Bernoulli lb(a);
			std::cout << "a: " << a << std::endl << std::endl;
			double angle;
			std::cout << "¬ведите пол€рный угол в радианах" << std::endl;
			std::cin >> angle;
			std::cout << "¬ернуть рассто€ние до центра в пол€рной системе координат в зависимости от угла\nдл€ точки принадлежащей лемнискате.: " << lb.getPolarRadiosDependOnPhi(angle) << std::endl;
			std::cout << "–адиус кривизны в зависимости от угла пол€рного радиуса.: " << lb.getRadiusOfCurvatureDependingOnPhi(angle) << std::endl;
			double p;
			std::cout << "¬ведите пол€рный радиус" << std::endl;
			std::cin >> p;
			std::cout << "¬ернуть радиус кривизны в зависимости от длины пол€рного радиуса: " << lb.getRadiusOfCurvatureDependingOnPolarRadius(p) << std::endl;
			std::cout << "¬ернуть площадь пол€рного сектора лемнискаты в зависимости от угла пол€рного радиуса: " << lb.getAreaOfThepolarSectorDependingOnPhi(angle) << std::endl;
			std::cout << "¬ернуть площадь лемнискаты: " << lb.getSquare() << std::endl;

		}
		catch (std::exception ex)
		{
			std::cout << "ќшибка: " << ex.what() << std::endl;
		}
		return 0;
	}