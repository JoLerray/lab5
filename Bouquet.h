#pragma once
#include "Flower.h"
#include <vector>
class Bouquet {
private:
	vector <Flower> flowers;
public:
	Bouquet(int n = 0, Flower F = Flower(),...); // Конструктор
	void addFlower(Flower);// Добавление 1 цветка в букет
	void addFlower(vector <Flower>); // Добавление букета в букет
	void addFlower(int,Flower,...); // Добавление несколько цветков в букет
	void delFlower(int); // Удаление цветка из букета по индексу
	void delFlower(); // Удаление последнего цветка
	string listFlowers(); // Вывод списка цветков
	float getState(); // Состояние букета
	float getCost(); // Базовая стоимость букета
	void inBottle(); // Поставить букет в воду
	void outBottle(); // Убрать букет из воды 
	int realyCost(); // Стоимость букета с учётом времени
	int countFlowers(); // Количество цветов в букете
	int countWiltedFlowers(); // Количество цветов которые завяли в букете
	void changeTime(int); // Изменение времени букета
	~Bouquet();// Деструктор
	
};
