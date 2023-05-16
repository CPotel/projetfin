#include "pch.h"
extern "C" {
#include "../Jeu/plomber.h"
}

Pipe myPipe;
//pipe.direction = { 1, 0, 1, 0 };
myPipe.direction[0] = 1;
myPipe.direction[1] = 0;
myPipe.direction[2] = 1;
myPipe.direction[3] = 0;

pipe.x = 0;
pipe.y = 0;
turn(&pipe);

TEST(turn, turn) {
	EXPECT_EQ(pipe.direction[0], 0);
	EXPECT_EQ(pipe.direction[1], 1);
	EXPECT_EQ(pipe.direction[2], 0);
	EXPECT_EQ(pipe.direction[3], 1);
}