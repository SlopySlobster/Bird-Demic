#include<SFML/Graphics.hpp>
#include "birb.h"
#include<random>


int main() {

	//this next line is an array. Arrays are a lot like python lists.
	int birbColor[] = { 255, 200, 200 }; //set up an array of colors to make your birb PINK!
	int birbColor2[] = { 255, 100, 100 };
	int birbColor3[] = { 255, 0, 0 };
	int birbColor4[] = { 200, 100, 255 };
	int birbColor5[] = { 100, 0, 0 };

	birb Alex(100, 100, birbColor); //instantiate 1 birb
	birb Jane(200, 200, birbColor2);
	birb Rick(300, 300, birbColor3);
	birb Sim(400, 400, birbColor4);
	birb Lin(500, 500, birbColor5);




	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window


	while (window.isOpen()) {//GAME LOOP OMG

		window.clear();

		Alex.draw(window);
		Jane.draw(window);
		Rick.draw(window);
		Sim.draw(window);
		Lin.draw(window);

		Alex.fly(y);
		Jane.fly(y);
		Rick.fly(y);
		Sim.fly(y);
		Lin.fly(y);

		window.display();
	}
}
