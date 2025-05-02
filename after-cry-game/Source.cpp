#include <iostream>
#include "game.h"
#include "utils.h"


int main() {
	int co2 = 0;
	enableANSI();
	std::cout <<  "\033[33m" << "this game can make files" << "\033[0m" << std::endl;
	std::cout << "do you want contiune?\n";
	std::cout << "\033[32m" << "1 (yes) " << "\033[31m" << "2 (bo)" << "\033[0m" << std::endl;
	std::cin >> co2;
	if (co2 == 1) {
		std::cout << "s1tart  game 2 info";
		std::cin.clear();
		std::cin >> co2;
		if (co2 == 1) {
			startgame();
		}
		else if (co2 == 2) {
			gameinfo();
		}
	}
	else if (co2 == 2) {
		
	}
}