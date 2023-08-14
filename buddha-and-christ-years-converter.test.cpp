#include "gtest/gtest.h"
#include "buddha-and-christ-years-converter.cpp"

TEST(Logic, BuddhaToChrist) {
	EXPECT_EQ(0, buddhaToChrist(543));
}
TEST(Logic, ChristToBuddha) {
	EXPECT_EQ(543, christToBuddha(0));
}
TEST(Logic, PeriodBtoC) {
	EXPECT_EQ("1991-2000", periodBtoC(2534, 2543));
}
TEST(Logic, PeriodCtoB) {
	EXPECT_EQ("2533-2566", periodCtoB(1990, 2023));
}

TEST(Menu, Correct) {
	std::pair buffer = selectMenu(1);
	EXPECT_EQ("Buddha year", buffer.first);
	EXPECT_EQ(1, buffer.second);
}
TEST(Menu, Incorrect) {
	std::pair buffer = selectMenu(0);
	EXPECT_EQ("Not found.", buffer.first);
	EXPECT_EQ(0, buffer.second);

	buffer = selectMenu(-1);
	EXPECT_EQ("Not found.", buffer.first);
	EXPECT_EQ(-1, buffer.second);
}
TEST(Menu, Exit) {
	std::pair buffer = selectMenu(5);
	EXPECT_EQ("EXIT", buffer.first);
	EXPECT_EQ(5, buffer.second);
}
