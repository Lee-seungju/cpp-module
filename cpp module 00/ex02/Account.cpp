/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:35:11 by slee2             #+#    #+#             */
/*   Updated: 2021/09/01 14:19:29 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	time_t	cur_time = time(nullptr);
	char	buff[16];
	
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&cur_time));
	std::cout << "[" << buff << "]";
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << \
				";total:" << Account::_totalAmount << \
				";deposits:" << Account::_totalNbDeposits << \
				";withdrawls:" << Account::_totalNbWithdrawals << std::endl;
	Account::_totalAmount = 0;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	if (deposit + Account::_amount < 0)
	{
		Account::_nbDeposits = 0;
		std::cout << " index:" << Account::_accountIndex << \
				";p_amount:" << Account::_amount << \
				";deposit:refused" << \
				std::endl;
	}
	else
	{
		Account::_nbDeposits = 1;
		std::cout << " index:" << Account::_accountIndex << \
				";p_amount:" << Account::_amount << \
				";deposit:" << deposit << \
				";amount:" << Account::_amount + deposit << \
				";nb_deposits:" << Account::_nbDeposits << \
				std::endl;
		Account::_amount += deposit;
		Account::_totalNbDeposits++;
	}
	Account::_totalAmount += Account::_amount;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (Account::_amount - withdrawal < 0)
	{
		Account::_nbWithdrawals = 0;
		std::cout << " index:" << Account::_accountIndex << \
				";p_amount:" << Account::_amount << \
				";withdrawal:refused" << \
				std::endl;
		Account::_totalAmount += Account::_amount;
		return (false);
	}
	else
	{
		Account::_nbWithdrawals = 1;
		std::cout << " index:" << Account::_accountIndex << \
				";p_amount:" << Account::_amount << \
				";withdrawal:" << withdrawal << \
				";amount:" << Account::_amount - withdrawal << \
				";nb_withdrawals:" << Account::_nbDeposits << \
				std::endl;
		Account::_amount -= withdrawal;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount += Account::_amount;
	}
	return (true);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex << \
				";amount:" << Account::_amount << \
				";deposits:" << Account::_nbDeposits << \
				";withdrawals:" << Account::_nbWithdrawals << \
				std::endl;
}

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	Account::_accountIndex = Account::_nbAccounts;
	Account::_amount = initial_deposit;
	std::cout << " index:" << Account::_accountIndex << \
				";amount:" << Account::_amount << \
				";created" << std::endl;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex << \
				";amount:" << Account::_amount << \
				";closed" << std::endl;
}