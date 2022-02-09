#pragma once
#include <iostream>
class StructTabl
{
private:
	int value;
	StructTabl* next;
	int coin = 1;
public:
	StructTabl() : StructTabl(0) {}
	StructTabl(int input) : value{ input } {
		
		next = nullptr;
	}
	~StructTabl() {
		if (next != nullptr) {
			delete next;
		}
	}
	int  getValue() {
		return  value;
	}
	int  getCoin() {
		return  coin;
	}
	StructTabl * getNext(){
		return  next;
	}
	void CoinClear();
	void addTabl(int val);
	void Deleter();
	void SearchCopy(int coin);
	void SearchCopyStep2(int value);
	void display();
	void displayCoin();
};

