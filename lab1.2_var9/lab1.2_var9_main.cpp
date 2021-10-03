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
			std::cout << "������� �������� ����������" << std::endl;
			getNum(a);
			Lemniscata_Bernoulli lb(a);
			std::cout << "a: " << a << std::endl << std::endl;
			double angle;
			std::cout << "������� �������� ���� � �������� �� 0 �� 2*PI" << std::endl;
			getNum(angle, 0, 2*PI);
			std::cout << "������� ���������� �� ������ � �������� ������� ��������� � ����������� �� ����\n��� ����� ������������� ����������.: " 
				<< lb.getPolarRadiosDependOnPhi(angle) << std::endl;
			std::cout << "������ �������� � ����������� �� ���� ��������� �������.: " << 
				lb.getRadiusOfCurvatureDependingOnPhi(angle) << std::endl;
			double p;
			std::cout << "������� �������� ������" << std::endl;
			getNum(p, 0, 1.41421356237309*a);
			std::cout << "������� ������ �������� � ����������� �� ����� ��������� �������: " << 
				lb.getRadiusOfCurvatureDependingOnPolarRadius(p) << std::endl;
			std::cout << "������� �������� ���� � �������� �� 0 �� pi/2" << std::endl;
			getNum(angle, 0, PI/2);
			std::cout << "������� ������� ��������� ������� ���������� � ����������� �� ���� ��������� �������: " 
				<< lb.getAreaOfThepolarSectorDependingOnPhi(angle) << std::endl;
			std::cout << "������� ������� ����������: " << lb.getSquare() << std::endl;

		}
		catch (std::exception ex)
		{
			std::cout << "������: " << ex.what() << std::endl;
		}

		_CrtDumpMemoryLeaks();
		return 0;
	}