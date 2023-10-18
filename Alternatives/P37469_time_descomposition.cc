#include <iostream>

int main() 
{

	int seconds, hours = 0;
	int time = 0;

	int minutos{0};

	std::cin >> time;

	if (time >= 3600) 
	{
		hours = time / 3600;
		time = time % 3600;
	}

	if (time >= 60) 
	{
		minutos = time / 60;
		time = time % 60;
	}

	seconds = time;

	std::cout << hours << " " << minutos << " " << seconds << std::endl;

}