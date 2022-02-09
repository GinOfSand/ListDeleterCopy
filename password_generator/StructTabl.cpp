#include "StructTabl.h"



void StructTabl::addTabl(int val)
{
	if (next == nullptr) {
		next = new StructTabl(val);
		next->coin = this->coin + 1;
	}else{
		next -> addTabl(val);
	}
}

void StructTabl::Deleter()
{
	if (next != nullptr) {
		if (next->next != nullptr) {
			next->next->coin = next->coin;
			next = next->next;
		}
	}
}

void StructTabl::SearchCopy(int coin)
{
	if(next != nullptr) {
		if (coin == this->coin) {
			if (value == next->value) {
				Deleter();
				next->SearchCopyStep2(value);
			}
			else
				next->SearchCopyStep2(value);
		}
		else
			next->SearchCopy(coin); 
	}
		
}

void StructTabl::SearchCopyStep2(int value1)
{
	if (next != nullptr) {
		if (value1 == next->value) {
			Deleter();
			next->SearchCopyStep2(value1);
		}
		else
			next->SearchCopyStep2(value1);
	}
	if (value1 == value) {
		this->value = 0000;
	}
	
		
}

		


void StructTabl::display()
{
	std::cout << value << "\n";
	if (next != nullptr) {
		next -> display();
	}
	else {
		std::cout << "Mac Coin = " << this -> coin - 1;
	}
}

void StructTabl::displayCoin()
{
	std::cout << coin - 1 << "\n";
	if (next != nullptr) {
		next->displayCoin();
	}
	
}
void StructTabl::CoinClear(){

	if (next != nullptr) {
		next->coin = this->coin + 1;
		next->CoinClear();
	}
}

