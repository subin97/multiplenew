#pragma once

class Polynomial; //���漱��
class Term
{
friend Polynomial;
private:
	float coef;   // ���
	int exp;      // ����

public:
	Term(void);
	virtual ~Term(void);
};
