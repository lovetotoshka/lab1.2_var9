#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include "lab1.2_var9.h"
using namespace Lab2;


int main(int argc, char** argv)
	{
		const double PI = 3.141592653589;

		setlocale(LC_ALL, "Russian");
		try
		{
			double a;
			std::cout << "¬ведите параметр лемнискаты" << std::endl;
			getNum(a);
			Lemniscata_Bernoulli lb(a);
			std::cout << "a: " << a << std::endl << std::endl;
			double angle;
			std::cout << "¬ведите пол€рный угол в радианах от 0 до 2*PI" << std::endl;
			getNum(angle, 0, 2*PI);
			std::cout << "¬ернуть рассто€ние до центра в пол€рной системе координат в зависимости от угла\nдл€ точки принадлежащей лемнискате.: " 
				<< lb.getPolarRadiosDependOnPhi(angle) << std::endl;
			std::cout << "–адиус кривизны в зависимости от угла пол€рного радиуса.: " << 
				lb.getRadiusOfCurvatureDependingOnPhi(angle) << std::endl;
			double p;
			std::cout << "¬ведите пол€рный радиус" << std::endl;
			getNum(p, 0, 1.41421356237309*a);
			std::cout << "¬ернуть радиус кривизны в зависимости от длины пол€рного радиуса: " << 
				lb.getRadiusOfCurvatureDependingOnPolarRadius(p) << std::endl;
			std::cout << "¬ведите пол€рный угол в радианах от 0 до pi/2" << std::endl;
			getNum(angle, 0, PI/2);
			std::cout << "¬ернуть площадь пол€рного сектора лемнискаты в зависимости от угла пол€рного радиуса: " 
				<< lb.getAreaOfThepolarSectorDependingOnPhi(angle) << std::endl;
			std::cout << "¬ернуть площадь лемнискаты: " << lb.getSquare() << std::endl;

		}
		catch (std::exception ex)
		{
			std::cout << "ќшибка: " << ex.what() << std::endl;
		}

		_CrtDumpMemoryLeaks();
		return 0;
	}