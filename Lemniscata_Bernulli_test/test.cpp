#include "pch.h"
//#include "../../lab1.2_var9/lab1.2_var9/lab1.2_var9.h"
#include "../../lab1.2_var9/lab1.2_var9/lab1.2_var9.cpp"
//#include "../../lab1.2_var9/lab1.2_var9/lab1.2_var9_main.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Lemniscata_Bernoulli, testContructor)
{
	Lemniscata_Bernoulli lb1(10);
	ASSERT_EQ(lb1.getA(), 10);

	Lemniscata_Bernoulli lb2;
	ASSERT_EQ(lb2.getA(), 5);

	Lemniscata_Bernoulli lb3(5);
	lb3.setA(10);
	ASSERT_EQ(lb3.getA(), 10);
}


TEST(Lemniscata_Bernoulli, TestgetPolarRadiosDependOnPhi)
{
	Lemniscata_Bernoulli lb(10);
	ASSERT_NEAR(lb.getPolarRadiosDependOnPhi(1), 10.395213377974882, Lemniscata_Bernoulli::ABS_ERROR);
	//ASSERT_NEAR(lb.getPolarRadiosDependOnPhi(1), 10.3952);

}


TEST(Lemniscata_Bernoulli, TestgetRadiusOfCurvatureDependingOnPhi)
{
	Lemniscata_Bernoulli lb(10);
	ASSERT_NEAR(lb.getRadiusOfCurvatureDependingOnPhi(1), 6.4132081028676469, Lemniscata_Bernoulli::ABS_ERROR);//10.395213377974882
}


TEST(Lemniscata_Bernoulli, TestgetRadiusOfCurvatureDependingOnPolarRadius)
{
	Lemniscata_Bernoulli lb(10);
	ASSERT_NEAR(lb.getRadiusOfCurvatureDependingOnPolarRadius(3), 22.222222222222221, Lemniscata_Bernoulli::ABS_ERROR);//22.222200000000001
}


TEST(Lemniscata_Bernoulli, TestgetAreaOfThepolarSectorDependingOnPhi)
{
	Lemniscata_Bernoulli lb(10);
	ASSERT_NEAR(lb.getAreaOfThepolarSectorDependingOnPhi(1), 45.464871341284088, Lemniscata_Bernoulli::ABS_ERROR);
}

TEST(Lemniscata_Bernoulli, TestgetSquare)
{
	Lemniscata_Bernoulli lb(10);
	ASSERT_NEAR(lb.getSquare(), 200, Lemniscata_Bernoulli::ABS_ERROR);
}