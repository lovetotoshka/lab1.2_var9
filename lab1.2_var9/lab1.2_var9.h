/*1) Определить состояние класса.
* (х^2 + у^2)^ 2 = 2 а^2(х^2 - у^2).
* p^2= 2а^2 cos2φ.

2) Разработать необходимые конструкторы и методы получения и изменения параметров, определяющих кривую.

3) Вернуть расстояние до центра в полярной системе координат в зависимости от угла для точки
принадлежащей лемнискате.
   p= sqrt (2а^2 cos2φ)

4) Вернуть радиус кривизны в зависимости от угла полярного радиуса.
   R =  2c^2/ 3 sqrt (2а^2 cos2φ)

5) Вернуть радиуса кривизны в зависимости от длины полярного радиуса.
   R =  2c^2/3p

6) Вернуть площадь полярного сектора лемнискаты в зависимости от угла полярного радиуса.
   S = (с^2)/2   * sin(2 alpha )    0<= alpha <= pi/4

7) Вернуть площадь лемнискаты.
   2*(c^2)


Разработать диалоговую программу для тестирования класса.*/

#include <math.h>
//#include "gtest/gtest.h"
class Lemniscata_Bernoulli {
private:
	double a;

public:
	static constexpr double ABS_ERROR = 0.000000000000001;
	Lemniscata_Bernoulli();
	Lemniscata_Bernoulli(double a);

	double getA();
	void setA(double a);

	double getPolarRadiosDependOnPhi(double angle);//p= sqrt (2а^2 cos2φ)  Вернуть расстояние до центра в полярной системе координат в зависимости от угла для точки принадлежащей лемнискате.
	double getRadiusOfCurvatureDependingOnPhi(double angle); // R =  2c^2/ 3 sqrt (2а^2 cos2φ) радиус кривизны в зависимости от угла полярного радиуса.
	double getRadiusOfCurvatureDependingOnPolarRadius(double p);// R = 2c ^ 2 / 3p Вернуть радиуса кривизны в зависимости от длины полярного радиуса.
	double getAreaOfThepolarSectorDependingOnPhi(double angle);//S = (с^2)/2   * sin(2 alpha )    0<= alpha <= pi/4 Вернуть площадь полярного сектора лемнискаты в зависимости от угла полярного радиуса.
	double getSquare(); //Вернуть площадь лемнискаты. 2*(c^2)

};
