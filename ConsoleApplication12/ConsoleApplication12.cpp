#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	//Задание 1

	/*double km = 0;
	double time = 0;
	double speed = 0;

	printf("Введите расстояние до аэропорта в километрах:");
	cin >> km;
	cout << endl;

	printf("Введите время за которое вам надо доехать до аэропорта в часах:");
	cin >> time;
	cout << endl;

	speed = km/time;
	cout<<"Вам надо ехать "<<speed<<" км/ч";*/

	//Задание 2

	/*double hour;
	double min;
	double sec;
	double value;

	cout << "Введите время разговора по форме час:минуты:секунды" << endl;
	cin >> hour>>min>>sec;

	sec+=hour * 60 * 60;
	sec += min * 60;
	value = ((sec / 60) * 30)/100;

	cout <<"Ваш звонок будет стоить-"<< value;*/

	//Задание 3

	/*int km = 0;
	int value_b[3];
	int benzin = 0;
	int onride[3];

	cout << "Введите расстояние:";
	cin >> km;

	cout << "Введите расход бензина на 100км(в литрах):";
	cin >> benzin;

	cout << "Введите стоимость 3 видов бензина(за литр):";
	for (int i = 0; i < 3; i++)
		cin >> value_b[i];

	for (int i = 0; i < 3; i++)
		onride[i] = (benzin*(km/100))*value_b[i];

	system("cls");

	cout << "|\t1 вид бензина\t|\t2 вид бензина\t|\t3 вид бензина\t|" << endl;
	cout << "|=======================|=======================|=======================|" << endl;
	cout << "|\t" << onride[0] << "\t\t|\t" << onride[1] << "\t\t|\t" << onride[2] << "\t\t|" << endl;*/

	//Задание 4

	/*int sec_full = 0;
	int sec = 0;
	int min = 0;
	int hour = 0;
	int h_night = 24;
	int m_night = 60;
	int s_night = 60;
	int day = 12;

	cout << "Введите время в секундах с начала дня(12 часов дня):";
	cin >> sec_full;

	hour = (sec_full/60)/60;
	min = sec_full/60;
	if (min > 60){
		min -= 60;
	}
	sec = (sec_full % 60);
	hour += day;

	cout << "Сейчас:" << hour << ":" << min << ":" << sec<<endl;
	cout << "С начала дня:" << hour-day << ":" << min << ":" << sec<<endl;
	cout << "До полуночи:"<<h_night-hour<<":"<<m_night-min<<":"<<s_night-sec;*/

	//Задача 5

	/*int sec = 0;
	int h = 0;
	int enday = 8;

	cout << "Введите время в секундах с начала рабочего дня:";
	cin >> sec;
	if (sec > 28800) {
		return 0;
	}

	h = (sec / 60) / 60;
	cout << "До конца рабочего дня-" << enday - h<<" часа";*/
}
