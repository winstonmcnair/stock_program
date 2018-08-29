#pragma once
#include <string>

namespace StockRec {

	class Stocks
		

	{
	public:
		Stocks();

		 void dividendyield(double annualdividend, double currentStockP);
		void slippageD(int d1, int d2, int TEP, int AFP, int BHL); //TEP= Theoretical entry price, AFP= actual fill price, BHL = Bar High long entry price
		bool isVolume(const long long int volume); //volume of stock
		void PEratio( int EPS, int PriceperUnit); // (PRICE- EARNINGS RATIO )current price plus price per unit
		void BEP(int CostPerShare, int StrikeP); //	(BREAK EVEN POINT) cost per share PLUS strike price of option
		void display() const; 
		 
		
		
		void setStockName( const std::string& stockname);
		const std::string& getStockName() const;



		void setStockPrice(const int& stockprice);
		const int getStockPrice() const;
		
		void setMstockVolume(const long long int& MstockVolumeD);
		const long long int getMstockVolume() const;

		
		

	private: 
		std::string mStockName;
		long long int MstockVolumeM;
		int mStockPrice;

	};



	}
