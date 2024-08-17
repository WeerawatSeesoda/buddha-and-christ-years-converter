#include <gtest/gtest.h>
#include "../src/logic.cpp"
#include "../src/menu.cpp"

TEST(Logic, BuddhaToChrist) {
	std::string expected = "0";
	std::string result = convertYear("BtoC", 543);
	EXPECT_EQ(expected, result);
}
TEST(Logic, ChristToBuddha) {
	std::string expected = "543";
	std::string result = convertYear("CtoB", 0);
	EXPECT_EQ(expected, result);
}
TEST(Logic, PeriodBtoC) {
	std::string expected = "1991-2000";
	std::string result = getPeriod("BtoC", 2534, 2543);
	EXPECT_EQ(expected, result);
}
TEST(Logic, PeriodCtoB) {
	std::string expected = "2533-2566";
	std::string result = getPeriod("CtoB", 1990, 2023);
	EXPECT_EQ(expected, result);
}

TEST(Menu, Correct) {
	auto buffer = selectMenu(1);
	EXPECT_EQ("Buddha year", buffer.first);
	EXPECT_EQ(1, buffer.second);
}
TEST(Menu, Incorrect) {
	auto buffer = selectMenu(0);
	EXPECT_EQ("Not found.", buffer.first);
	EXPECT_EQ(0, buffer.second);

	buffer = selectMenu(-1);
	EXPECT_EQ("Not found.", buffer.first);
	EXPECT_EQ(-1, buffer.second);
}
TEST(Menu, Exit) {
	auto buffer = selectMenu(5);
	EXPECT_EQ("EXIT", buffer.first);
	EXPECT_EQ(5, buffer.second);
}

