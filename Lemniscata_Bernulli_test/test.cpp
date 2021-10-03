#include "pch.h"
//#include "../../lab1.2_var9/lab1.2_var9/lab1.2_var9.cpp"
#include "../../lab1.2_var9/lab1.2_var9/lab1.2_var9.h"

using namespace Lab2;


TEST(Lemniscata_Bernoulli, testContructor)
{
	Lemniscata_Bernoulli lb1(10);
	EXPECT_EQ(10, lb1.getA());

	Lemniscata_Bernoulli lb2;
	EXPECT_EQ(5, lb2.getA());

	Lemniscata_Bernoulli lb3(5);
	lb3.setA(10);
	EXPECT_EQ(lb3.getA(), 10);
}


TEST(Lemniscata_Bernoulli, TestgetPolarRadiosDependOnPhi)
{
	Lemniscata_Bernoulli lb(10);
	ASSERT_NEAR(10.395213377974882, lb.getPolarRadiosDependOnPhi(1),  Lemniscata_Bernoulli::ABS_ERROR);

}


TEST(Lemniscata_Bernoulli, TestgetRadiusOfCurvatureDependingOnPhi)
{
	Lemniscata_Bernoulli lb(10);
	ASSERT_NEAR(6.4132081028676469, lb.getRadiusOfCurvatureDependingOnPhi(1), Lemniscata_Bernoulli::ABS_ERROR);
}


TEST(Lemniscata_Bernoulli, TestgetRadiusOfCurvatureDependingOnPolarRadius)
{
	Lemniscata_Bernoulli lb(10);
	ASSERT_NEAR(22.222222222222221, lb.getRadiusOfCurvatureDependingOnPolarRadius(3), Lemniscata_Bernoulli::ABS_ERROR);
}


TEST(Lemniscata_Bernoulli, TestgetAreaOfThepolarSectorDependingOnPhi)
{
	Lemniscata_Bernoulli lb(10);
	ASSERT_NEAR(45.464871341284088, lb.getAreaOfThepolarSectorDependingOnPhi(1), Lemniscata_Bernoulli::ABS_ERROR);
}

TEST(Lemniscata_Bernoulli, TestgetSquare)
{
	Lemniscata_Bernoulli lb(10);
	ASSERT_NEAR(200, lb.getSquare(), Lemniscata_Bernoulli::ABS_ERROR);
}