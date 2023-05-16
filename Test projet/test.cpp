#include "pch.h"
extern "C" {
#include "../Jeu/plomber.h"
}

Tuyau tuyau = { 1,1,0,0,0 };
turn(&tuyau);

TEST(Turn, Turn) {
	EXPECT_EQ(tuyau.left, 0);
	EXPECT_EQ(tuyau.right, 0);
	EXPECT_EQ(tuyau.up, 1);
	EXPECT_EQ(tuyau.down, 1);
}