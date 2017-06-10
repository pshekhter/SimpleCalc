#include "stdafx.h"
#include "Operator.h"


Operator::Operator()
{
}


Operator::~Operator()
{
}

Symbol const& Operator::symbol() const {
	return _symbol;
}

void Operator::symbol(Symbol symbol) {
		switch (symbol) {
			case Addition:
			case Subtraction:
			case Multiplication:
			case Division:
			case Root:
			case Exponent:
			case Factorial: {
				_symbol = symbol;
				break;
		}
	}
}
