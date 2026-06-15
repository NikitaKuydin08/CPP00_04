/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-15 06:05:40 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-15 06:05:40 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

/*
    The typedef keyword in C++ is used to create an alias (alternative name)
    for an existing data type. It helps simplify complex type declarations and
    improves code readability. By allowing shorter and more meaningful names.
    Typedef can be used to create aliases for built-in data types such as
    int(our scenario), char, float and their variants like long and unsigned. 
*/

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// [19920104_091532]
void Account::_displayTimestamp(void) {
    std::time_t timestamp = std::time(NULL);
    struct std::tm datetime = *std::localtime(&timestamp);

    std::cout << "[" << datetime.tm_year + 1900
    << std::setfill('0') << std::setw(2) << datetime.tm_mday
    << std::setfill('0') << std::setw(2) << datetime.tm_mon + 1
    << "_" << std::setfill('0') << std::setw(2) << datetime.tm_hour
    << std::setfill('0') << std::setw(2) << datetime.tm_min
    << std::setfill('0') << std::setw(2) << datetime.tm_sec << "] ";
}

Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _nbAccounts++;
    _totalAmount += _amount;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account() {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts() {
    return (_nbAccounts);
}

int Account::getTotalAmount() {
    return (_totalAmount);
}

int Account::getNbDeposits() {
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals() {
    return (_totalNbWithdrawals);
}

// accounts:8;total:20049;deposits:0;withdrawals:0
void Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:"
    << getTotalAmount() << ";deposits:" << getNbDeposits()
    << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:"
    << _amount << ";deposits:" << _nbDeposits
    << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:"
    << _amount << ";deposit:" << deposit << ";amount:";
    _nbDeposits = 1;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _amount += deposit;
    std::cout << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:"
    << _amount << ";withdrawal:";
    if (_amount < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals = 1;
    _totalNbWithdrawals++;
    std::cout << withdrawal << ";amount:" << _amount
    << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount(void) const {
    return (_amount);
}
