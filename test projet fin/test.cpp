extern "C"{
#include "../Jeu/plomber.h";
}
#include "pch.h"
void main() {
	Tuyau tuyau = { 1, 1, 0, 0 };

}

	

TEST(Truc, Machin) {
	EXPECT_EQ(tuyau.left, 0);
	EXPECT_EQ(tuyau.right, 0);
	EXPECT_EQ(tuyau.up, 1);
	EXPECT_EQ(tuyau.down, 1);
}