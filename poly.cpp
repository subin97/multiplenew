// poly.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


#include <iostream>
using namespace std;

#include "Polynomial.h"
#include "Term.h"

int _tmain(int argc, _TCHAR* argv[])
{
    Polynomial A, B, C;
    int i, n, e ;
	float c ;

	cout << "���׽� A�� ���� �� : " ;

	cin  >> n ;

	for ( i = 1; i <= n; i++ ) {
		cout << "���׽� A�� "<< i << " ��° ���� ����� ���� : " ;
		cin >> c >> e ;

		A.NewTerm(c, e) ;
	}

	cout << "���׽� B�� ���� �� : " ; 
	cin >> n ;

	for ( i = 1; i <= n; i++ ) {
		cout << "���׽� B�� "<< i << " ��° ���� ����� ���� : " ;
		cin >> c >> e ;

		B.NewTerm(c, e) ;
	}

	C = A.Add(B) ;
    C.Print() ;

//    cin >> n ;

	return 0;
}

