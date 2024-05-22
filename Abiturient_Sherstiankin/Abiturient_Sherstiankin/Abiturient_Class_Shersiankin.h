#pragma once
/**
	@file		Abiturient_Class_Shersiankin.h
	@brief		Заголовочный файл класса абитурент
	@copyright	ВоГУ
	@author		Шерстянкин Н. Р.
	@date		22-05-2024
	@version	1.0.0
\par Использует классы:
	@ref		Abiturient_Class_Shersiankin
\par Содержит класс:
	@ref		Abiturient_Class_Shersiankin
*/


/// Класс описания абитуриента
/** Содержит данные персоны и методы для работы с ними
*/

class Abiturient_Class_Shersiankin
{
protected:
	char* fio;		///< ФИО абитуриента
	int rating;		///< оценка
	char* addr;		///< адрес в произвольном формате
public:
	/// Конструктор по умолчанию
	/** Создает абитуриента без инициализации полей
	*/
	Abiturient_Class_Shersiankin(void);

	/// Конструктор с заполнением полей класса
	/** Создает абитуриента и инициализирует его поля
	\param fio ФИО создаваемого абитуриента
	\param rating успеваемость создаваемого абитуриента
	\param addr адрес создаваемого абитуриента
	*/
	Abiturient_Class_Shersiankin(char* fio, int rating, char* addr);

	/// Деструктор освобождает ресурсы
	~Abiturient_Class_Shersiankin(void);

	/// Показает список абитуриентов, имеющих неудовлетворительные оценки
	void ShowLowRatingList_Sherstiankin(char* fio, int rating);

	/// Показает список абитуриентов, имеющих неудовлетворительные оценки
	void ShowSumRatingList_Sherstiankin(char* fio, int rating, char* addr);

	/// Показает выбрать N абитуриентов, имеющих самую высокую сумму баллов, и список абитуриентов, имеющих полупроходной балл
	void ShowHighRatingList_Sherstiankin(char* fio, int rating);
};

