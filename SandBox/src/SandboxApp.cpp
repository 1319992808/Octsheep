#include <Octsheep.h>
#include<stdio.h>

class SandBox : public Octsheep::Application {
	void Run()
	{
		printf("Octsheep Engine!\n");
	}
	
};

Octsheep::Application* Octsheep::CreateApplication() {
	return new SandBox();
}