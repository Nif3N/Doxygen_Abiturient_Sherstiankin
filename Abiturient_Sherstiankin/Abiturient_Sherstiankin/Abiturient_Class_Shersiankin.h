#pragma once
/**
	@file		Abiturient_Class_Shersiankin.h
	@brief		������������ ���� ������ ���������
	@copyright	����
	@author		���������� �. �.
	@date		22-05-2024
	@version	1.0.0
\par ���������� ������:
	@ref		Abiturient_Class_Shersiankin
\par �������� �����:
	@ref		Abiturient_Class_Shersiankin
*/


/// ����� �������� �����������
/** �������� ������ ������� � ������ ��� ������ � ����
*/

class Abiturient_Class_Shersiankin
{
protected:
	char* fio;		///< ��� �����������
	int rating;		///< ������
	char* addr;		///< ����� � ������������ �������
public:
	/// ����������� �� ���������
	/** ������� ����������� ��� ������������� �����
	*/
	Abiturient_Class_Shersiankin(void);

	/// ����������� � ����������� ����� ������
	/** ������� ����������� � �������������� ��� ����
	\param fio ��� ������������ �����������
	\param rating ������������ ������������ �����������
	\param addr ����� ������������ �����������
	*/
	Abiturient_Class_Shersiankin(char* fio, int rating, char* addr);

	/// ���������� ����������� �������
	~Abiturient_Class_Shersiankin(void);

	/// �������� ������ ������������, ������� �������������������� ������
	void ShowLowRatingList_Sherstiankin(char* fio, int rating);

	/// �������� ������ ������������, ������� �������������������� ������
	void ShowSumRatingList_Sherstiankin(char* fio, int rating, char* addr);

	/// �������� ������� N ������������, ������� ����� ������� ����� ������, � ������ ������������, ������� ������������� ����
	void ShowHighRatingList_Sherstiankin(char* fio, int rating);
};

