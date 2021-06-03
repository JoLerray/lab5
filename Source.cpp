
#include "Flower.h"
#include "Bouquet.h"
int main()
{
	
	
	Flower Tolpan1("Tolpan", "Green", -100, -24, -120, -300);
	Flower roza("Roza", "Green", -100, -24, -300, -600);
	Flower Tolpan("Tolpan", "Green", -100, -24, -120, -300);

	try
	{
		Bouquet b1(1, Tolpan);
		b1.delFlower(0);
		cout << b1.listFlowers() << endl;
		cout << b1.getState() << endl;
		cout << b1.getCost() << endl;
		cout << b1.realyCost() << endl;
		b1.inBottle();
		b1.outBottle();
		cout << b1.countFlowers() << endl;
		b1.changeTime(-100);
		cout << b1.countWiltedFlowers() << endl;
		_CrtDumpMemoryLeaks();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what();
	}
	catch (const std::out_of_range&ex)
	{
		cout << ex.what();
	}
	catch (const std::invalid_argument&ex)
	{
		cout << ex.what();
	}
	catch (...) {
		cout << "Exception";
	}
	return 0;

}