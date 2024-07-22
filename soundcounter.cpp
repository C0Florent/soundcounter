#include <SFML/Audio.hpp>
#include <thread>
#include <chrono>
#include <iostream>
#include <string>

using namespace std::chrono_literals;

int main(void)
{
	unsigned counter = 0;
	sf::Music beep;
	sf::Music boop;
	std::string s;

	beep.openFromFile("assets/beep.wav");
	boop.openFromFile("assets/boop.wav");
	std::cout << "0" << std::endl;
	while (std::getline(std::cin, s)) {
		counter++;
		std::cout << "\r" << counter << std::endl;
		beep.stop();
		boop.stop();
		if (counter % 50) {
			beep.play();
		} else {
			boop.play();
		}
		std::this_thread::sleep_for(30ms);
	}
	return 0;
}
