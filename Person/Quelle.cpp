#include"Header.h"	
#include<iostream>

int main() {
	CKonto Konto1{};
	Konto1.einzahlen(500.00);

	std::cout << reichtum(Konto1) << std::endl;


}

