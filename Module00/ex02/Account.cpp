/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/21 14:44:42 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/09/23 13:58:08 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _displayTimestamp();
    std::cout << " index:" << Account::_nbAccounts << ";amount:" << initial_deposit << ";created" << std::endl;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << " accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    std::cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    if (withdrawal > this->_amount)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        this->_amount -= withdrawal;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        Account::_nbWithdrawals++;
        std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return(true);
    }
}

void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
    std::cout << "[19920104_091532]";
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}
