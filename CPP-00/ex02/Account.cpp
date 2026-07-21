#include <iostream>
#include <ctime>

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	++_nbAccounts;
	_totalAmount += _amount;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	--_nbAccounts;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
}

void	Account::_displayTimestamp( void ) {
	const std::time_t	now = std::time(NULL);
	const std::tm		time = *std::localtime(&now);
	char				timestamp[19];

	std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S] ", &time);
	std::cout << timestamp;
}

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:";
	std::cout << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	++this->_nbDeposits;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:";
	this->_amount += deposit;
	std::cout << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
	++_totalNbDeposits;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (withdrawal <= this->_amount) {
		this->_amount -= withdrawal;
		++this->_nbWithdrawals;
		std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		++_totalNbWithdrawals;
		_totalAmount -= withdrawal;
		return true;
	}
	std::cout << "refused" << std::endl;
	return false;
}

int		Account::checkAmount( void ) const {
	return this->_amount;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:";
	std::cout << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

