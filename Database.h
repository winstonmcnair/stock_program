#pragma once
#include <iostream>
#include <vector>
#include "StockPP.h"


namespace StockRec {
	const int mstockprice = 1000;

	class Database
	{
	public:
		Database();
		Stocks& newStock(const std::string& stockname);
		Stocks& getStock(const std::string  stockname);
		Stocks& getStock(const int stockprice);
		Stocks& getDividend(double annualdividend, double currentStockP);
		void displayAll() const;
		

	private:
		std::vector<Stocks> mStocks;
		int nextStockPrice;

			
	};



}
