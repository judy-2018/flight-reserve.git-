#include "../Seat.h"
#include <gtest/gtest.h>

TEST(TestSeat, TestSeatID1) {
	Seat newSeat = Seat("2B");
  EXPECT_EQ("2B", newSeat.getSeat());
  EXPECT_TRUE(true);
  ASSERT_EQ("2B", newSeat.getSeat());
}

TEST(TestSeat, TestSeatID2) {
	Seat newSeat = Seat("2B");
	ASSERT_EQ("2B", newSeat.getSeat());
}

TEST(TestSeat, TestSeatID3) {
	Seat newSeat = Seat("2B");
	ASSERT_EQ(true, newSeat.isAvaliable());
}

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
