/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:46:51 by calle             #+#    #+#             */
/*   Updated: 2021/09/23 16:29:28 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = Account::getNbAccounts();

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created";
	std::cout << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed";
	std::cout << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void Account::_displayTimestamp( void )
{
	time_t now = time(0);

	tm *ltm = std::localtime(&now);
	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;
	std::cout << std::setfill ('0') << std::setw (2);
	std::cout << 1 + ltm->tm_mon;
	std::cout << std::setfill ('0') << std::setw (2);
	std::cout << ltm->tm_mday;
	std::cout << "_";
	std::cout << std::setfill ('0') << std::setw (2);
  	std::cout << ltm->tm_hour;
	std::cout << std::setfill ('0') << std::setw (2);
	std::cout << ltm->tm_min;
	std::cout << std::setfill ('0') << std::setw (2);
	std::cout << ltm->tm_sec;
	std::cout << "]";
}

//void Account::_displayTimestamp( void )
//{
//	std::cout << "[19920104_091532]";
//}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";"; 
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"; 
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

int Account::checkAmount( void ) const
{
	return (_amount);
}

void Account::makeDeposit( int deposit )
{
	int	p_amount;

	p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit; 
	_nbDeposits += 1;
	_totalNbDeposits += 1;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"; 
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	int	p_amount;

	p_amount = checkAmount();
	_displayTimestamp();
	if (p_amount - withdrawal < 0)
	{
		std::cout << " index:" << _accountIndex << ";"; 
		std::cout << "p_amount:" << p_amount << ";";
		std::cout << "withdrawal:refused";
		std::cout << std::endl;
		return (false);
	}
	else
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;

		std::cout << " index:" << _accountIndex << ";"; 
		std::cout << "p_amount:" << p_amount << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals;
		std::cout << std::endl;
		return (true);
	}
}
