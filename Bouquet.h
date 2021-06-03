#pragma once
#include "Flower.h"
#include <vector>
class Bouquet {
private:
	vector <Flower> flowers;
public:
	Bouquet(int,Flower ,...);
	Bouquet();
	void addFlower(Flower);
	void addFlower(vector <Flower>);
	void addFlower(int,Flower,...);
	void delFlower(int);
	void delFlower();
	string listFlowers();
	float getState();
	//bool getInWater();
	float getCost();
	void inBottle();
	void outBottle();
	int realyCost();
	int countFlowers();
	int countWiltedFlowers();
	void changeTime(int);
	~Bouquet();
	
};