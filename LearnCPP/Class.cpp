//#include <iostream>
//#include <string>
//
////Ŭ����
//class AirlineTicket
//{
//public:
//	AirlineTicket();
//	~AirlineTicket();
//
//	double calculatePriceInDollars() const;
//
//	const std::string& getPassengerName() const;
//	void setPassengerName(const std::string& name);
//
//	int getNumberOfMiles() const;
//	void setNumberOfMiles(int miles);
//
//	bool hasEliteSuperRewardsStatus() const;
//	void setHasEliteSuperRewardsStatus(bool status);
//
//private:
//	std::string mPassengerName;
//	int mNumberOfMiles;
//	bool mHasEliteSuperRewardsStatus;
//};
//
//AirlineTicket::AirlineTicket()
//	:mPassengerName("Unknown Passenger")
//	, mNumberOfMiles(0)
//	, mHasEliteSuperRewardsStatus(false)
//{
//}
//
//AirlineTicket::~AirlineTicket()
//{
//}
//
//double AirlineTicket::calculatePriceInDollars() const
//{
//	if (hasEliteSuperRewardsStatus())
//	{
//		return 0;
//	}
//	return getNumberOfMiles() * 0.1;
//}
//
//const std::string& AirlineTicket::getPassengerName() const
//{
//	return mPassengerName;
//}
//
//void AirlineTicket::setPassengerName(const std::string& name)
//{
//	mPassengerName = name;
//}
////������ ����
//
//int main()
//{
//	AirlineTicket myTicket; //���� ��� AirlineTicket
//	myTicket.setPassengerName("Sherman T. Socketwrench");
//	myTicket.setNumberOfMiles(700);
//	double cost = myTicket.calculatePriceInDollars();
//	std::cout << "This ticket will cost $" << cost << std::endl;
//
//}