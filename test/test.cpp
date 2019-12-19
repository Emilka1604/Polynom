#include "stack.h"
#include <gtest.h>

TEST(polynom, can_add_polynoms) {
	polynom p1, p2, p3;
	p1.parser("X^2+6*Z^5*X^3");
	p2.parser("-X^2-6*Z^5*X^3");
	p3.parser("0");
	EXPECT_TRUE((p1 + p2).printp() == (p3).printp());
}
TEST(polynom, can_subtract_polynoms) {
	polynom p1, p2, p3;
	p1.parser("Z");
	p2.parser("Z");
	p3.parser("0");
	EXPECT_TRUE((p1 - p2).printp() == (p3).printp());
}
TEST(polynom, can_mult_polynoms) {
	polynom p1, p2, p3;
	p1.parser("Z");
	p2.parser("Z");
	p3.parser("Z^2");
	EXPECT_TRUE((p1 * p2).printp() == (p3).printp());
}


