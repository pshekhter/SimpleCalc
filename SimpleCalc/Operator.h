#include <string>

enum Symbol { Addition, Subtraction, Multiplication, Division, Root, Exponent, Factorial };

#pragma once
class Operator
{

private:
	Symbol _symbol;

public:
	Operator();
	~Operator();

	Symbol const& symbol() const;
	void symbol(Symbol symbol);
};

