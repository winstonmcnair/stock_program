#include <iostream>
#include <stdexcept>
#include "Database.h"
#include "StockPP.h"


namespace StockRec {
	Database::Database()
	{

	}

	
	Stocks& Database::newStock(const std::string& stockname)
	{
		Stocks thestock;
		thestock.setStockName(stockname);
		thestock.setStockPrice(nextStockPrice++);
		mStocks.push_back(thestock);
		return mStocks[mStocks.size()-1 ];

	}


	Stocks& Database::getStock(const int stockprice)
	{
		for (auto& astocks : mStocks) {
			if (astocks.getStockPrice() == stockprice) {
				return astocks;
			}

		}
		throw std::runtime_error("Stock not accesible");
	}

	

	void Database::displayAll() const
	{
		for (const auto& astocks : mStocks) {
			astocks.display();
		}
	}


	





}


