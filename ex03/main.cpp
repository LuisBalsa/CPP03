/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:24:48 by luide-so          #+#    #+#             */
/*   Updated: 2024/01/08 20:16:04 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iomanip>

void	pressEnter(void)
{
	std::cout << "\nPress ENTER to continue...";
	std::cin.ignore(10000, '\n');
}

void	titleHeader(const std::string& message)
{
	std::cout << "\033c";
	int standartSize = 34;
	int messageSize = message.length();
	int spacesBefore = (standartSize - messageSize) / 2 + messageSize;
	int spacesAfter = (standartSize - messageSize) / 2 + 2 + messageSize % 2;

	std::cout << "************************************\n*";
	std::cout << std::setw(spacesBefore) << message;
	std::cout << std::setw(spacesAfter) << "*\n";
	std::cout << "************************************\n" << std::endl;
}

int	main(void)
{
	titleHeader("DIAMONDTRAP DEFAULT");
	DiamondTrap	firstRobot;

	firstRobot.whoAmI();
	firstRobot.attack("invasors");
	firstRobot.printStatus();
	firstRobot.takeDamage(5);
	firstRobot.printStatus();
	firstRobot.beRepaired(5);
	firstRobot.printStatus();
	firstRobot.guardGate();
	firstRobot.highFivesGuys();
	firstRobot.takeDamage(105);
	firstRobot.printStatus();
	firstRobot.attack("traitors");
	pressEnter();

	titleHeader("DIAMONDTRAP SPECIFIC");
	DiamondTrap	secondRobot("Version 2.0");

	secondRobot.whoAmI();
	secondRobot.attack("invasors");
	secondRobot.printStatus();
	secondRobot.takeDamage(9);
	secondRobot.printStatus();
	secondRobot.beRepaired(1);
	secondRobot.printStatus();
	secondRobot.guardGate();
	secondRobot.highFivesGuys();
	secondRobot.takeDamage(105);
	secondRobot.printStatus();
	secondRobot.attack("traitors");
	pressEnter();

	titleHeader("DIAMONDTRAP COPY");
	DiamondTrap	thirdRobot(secondRobot);

	thirdRobot.whoAmI();
	thirdRobot.printStatus();
	thirdRobot.attack("traitors");
	thirdRobot.printStatus();
	pressEnter();

	titleHeader("DESTRUCTORS");

	return (0);
}
