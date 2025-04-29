#include <iostream>
#include <chrono>
#include <thread>
#include <fstream>
#include <string>
#include <Windows.h>
#include <cstdlib>

int main() {
	
	//varibles
	int co = 0;
	std::string na;
	

	
	//enter
	while (true) {
		std::cout << "warning this game can make files and controll in mouse game horror\n";
		std::cout << "do you want contiune? 1 (yes) 2 (no)";
		std::cout << "start game 1 or info 2: ";
		std::cin >> co;
		//champter 1
		if (co == 1) {
			std::cin.clear();
			std::cout << "welcome in game after cry\n";
			std::this_thread::sleep_for(std::chrono::seconds(1));
			std::cout << "enter our name\n";
			std::cin >> na;
			std::cout << "hi " << na << std::endl;
			std::cout << "warning this game can make files and controll in mouse game horror\n";
			std::this_thread::sleep_for(std::chrono::seconds(3));
			std::cout << "you move in streat\n";
			std::this_thread::sleep_for(std::chrono::seconds(2));
			std::cout << "you blink teleport to place black\n";
			std::this_thread::sleep_for(std::chrono::seconds(2));
			std::cout << "you openyour eye and you scary\n";
			std::this_thread::sleep_for(std::chrono::seconds(2));
			std::cout << "you enter your house\n";
			std::this_thread::sleep_for(std::chrono::seconds(2));
			std::cout << "you alive alone\n";
			std::this_thread::sleep_for(std::chrono::seconds(2));
			std::cout << "you want to rest make food?\n";
			std::this_thread::sleep_for(std::chrono::seconds(3));
			std::cout << "1 yes 2 no\n";
			std::cin >> co;
			//champter 2
			if (co == 1) {
				std::cout << "start make food\n";
				std::this_thread::sleep_for(std::chrono::seconds(2));
				std::cout << "you hear something\n";
				std::this_thread::sleep_for(std::chrono::seconds(2));
				std::cout << "but you don't care\n";
				std::this_thread::sleep_for(std::chrono::seconds(2));
				std::cout << "you go to sit and watch tv\n";
				std::this_thread::sleep_for(std::chrono::seconds(2));
				//path
				char* profu = nullptr;
				size_t len = 0;
				errno_t err = _dupenv_s(&profu, &len, "USERPROFILE");
				//make file
				std::ofstream file(std::string(profu) + "\\Desktop\\ead1.txt");
				file << "I'm watching you";
				std::cout << "you go to sleep\n";
				std::this_thread::sleep_for(std::chrono::seconds(2));
				std::cout << "i still watch you";
				std::this_thread::sleep_for(std::chrono::seconds(2));

			}
			else if (co == 2) {
				std::cout << "devloper: i too lazy to make this";
			}
		}
		//info
		else if (co == 2) {
			std::cout << "//controll\n";
			std::cout << "\n";
			std::cout << "controll we by number\n";
			std::cout << "\n";
			std::cout << "controll//\n";
			std::cout << "--";
			std::cout << "//information\n";
			std::cout << "credit by moustafa\n";
			std::cout << " \n";
			std::cout << "version of game: beta 0.1\n";
			std::cout << " \n";
			std::cin.clear();
			continue;
		}
	}
}