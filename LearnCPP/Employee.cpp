//#include <iostream>
//#include "Employee.h"
//
//using namespace std;
//
//namespace Records {
//	Employee::Employee(const std::string& firstName, const std::string& lastName)
//		: mFirstName(firstName), mLastName(lastName)
//	{
//	}
//	void Employee::promote(int raiseAmount)
//	{
//		setSalary(getSalary() + raiseAmount);
//	}
//	void Employee::demote(int demeritAmount)
//	{
//		setSalary(getSalary() - demeritAmount);
//	}
//	void Employee::hire()
//	{
//		mHired = true;
//	}
//	void Employee::fire()
//	{
//		mHired = false;
//	}
//	void Employee::display() const
//	{
//		cout << "Employee: " << getLastName() << ", " << getFirstName() << endl;
//		cout << "--------------------------" << endl;
//		cout << (isHired() ? "Current Employee" : "FormerEmployee") << endl;
//		cout << "Salary: $" << getSalary() << endl;
//		cout << endl;
//	}
//
//	void Employee::setFirstName(const std::string& FirstName)
//	{
//		mFirstName = FirstName;
//	}
//
//	const std::string& Employee::getFirstName() const
//	{
//		return mFirstName;
//	}
//	void Employee::setLastName(const std::string& LastName)
//	{
//		mLastName = LastName;
//	}
//	const std::string& Employee::getLastName() const
//	{
//		// TODO: 여기에 return 문을 삽입합니다.
//		return mLastName;
//	}
//	void Employee::setEmployeeNumber(int employeeNumber)
//	{
//		mEmployeeNumber = employeeNumber;
//	}
//	int Employee::getEmployeeNumber() const
//	{
//		return mEmployeeNumber;
//	}
//	void Employee::setSalary(int newSalary)
//	{
//		mSalary = newSalary;
//	}
//	int Employee::getSalary() const
//	{
//		return mSalary;
//	}
//	bool Employee::isHired() const
//	{
//		return mHired;
//	}
//}