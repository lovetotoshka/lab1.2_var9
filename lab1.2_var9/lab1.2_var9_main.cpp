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
			std::cout << "\t�������� ����������" << std::endl;
			getNum(a);
			Lemniscata_Bernoulli lb(a);
			std::cout << "\t(x^2 + y^2)^2 = " << 2*a*a << "*(x^2 - y^2)" << std::endl << std::endl;

			const char* msgs[] = { 
				"\t================================================================================",
				"\t0 - �����", 
				"\t1 - ���������� �� ������ � �������� ������� ��������� � ����������� �� ����\n\t    ��� �����, ������������� ���������� ", 
				"\t2 - ������ �������� � ����������� �� ���� ��������� ������� ",
				"\t3 - ������ �������� � ����������� �� ����� ��������� ������� ", 
				"\t4 - ������� ��������� ������� ���������� � ����������� �� ���� ��������� ������� ", 
				"\t5 - ������� ����������",
				"\t6 - �������� �������� ����������",
				"\t=================================================================================" };

			int start = 1;
			while (start != 0) {
				for (int i = 0; i < 9; i++)
					std::cout << msgs[i] << std::endl;
				double choice;
				getNum(choice, 0, 6);
				if (choice == 0)
					start = 0;
				if (choice == 1) {
					double angle;
					std::cout << "\n\t������� �������� ���� � �������� �� 0 �� 2*PI" << std::endl;
					getNum(angle, 0, 2 * PI);
					std::cout << "\t���������� �� (0,0) �� �����, ������������� ����������: " << lb.getPolarRadiosDependOnPhi(angle) << std::endl;
				}
				if (choice == 2) {
					double angle;
					std::cout << "\n\t������� �������� ���� � �������� �� 0 �� 2*PI" << std::endl;
					getNum(angle, 0, 2 * PI);
					std::cout << "\t������ �������� � ����������� �� ���� ��������� �������: " <<
						lb.getRadiusOfCurvatureDependingOnPhi(angle) << std::endl;
				}
				if (choice == 3) {
					double p;
					std::cout << "\n\t������� �������� ������ � �������� �� 0 �� " << 1.41421356237309 * a << std::endl;
					getNum(p, 0, 1.41421356237309 * a);
					std::cout << "\n\tP����� �������� � ����������� �� ����� ��������� �������: " <<
						lb.getRadiusOfCurvatureDependingOnPolarRadius(p) << std::endl;
				}
				if (choice == 4) {
					double angle;
					std::cout << "\n\t������� �������� ���� � �������� �� 0 �� pi/2" << std::endl;
					getNum(angle, 0, PI / 2);
					std::cout << "\t������� ��������� ������� ���������� � ����������� �� ���� ��������� �������: "
						<< lb.getAreaOfThepolarSectorDependingOnPhi(angle) << std::endl;
				}
				if (choice == 5) 
					std::cout << "\n\t������� ����������: " << lb.getSquare() << std::endl;
				if (choice == 6) {
					std::cout << "\t������ �������� ����������: " << a << "\n\t����� ��������" << std::endl;
					getNum(a);
					lb.setA(a);
					std::cout << "\t(x^2 + y^2)^2 = " << 2 * a * a << "*(x^2 - y^2)" << std::endl << std::endl;

				}

				

			}

		}
		catch (std::exception ex)
		{
			std::cout << "������: " << ex.what() << std::endl;
		}

		_CrtDumpMemoryLeaks();
		return 0;
	}