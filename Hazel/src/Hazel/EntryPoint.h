#pragma once
#ifdef HZ_PLATFORM_WINDOWS

#include "Hazel.h"

extern std::unique_ptr<Hazel::Application> Hazel::CreateApplication();

int main(int argc, char* argv[]) {
	std::cout << "Hazel Engine" << std::endl;
	auto app = Hazel::CreateApplication();
	app->Run();
	return 0;
}

#endif // HZ_PLATFORM_WINDOWS
