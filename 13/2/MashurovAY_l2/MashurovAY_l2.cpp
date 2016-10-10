// MashurovAY_l2.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "mashurov_bas.h"
#include "mashurov_heir.h"
#include <iostream>


using namespace std;
int main()
{
	int i;
	mashurov_bas * bas = new mashurov_bas();//mashurov_bas- �����-��������
	mashurov_heir * heir = new mashurov_heir();//mashurov_heir- �����-�������
	mashurov_bas * bas2 = heir;
	cin >> i; // ������ ���������������� ��� ���� � �����������
	if (i == 0)
		bas2 = bas;
	mashurov_heir * heir2 = dynamic_cast<mashurov_heir*>(bas2); // � ������ ���� �������������� �������������� ��������� � ���� ������, ������� �� �������� ����������� ����� �������, � ���������� �������������� ����� ������� ������� ���������. ������� � �������� ������ �������� ��������.

    // ��������� �� ������� �����, �������� �������� ������ �������� ������
	bas->simple_func(); //������� �������
	bas->virtual_func(); //����������� �������
	cout << endl;
	
	//��������� �� ����������� �����, �������� �������� ������ ������������ ������
	heir->simple_func(); 
	heir->virtual_func();
	cout << endl;

	//��������� �� ������� �����, �������� �������� ������ �� ������� ���������
	bas2->simple_func();
	bas2->virtual_func();
	cout << endl;

	//��������� �� ����������� �����, �������� � �������������� ����������� �������� ���������� ���� �������� ������ �� �������� ���������
	if (heir2) // �������� �� �������� ���������(��-�� dynamic_cast)
	{
		heir2->simple_func();
		heir2->virtual_func();
	}

	return 0;
}




