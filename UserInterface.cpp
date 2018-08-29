#include <iostream>
#include <stdexcept>
#include <exception>
#include "Database.h"

using namespace StockRec;


int DisplayMenu();
void Dividend(Database& sst);
void NEWBep(Database& sst);
void newPEratio(Database& sst);
 float newSlippage(int d1, int d2, int afp, int tep, int bhl, int slip)
{
	d1 = 0, d2 = 0, afp = 0, tep = 0, bhl = 0;
	slip = 0;
	slip = d1 / d2;

	while (d1 == 0)
	{
		(afp - tep);
		
	}
	while (d2 == 0)
	{
		(bhl - tep);
	}
	return slip;

}

int main() {



	int a1 = 0, a2 = 0 , a3, a4, a5, slippage = 0;
	Database stockLIST;
	bool done = false;
	while (!done) {


		int selection = DisplayMenu();
		switch (selection) {

		case 1: Dividend(stockLIST);
			continue;

		case 2: NEWBep(stockLIST);
			continue;

		case 3:
			std::cout << "enter Actual fill price " << std::endl;
			std::cin >> a3;
			std::cout << "enter theoretical entrt price " << std::endl;
			std::cin >> a4;
			std::cout << "enter bar high long entry price " << std::endl;
			std::cin >> a5;
			newSlippage(a1,a2, a3, a4, a5, slippage);
			continue;

		/*case 4: newPEratio(stockLIST);
			break; */
		
		case 5: stockLIST.displayAll();
			continue;

		case 6: 
			done = true;
			break;

		default: std::cerr << "INFORMATION NOT FOUND" << std::endl;

			break;
		}

	}
	return 0;
}

int DisplayMenu()
{
	int selection;
	std::cout << std::endl;
	std::cout << "Stock Information " << std::endl;
	std::cout << "1) Stocks Dividend " << std::endl;
	std::cout << "2) Break even point " << std::endl;
	std::cout << "3) Stock Slippage " << std::endl;
	std::cout << "4) Price-to-Earnings Ratio of Stock " << std::endl;
	std::cout << "5) List entire stock information" << std::endl;
	std::cout << "6)"  << " Enter 6 to exit" << std::endl; 
	std::cout << "Enter number" << std::endl;
	std::cin >> selection;
	return selection;

}


void Dividend(Database& sst)
{
	double annualdividend;
	double currentStockP;
	std::string stockname;
	std::cout << "Enter annual dividend of stock " << std::endl;
	std::cin >> annualdividend;
	std::cout << "Enter Current stock price" << std::endl;
	std::cin >> currentStockP;
	try {
		Stocks& stt = sst.newStock(stockname);

		stt.dividendyield(annualdividend, currentStockP);
		
	}catch (const std::exception& exception){
		std::cerr << "Unable to determine dividend yield" << exception.what() << std::endl;
 	}

}
void NEWBep(Database& sst)
{
	float cost_p;
	float strike_p;
	std::cout << "Enter the stocks Costs Per Share " << std::endl;
	std::cin >> cost_p;
	std::cout << "Enter the stocks Strike price" << std::endl;
	std::cin >> strike_p;
	std::cout << cost_p + strike_p;
	
	
}





	







	

 
//void newPEratio(Database& sst);

