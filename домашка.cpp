#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	int numHomework(-1)/*, exercise_1(-1), exercise_2(-1), exercise_3(-1)*/;
	while (numHomework != 0)
	{
		cout << " Введите номер Домашней Работы : ";
		cin >> numHomework;
		if ((numHomework < 0) || (numHomework > 3))
		{
			cout << " Введены некорректные данные " << endl;
		}
		else
		{
			switch (numHomework)
			{
			case 1:
			{
				cout << " Домашняя работа_1 : " << endl;
				cout << " №1 - Вывести имя " << endl;
				cout << " №2 - задание Арифметика " << endl;
				cout << " №3 - Линейное уравнение " << endl;
				cout << " №4 - Квадратное уравнение " << endl;
				cout << " №5 - Лампа со шторой " << endl;
				cout << " Введите 0 для завершения ДР_1 " << endl;
				while (numHomework != 0)
				{
					cout << " Выберите номер задания : ";
					cin >> numHomework;
					if ((numHomework < 0) || (numHomework > 5))
					{
						cout << " Введены некорректные данные " << endl;
					}
					else
					{
						switch (numHomework)
						{
						case 1:
						{
							cout << " Ярослав " << endl;
							break;
						}
						//задание 1 завершено
						case 2:
						{
							int a, b;
							cout << " Введите a " << endl;
							cin >> a;
							cout << " Введите b " << endl;
							cin >> b;
							cout << " Сумма = " << a + b << endl;
							cout << " Разность = " << a - b << endl;
							cout << " Произведение = " << a * b << endl;
							if (b != 0)
								cout << " Частное = " << a / b << endl;
							else cout << " !!!Error!!! На 0 делить нельзя " << endl;
							break;
						}
						//задание 2 завершено
						case 3:
						{
							int b, c;
							cout << " Введите c " << endl;
							cin >> c;
							cout << " Введите b " << endl;
							cin >> b;
							if ((b == 0) && (c != 0))
								cout << " Уравнение не имеет решения " << endl;
							if ((b == 0) && (c == 0))
								cout << " x - любое " << endl;
							else
								cout << " x = " << -c / b << endl;
							break;
						} //задание 3 завершено
						case 4:
						{
							int a, b, c, D;
							cout << " Введите a " << endl;
							cin >> a;
							cout << " Введите b " << endl;
							cin >> b;
							cout << " Введите c " << endl;
							cin >> c;
							D = b * b - 4 * a * c;
							if (a != 0) {
								cout << " Дискриминант = " << D << endl;
								if (D > 0) {
									cout << " Уравнение имеет 2 корня : " << endl;
									cout << " X1 = " << (-b + sqrt(D)) / (2 * a) << endl;
									cout << " X2 = " << (-b - sqrt(D)) / (2 * a) << endl;
								}
								else if (D == 0) {
									cout << " Уравнение имеет единственный корень X = " << -b / (2 * a) << endl;
								}
								else cout << " Нет корней " << endl;
							}
							else {
								if ((b == 0) && (c != 0)) {
									cout << " Уравнение не имеет решения " << endl;
								}
								if ((b == 0) && (c == 0)) {
									cout << " x - любое " << endl;
								}
								if ((b != 0)) {
									cout << " x = " << -c / b << endl;
								}
							}
							break;
						}  //задание 4 завершено
						case 5:
						{
							bool a, b, c;
							cout << " Вводите '1' = да или '0' = нет " << endl;
							cout << " На улице день? " << endl;
							cin >> a;
							cout << " Раздвинуты шторы? " << endl;
							cin >> b;
							cout << " Включена лампа? " << endl;
							cin >> c;
							if (c == 1 && ((a == 1 || a == 0) && (b == 1 || b == 0)))
							{
								cout << " В комнате светло " << endl;
							}
							else if ((a == 1) && (b == 1))
							{
								cout << " В комнате светло " << endl;
							}
							else
							{
								cout << " В комнате темно " << endl;
							}
							break;
						}  //задание 5 завершено
						}
					}
				}
				cout << " Домашняя работа_1 завершена " << endl;
				if (numHomework == 0)
				{
					numHomework = -1;
				}
				break;
			}	  //  ДЗ_1 завершено
			case 2: //  ДЗ_2
			{
				cout << " Домашняя работа_2 : " << endl;
				cout << " №1 - Конус " << endl;
				cout << " №2 - Разветвление " << endl;
				cout << " №3 - Функция " << endl;
				cout << " №4 - Порядок " << endl;
				cout << " №5 - Табуляция " << endl;
				cout << " Введите 0 для завершения ДР_2 " << endl;
				while (numHomework != 0)
				{
					cout << " Выберите номер задания : ";
					cin >> numHomework;
					if ((numHomework < 0) || (numHomework > 5))
					{
						cout << " Введены некорректные данные " << endl;
					}
					else
					{
						switch (numHomework)
						{
						case 1:
						{
							int h, R, r, l;
							float S, V;
							const float pi = 3.14;
							cout << " Введите h, R, r " << endl;
							cin >> h >> R >> r;
							l = sqrt(pow((R - r), 2) + pow(h, 2));
							V = pi * h * (R * R + R * r + r * r) / 3;
							S = pi * (R * R + (R + r) * l + r * r);
							cout << " Объём конуса равен " << V << endl;
							cout << " Полная поверхность конуса равна " << S << endl;
							break;
						} //задание 1 завершено
						case 2:
						{
							int a, x;
							double w;
							cout << " Введите Х и А " << endl;
							cin >> x >> a;
							if (x == 0)
							{
								cout << " ОШИБКА, Х = 0 " << endl;
							}
							else
							{
								if (abs(x) < 1)
								{
									w = a * log(abs(x));
									cout << " W = " << w << endl;
								}
								else
								{
									if ((a - x * x) < 0)
									{
										cout << " !!!ERROR!!! Выражение под корнем принимает отрицательное значение " << endl;
									}
									else
									{
										w = sqrt(a - x * x);
										cout << " W = " << w << endl;
									}
								}
							}
							break;
						} //задание 2 завершено
						case 3:
						{
							int x, y, b;
							double z;
							cout << " Введите Х, Y, B " << endl;
							cin >> x >> y >> b;
							if ((b - y) > 0 && ((b - x) >= 0))
							{
								z = log(b - y) * sqrt(b - x);
								cout << " Значение функции Z = " << z << endl;
							}
							else cout << " ОШИБКА, B должно быть больше, чем Х и Y " << endl;
							break;
						} //задание 3 завершено
						case 4:
						{
							int N, i, k;
							cout << " Введите N " << endl;
							cin >> N;
							cout << " Последовательность : ";
							for (i = 0; i <= 9; i++)
							{
								k = N + i;
								cout << k << " ";
							}
							cout << endl;
							break;
						}    //задание 4 завершено
						case 5:
						{
							double x(-4), y;
							cout << " Табуляция Y = ";
							for (x >= -4; x <= 4; x += 0.5)
							{
								if (x != 1)
								{
									y = (x * x - 2 * x + 2) / (x - 1);
									cout << y << " " << endl;
								}
								else cout << " !!!ОШИБКА!!! Знаменатель равен 0 " << endl;
							}
							break;
						} //задание 5 завершено
						} //выбор задания из ДЗ_2 завершён
					}
				}
				cout << " Домашняя работа_2 завершена " << endl;
				if (numHomework == 0)
				{
					numHomework = -1;
				}
				break;
			}    // ДЗ_2 завершено 
			case 3: // ДЗ_3
			{
				cout << " Домашняя работа_3 : " << endl;
				cout << " №1 - Заём " << endl;
				//cout << " №2 - Ссуда " << endl;
				cout << " №3 - Копирование Файла " << endl;
				//cout << " №4 - Фильтр " << endl;
				//cout << " №5 - Сортировка букв " << endl;
				cout << " Введите 0 для завершения ДР_3 " << endl;
				while (numHomework != 0)
				{
					cout << " Выберите номер задания : ";
					cin >> numHomework;
					if ((numHomework < 0) || (numHomework > 3))
					{
						cout << " Введены некорректные данные " << endl;
					}
					else
					{
						switch (numHomework)
						{
						case 1:
						{
							double m, r, p, S, n;
							cout << " Введите S, p, n " << endl;
							cin >> S >> p >> n;
							r = p / 100;
							m = S * r * pow((1 + r), n) / (12 * (pow((1 + r), n) - 1));
							cout << " Месячная выплата m = " << m << " рублей " << endl;
							break;
						}  //задание 1 завершено 
						//case 2:
						//{
						//	break;
						//}
						case 3:
						{
							string text, path("C:\\Users\\A\\source\\repos\\домашка\\домашка\\text.txt");
							/*fstream fs;
							fs.open(path, fstream::in | fstream::out);
							if (!fs.is_open())
							{
								cout << " Ошибка открытия файла " << endl;
							}
							else
							{
								cout << " Файла открыт " << endl;
								cout << " Введите 1 для записи в файл " << endl;
								cout << " Введите 2 для чтения записи из файла " << endl;
								int select_mode;
								cin >> select_mode;
								if (select_mode == 1)
								{
									cout << " Введите ваше сообщение " << endl;
									SetConsoleCP(1251);
									cin >> text;
									fs << text << endl;
									SetConsoleCP(866);
								}
								else
								{
									if (select_mode == 2)
									{
										while (!fs.eof())
										{
											text = "";
											fs >> text;
											cout << text << endl;
										}
									}
									else cout << " Введены некорректные данные " << endl;
								}
							}
							fs.close();*/
							ofstream file;
							file.open(path, ofstream::app);
							if (!file.is_open())
							{
								cout << " Error " << endl;
							}
							else
							{ 
								cout << " Введите ваше сообщение: ";
								SetConsoleCP(1251);
								getline(cin, text);
								file << text;
								SetConsoleCP(866);
							}
							file.close();
							cout << endl;
						    ifstream file2;
							file2.open(path);
							if (!file2.is_open())
							{
								cout << " Error " << endl;
							}
							else
							{
								cout << " Ваше сообщение: ";
								while (!file2.eof())
								{
									text = "";
									getline(file2, text);
									cout << text << endl;
								}
							} 	
							file2.close();
							break;
						} // заданаие 3 завершено
						//case 4:
						/*{
							char  letter[31];
							cout << " Введите буквы " << endl;
							
							break;
						}*/
						}
					}
				}
				cout << " Домашняя работа_3 завершена " << endl;
				if (numHomework == 0)
				{
					numHomework = -1;
				}
				break;
			}	//ДЗ_3 завершено
			} //выбор дз завершён 
		}
	}
	cout << "конец";
	return (0);
}
