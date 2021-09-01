/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:35:11 by slee2             #+#    #+#             */
/*   Updated: 2021/09/01 13:32:02 by slee2            ###   ########.fr       */
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
	Account::_nbAccounts = 0;
	Account::_totalNbDeposits = 0;
	Account::_totalNbWithdrawals = 0;
}

void	Account::makeDeposit(int deposit)
{
	Account::_nbDeposits = deposit;
	std::cout << Account::_amount << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	return (true);
}

void	Account::displayStatus(void) const
{

}

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	Account::_accountIndex = Account::_nbAccounts;
	std::cout << " index:" << Account::_nbAccounts << ";amount:" << initial_deposit << ";created" << std::endl;
	Account::_totalAmount += initial_deposit;
	Account::_amount = initial_deposit;
	Account::_nbAccounts++;
}

Account::~Account()
{

}