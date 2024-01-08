/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:06:38 by luide-so          #+#    #+#             */
/*   Updated: 2024/01/03 00:31:48 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// --------------------------- CONSTURCTORS ----------------------------------

ClapTrap::ClapTrap(void) :
	_name("default"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap constructor with parameter called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

// --------------------------- OPERATORS ----------------------------------

ClapTrap	&ClapTrap::operator=(ClapTrap const &copy)
{
	if (this == &copy)
		return (*this);
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
	return (*this);
}

// --------------------------- GET FUNCTIONS ----------------------------------

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int			ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int			ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int			ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

// --------------------------- MEMBER FUNCTIONS ----------------------------------

bool	ClapTrap::isDepleted(void)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
		return (false);
	std::cout << "ClapTrap " << this->_name << " is out of action! 💀";
	std::cout << std::endl;
	return (true);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->isDepleted())
		return ;
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attackDamage << " points of damage !";
	std::cout << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints = this->_hitPoints - amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "ClapTrap " << this->_name << " received " << amount;
	std::cout << " damage, dropping the HP to " << this->_hitPoints << "!";
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->isDepleted())
		return ;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " is repaired with " << amount;
	std::cout << " HP, increasing the HP to " << this->_hitPoints << "!";
	std::cout << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::printStatus(void)
{
	std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoints;
	std::cout << " HP and " << this->_energyPoints << " energy points.";
	std::cout << std::endl;
}
