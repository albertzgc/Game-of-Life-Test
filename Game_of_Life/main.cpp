#include "blinker.h"
#include "game.h"
#include "glider.h"
#include "globals.h"
#include "life.h"
#include "world.h"
#include <iostream>
#include <string>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

	Life **population = new Life*[2];

	// Polymorphism: Don't worry about understanding this.
	population[0] = new Glider(0, 0); // Blinker and Glider
	population[1] = new Blinker(4, 5);
	int numLife = 2;

	//population[0] = new Blinker(4, 5); //blinker alone
	//int numLife = 1;

	//population[0] = new Glider(0,0); //glider alone
	//int numLife = 1;

	// Create the game
	Game g(population, numLife);

	// Run the game
	g.play();

	// Short Answer
	report();

	// Clean up
	delete population[0];
	delete population[1];
	delete[] population;

}
