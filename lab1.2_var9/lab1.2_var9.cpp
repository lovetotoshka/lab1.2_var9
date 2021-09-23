#include "lab1.2_var9.h"


Lemniscata_Bernoulli::Lemniscata_Bernoulli()
	: a(5)
{
}

Lemniscata_Bernoulli::Lemniscata_Bernoulli(double a)
	: a(a)
{
}

double Lemniscata_Bernoulli::getA()
{
	return this->a;
}

void Lemniscata_Bernoulli::setA(double a)
{
	this->a = a;
}
/*std::pair<double, double> Lemniscata_Bernoulli::calcInCartesian(double x)
{
	if (abs(this->a - x) < LinearStrophoid::ABS_ERROR)
		return std::make_pair(0, 0);
	if (x < -a || x > a)
		throw std::runtime_error("Функция определна на [-" + std::to_string(this->a) + "; " + std::to_string(this->a) + "]");
	double val = x * sqrt((this->a + x) / (this->a - x));
	return std::make_pair(val, -val);
}
*/
/*double Lemniscata_Bernoulli::calcInPolar(double angle)
{
	if (abs(cos(angle)) < LinearStrophoid::ABS_ERROR)
		return 0;
	return -(a * cos(angle * 2)) / cos(angle);
}
*/

double Lemniscata_Bernoulli::getPolarRadiosDependOnPhi(double angle)
{
	return pow((2* a * a * cos(angle)), 0.5);
}
double Lemniscata_Bernoulli::getRadiusOfCurvatureDependingOnPhi(double angle) // R =  2c^2/ 3 sqrt (2а^2 cos2φ) радиус кривизны в зависимости от угла полярного радиуса.
{
	return 2 * a * a / (3 * pow(2 * a * a * cos(angle), 0.5));
}

double Lemniscata_Bernoulli::getRadiusOfCurvatureDependingOnPolarRadius(double p)// R = 2c ^ 2 / 3p Вернуть радиуса кривизны в зависимости от длины полярного радиуса.
{
	return 2 * a * a / (3 * p);
}

double Lemniscata_Bernoulli::getAreaOfThepolarSectorDependingOnPhi(double angle) //S = (с^2)/2   * sin(2 alpha )    0<= alpha <= pi/4 Вернуть площадь полярного сектора лемнискаты в зависимости от угла полярного радиуса.
{
	return 0.5 * a * a * sin(2 * angle);
}

double Lemniscata_Bernoulli::getSquare() //Вернуть площадь лемнискаты. 2*(c^2)
{
	return 2 * a * a;
}

