#pragma once

#include "ODVM/Debug/Instrumentor.hpp"

extern ODVM::Application* ODVM::CreateApplication();

int main(int argc, char** argv)
{
	ODVM::Log::Init("Game");
	//ODVM_PROFILE_BEGIN_SESSION("Startup", "ODVMProfile.json");
	auto app = ODVM::CreateApplication();
	//ODVM_PROFILE_END_SESSION();
	//ODVM_PROFILE_BEGIN_SESSION("Runtime", "ODVMProfile-Runtime.json");
	app->run();
	//ODVM_PROFILE_END_SESSION();
	//ODVM_PROFILE_BEGIN_SESSION("Shutdown", "ODVMProfile-Shutdown.json");
	delete app;
	//ODVM_PROFILE_END_SESSION();
	return 1;
}

