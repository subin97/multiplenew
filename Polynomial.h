#pragma once

#include "Term.h"

class Polynomial  
{
private:
 	Term *termArray;
	int capacity;    // �迭�� ũ��
	int terms;       // 0�� �ƴ� ���� ��
public:
	void Print(void);
	void NewTerm(const float theCoeff, const int theExp);
	Polynomial Add(Polynomial b);

	Polynomial(void);
	~Polynomial(void);
};