#include <iostream>
#include <math.h>
#include "lab1.2_var9.h"


int main(int argc, char** argv)
	{
		setlocale(LC_ALL, "Russian");
		try
		{
			double a;
			std::cout << "������� �������� ����������" << std::endl;
			std::cin >> a;
			Lemniscata_Bernoulli lb(a);
			std::cout << "a: " << a << std::endl << std::endl;
			double angle;
			std::cout << "������� �������� ���� � ��������" << std::endl;
			std::cin >> angle;
			std::cout << "������� ���������� �� ������ � �������� ������� ��������� � ����������� �� ����\n��� ����� ������������� ����������.: " << lb.getPolarRadiosDependOnPhi(angle) << std::endl;
			std::cout << "������ �������� � ����������� �� ���� ��������� �������.: " << lb.getRadiusOfCurvatureDependingOnPhi(angle) << std::endl;
			double p;
			std::cout << "������� �������� ������" << std::endl;
			std::cin >> p;
			std::cout << "������� ������ �������� � ����������� �� ����� ��������� �������: " << lb.getRadiusOfCurvatureDependingOnPolarRadius(p) << std::endl;
			std::cout << "������� ������� ��������� ������� ���������� � ����������� �� ���� ��������� �������: " << lb.getAreaOfThepolarSectorDependingOnPhi(angle) << std::endl;
			std::cout << "������� ������� ����������: " << lb.getSquare() << std::endl;

		}
		catch (std::exception ex)
		{
			std::cout << "������: " << ex.what() << std::endl;
		}
		return 0;
	}