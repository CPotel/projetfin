#include "pch.h"
extern "C" {
#include "../Jeu/plomber.h"
}



TEST(turn, turn) {

	Pipe myPipe;
<<<<<<< HEAD
	//pipe.direction = { 1, 0, 1, 0 };
=======
>>>>>>> 9caecfa9de8093af28bff0925ead6d7ecfc6e578
	myPipe.direction[0] = 1;
	myPipe.direction[0] = 1;
	myPipe.direction[1] = 0;
	myPipe.direction[2] = 1;
	myPipe.direction[3] = 0;

	myPipe.x = 0;
	myPipe.y = 0;
	turn(&myPipe);


	EXPECT_EQ(myPipe.direction[0], 0);
	EXPECT_EQ(myPipe.direction[1], 1);
	EXPECT_EQ(myPipe.direction[2], 0);
	EXPECT_EQ(myPipe.direction[3], 1);
<<<<<<< HEAD
}
=======
}

>>>>>>> 9caecfa9de8093af28bff0925ead6d7ecfc6e578
