// OOP_Circle_Square.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;


class Square            // класс квадрат
{

	float m_Side;       // поле квадрат закрытое
public:
	Square(float side) : m_Side(side) { } //  функция для доступа к полю квадрата
};

class Circle // класс круг
{

	float m_Radius;// поле круг закрытое
public:
	Circle(float radius) : m_Radius(radius) { } //  функция для доступа к полю круга

	float getRadius()
	{
		return m_Radius;
	}
};

class CircleInSquare : public Circle, public Square // класс квадрат в окружности
{

	float m_Square{0};								//  поле квадрат в окружности
public:
	CircleInSquare(float radius) : Square(radius * 2), Circle(radius) {} // функция для доступа к полю квадрат в окружности
	//CircleInSquare(float square):m_Square(square) {}// функция для доступа к полю квадрат в окружности
	
	void show()
	{
		m_Square = getRadius() * 2.00;
		cout << "Радиус круга равен  = " << getRadius() << endl;
		cout << "Сторона квадрата равна  = " << m_Square << endl;
	}
};

int main(void)
{
	setlocale(LC_ALL, "RUS");
	system("chcp 1251"); // настраиваем кодировку консоли
	float a = 2.0;
	float r = 5.0;
	Circle myCircle(r);
	CircleInSquare q1(r);
	q1.show();
	cin.get();
	return 0;
}