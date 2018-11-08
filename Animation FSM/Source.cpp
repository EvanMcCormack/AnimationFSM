#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 
#pragma comment(lib,"opengl32.lib") 
#pragma comment(lib,"glu32.lib")

#include<iostream>
#include<SFML\Graphics.hpp>
#include<thread>
#include"Animation.h"

int main()
{
	Animation fsm; 
	cout << "Press (1 for Idling \n      (2 for climbing \n      (3 for jumping \n      (4 for walking" << endl;
	cout << "      (5 for Swordmanship \n      (6 for shoveling \n      (7 for hammering" << endl;
	while (true) {
		
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
		{
			fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(3000));
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
		{
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(3000));
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
		{
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(3000));
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
		{
			fsm.walking();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(3000));
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
		{
			fsm.swordmanship();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(3000));
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
		{
			fsm.shoveling();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(3000));
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
		{
			fsm.hammering();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(3000));
		}
	}

	system("Pause");
}