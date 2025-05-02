#include <Windows.h>
#include <chrono>
#include <thread>
#include "utils.h"

void  enableANSI() {
	HANDLE h0out = GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwMode = 0;
	GetConsoleMode(h0out, &dwMode);
	dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	SetConsoleMode(h0out, dwMode);




}
void delaysec(int s) {
	std::this_thread::sleep_for(std::chrono::seconds(s));
}