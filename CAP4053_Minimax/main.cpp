//
//  main.cpp
//  CAP4053_Minimax
//
//  Created by kTeam on 11/19/17.
//  Copyright © 2017 kTeam. All rights reserved.
//

#include <iostream>
#include <cctype>
#include <ctime>
#include <cstdlib>

#include "Engine/GameEngine.h"


int main() {
	// Seed random number generator
	srand((unsigned)time(nullptr));
	
	// Run the game in a 600x800 portrait window
	GameEngine game{"2048 AI", 600, 800};
	return game.run();
}

#if 0
void playGame() {
	// Create the board and place first two random tiles
	Board board;
	board.placeRandom();
	board.placeRandom();
	
	// Main game loop
	while(!board.isGameOver()) {
		// Display board
		board.print();
		std::cout << std::endl;
		
		// Get input choice
		char choice;
		std::cout << "Direction [WASD] > ";
		std::cin >> choice;
		
		bool didMove = false;
		switch(::toupper(choice)) {
			case 'W':
				didMove = board.shiftTilesUp();
				break;
			
			case 'A':
				didMove = board.shiftTilesLeft();
				break;
			
			case 'S':
				didMove = board.shiftTilesDown();
				break;
			
			case 'D':
				didMove = board.shiftTilesRight();
				break;
			
			default:
				std::cout << "Invalid input! Enter W, A, S, or D." << std::endl;
				break;
		}
		
		if(didMove) {
			// Place next random value
			board.placeRandom();
		}
	}
	
	// Loser
	std::cout << "Game over!" << std::endl;
	board.print();
}
#endif
