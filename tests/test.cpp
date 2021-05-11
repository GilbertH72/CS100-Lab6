#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

int main(int argc, char** argv) {
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}

TEST(ConstructorTest, DefaultRectangle)
{
   Rectangle* test = new Rectangle(0, 0);
   EXPECT_EQ(test->get_width(), 0);
   EXPECT_EQ(test->get_height(), 0);
   delete test;
}

TEST(ConstructorTest, PositiveRectangle)
{
   Rectangle* test = new Rectangle(6, 7);
   EXPECT_EQ(test->get_width(), 6);
   EXPECT_EQ(test->get_height(), 7);
   delete test;
}

TEST(ConstructorTest, NegativeRectangle)
{
   Rectangle* test = new Rectangle(-6, -7);
   EXPECT_EQ(test->get_width(), -6);
   EXPECT_EQ(test->get_height(), -7);
   delete test;
}

TEST(ConstructorTest, SemiNegativeReactangle) {
   Rectangle* test = new Rectangle(-12, 5);
   EXPECT_EQ(test->get_width(), -12);
   EXPECT_EQ(test->get_height(), 5);
   delete test;
}

TEST(ConstructorTest, LargeRectangle) {
   Rectangle* test = new Rectangle(23, 68);
   EXPECT_EQ(test->get_width(), 23);
   EXPECT_EQ(test->get_height(), 68);
   delete test;
}

TEST(ConstructorTest, SquareRectangle) {
   Rectangle* test = new Rectangle(9, 9);
   EXPECT_EQ(test->get_width(), 9);
   EXPECT_EQ(test->get_height(), 9);
   delete test;
}

TEST(PerimeterTest, ZeroPerimeter) {
   Rectangle* test = new Rectangle(0, 0);
   EXPECT_EQ(test->perimeter(), 0);
   delete test;
}

TEST(PerimeterTest, PostitivePerimeter) {
   Rectangle* test = new Rectangle(6, 7);
   EXPECT_EQ(test->perimeter(), 26);
   delete test;
}

TEST(PerimeterTest, NegativePerimeter) {
   Rectangle* test = new Rectangle(-6, -7);
   EXPECT_EQ(test->perimeter(), -26);
   delete test;
}

TEST(PerimeterTest, LargePerimeter) {
   Rectangle* test = new Rectangle(23, 68);
   EXPECT_EQ(test->perimeter(), 182);
   delete test;
}

TEST(AreaTest, DefaultArea) {
   Rectangle* test = new Rectangle(0, 0);
   EXPECT_EQ(test->area(), 0);
   delete test;
}

TEST(AreaTest, PositiveArea) {
   Rectangle* test = new Rectangle(6, 7);
   EXPECT_EQ(test->area(), 42);
   delete test;
}

TEST(AreaTest, NegativeArea) {
   Rectangle* test = new Rectangle(-6, -7);
   EXPECT_EQ(test->area(), 42);
   delete test;
}

TEST(AreaTest, SemiNegativeArea) {
   Rectangle* test = new Rectangle(-12, 5);
   EXPECT_EQ(test->area(), -60);
   delete test;
}

TEST(AreaTest, LargeArea) {
   Rectangle* test = new Rectangle(23, 68);
   EXPECT_EQ(test->area(), 1564);
   delete test;
}

TEST(AreaTest, SquareArea) {
   Rectangle* test = new Rectangle(9, 9);
   EXPECT_EQ(test->area(), 81);
   delete test;
}
