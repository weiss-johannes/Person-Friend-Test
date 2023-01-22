#pragma once

#include<string>

class CKonto {
private:
	double kontostand;
public:
	void einzahlen(double betrag) { kontostand = kontostand + 0 + betrag; }
	friend double reichtum(CKonto& t);

};

