// week3c++ do 01.01.2023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>

using namespace std;


int main()
{

  /*Завдання 1 */
	setlocale(LC_ALL, "Russian");
	int metr;
	cout << "\nВведите расстояние в (километрах) :";
	cin >> metr;
	float time;
	cout << "\nВведите время в (минутах):";
	cin >> time;
	float v = metr / (time / 60);/*Километры в час*/
	float v1 = v / 3.6; /*Метры в секунду */
	cout << "\nСкорость с которой нужно ехать: "<<v<<"(км/час)";
	cout << "\nСкорость с которой нужно ехать " << v1 << "(м/с)";
	cout << "\n";
	/*Задание 2 */
	int start_hour, start_minute, start_second, end_hour, end_minute, end_second;
	int cost1 = 2;
	cout << "\n Введите наччальное время : (hh mm ss) : ";
	cin >> start_hour >> start_minute >> start_second;
	cout << "\n Введите конечное время : (hh mm ss): ";
	cin >> end_hour >> end_minute >> end_second;
	// Переводим первоначальное время в секунды
	int start= start_hour * 3600 + start_minute * 60 + start_second;
	// Переводим конечное время в секунды 
	int end = end_hour * 3600 + end_minute * 60 + end_second;
	int travel_seconds = end - start;
	// Переводим все время в минуты
	int travel_minutes = travel_seconds / 60;
	// Считаем сумму путешествия
	int cost = travel_minutes * cost1;
	cout << "\nПолная сумма :" << cost << " грн" << endl;
	/*Задание 3*/
	cout << "\n";
	cout << "\nЗадание 3";
	int dist;
	cout << "\nВведите расстояние :";
	cin >> dist;
	float ras;
	cout << "\nВведите рассход бензина на 100км :";
	cin >> ras;
	float ben92 ;
	cout << "\nВведите цену за литр 92 бензина (грн):";
	cin >> ben92;
	float ben95;
	cout << "\nВведите цену за литр 95 бензина (грн)";
	cin >> ben95;
	float ben98;
	cout << "\nВведите цену за литр 98 бензина(грн):";
	cin >> ben98;
	float cost92 = ((ras * dist) / 100) * ben92;
	float cost95 = ((ras * dist) / 100) * ben95;
	float cost98 = ((ras * dist) / 100) * ben98;
	cout << "\nЦена движения :"<< cost92<<" грн";
	cout << "\nЦена движения " << cost95 << " грн";
	cout << "\nЦена движения " << cost98 << " грн";
	cout << "\n";
	/*Задание 4*/
	cout << "\nЗадание 4";
	int   sec2;
	float dif, sec3;
	int hour2, minut2;
	int sec1;//Секунды которые вводят
    cout << "\nВВедите количество секунд :";
	cin >> sec1;
	//Рассчет поточного времени
	int hour1 = sec1 / 3600;
	int c = sec1 - hour1 * 3600;
	int minut1 = c / 60;
	sec2= sec1 - ((hour1 * 3600) + (minut1 * 60));
	cout << "\nВремя  :" <<hour1 << "  часов " << minut1 << " минут " << sec2 << " сек";
	//Рассчет времи до конца суток
	dif = (24 * 3600) - sec1;
	hour2 = dif / 3600;//Количество часов до конца дня
	minut2 = (dif - hour2 * 3600 )/ 60; // В инутах до конца дня
	sec3 = dif - ((hour2 * 3600) + (minut2 * 60));//Количество секунд до конца дня
	cout << "\n Осталось время время в часах :" << hour2<<"  часов " << minut2 << " минут " << sec3 << " сек";
	cout << "\n";
	//Задание5
	int s;// Ввод количество секунд с начало рабочего дня
	cout << "\nВведите количество секунд с начала дня :";
	cin >> s;
	int z = 8 * 3600-s;//В секундах остаток времени 
	int end_minut = z / 3600;
	cout << "\nОсталось сидень на работе  :" << end_minut << "  часов";










}

