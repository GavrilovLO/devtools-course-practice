#include <gtest/gtest.h>
#include "include/complex_number.h"

TEST(Gavrilov_Leon_ComplexNumberTest, Test_Can_Create_Zero) {
    // Arrange
    double re = 0.0;
    double im = 0.0;

    // Act
    ComplexNumber z(re, im);

    // Assert
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}

TEST(Gavrilov_Leon_ComplexNumberTest, Test_Sum_First_And_Second) {
    // Arrange
    int a = 3;
    int b = 5;
    ComplexNumber result = 0;

    // Act
    ComplexNumber num1(a, b);
    ComplexNumber num2(b, a);
    result = num1 + num2;

    // Assert
    EXPECT_EQ(8, result.getRe());
    EXPECT_EQ(8, result.getIm());
}

TEST(Gavrilov_Leon_Test, Test_Can_Get_Parts_Of_Value) {
    // Arrange
    double re = 8.0;
    double im = 0.3;

    // Act
    ComplexNumber var(re, im);

    // Assert
    EXPECT_EQ(re, var.getRe());
    EXPECT_EQ(im, var.getIm());
}