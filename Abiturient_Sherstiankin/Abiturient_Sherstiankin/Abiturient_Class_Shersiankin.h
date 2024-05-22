#pragma once


class Abiturient_Class_Shersiankin
{
protected:
	char* fio;
	int rating;
	char* addr;
public:
	Abiturient_Class_Shersiankin(void);
	Abiturient_Class_Shersiankin(char* fio, int rating, char* addr);
	~Abiturient_Class_Shersiankin(void);
	void ShowLowRatingList_Sherstiankin(char* fio, int rating);
	void ShowSumRatingList_Sherstiankin(char* fio, int rating, char* addr);
	void ShowHighRatingList_Sherstiankin(char* fio, int rating);
};

