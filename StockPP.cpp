#include <iostream>
#include <string>
#include "StockPP.h"

using namespace std;


namespace StockRec {
	Stocks::Stocks() :
		mStockName(""),
		mStockPrice(-1),
		MstockVolumeM(-1)
	{

	}


	void  Stocks::setStockName(const std::string&  stockname)
	{
		mStockName = stockname;
	}
	const std::string& Stocks::getStockName() const
	{
		return mStockName;
	}

	void  Stocks::dividendyield(double annualdividend, double currentStockP)
	{

		std::cout << std::endl << "Dividend Yield :" << annualdividend / currentStockP << std::endl;

	}



	void Stocks::setMstockVolume(const long long int& MstockVolumeD)
	{
		MstockVolumeM = MstockVolumeD;
	}
	const long long int Stocks::getMstockVolume() const
	{
		return MstockVolumeM;
	}



	void Stocks::BEP(int CostPerShare, int StrikeP)
	{
		std::cout << CostPerShare + StrikeP << std::endl;


	}

	void Stocks::PEratio(int EPS, int PriceperUnit)
	{
		std::cout << EPS / PriceperUnit << std::endl;
	}

	void Stocks::setStockPrice(const int& stockprice)
	{
		mStockPrice = stockprice;
	}
	const int Stocks::getStockPrice() const
	{
		return mStockPrice;
	}



	void Stocks::display() const
	{
		std::cout << "Stock Name: " << getStockName() << std::endl;
		std::cout << "Stock Price : " << getStockPrice() << std::endl;
		std::cout << "Stock Volume : " << getMstockVolume() << std::endl;

	}





	void Stocks::slippageD(int d1, int d2, int TEP, int AFP, int BHL)
	{
		d1 = AFP - TEP;
		d2 = BHL - TEP;
		d1 / d2;

	}

	bool Stocks::isVolume(const long long int volume)
	{
		bool status = true;
		if (volume < MstockVolumeM) {
			status = false;
			return status;
		}
		else { std::cout << "neither" << std::endl; }

	}



}
