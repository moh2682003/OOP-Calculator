#include <iostream>

using namespace std;

class clsCalculator
{
	float _LastNumber = 0;
	float _Result = 0 ;
	string _Operation = "Clear";
	float _PreviousResult = 0;

public:

	void Add(float Number)
	{
		_LastNumber = Number;
		_PreviousResult = _Result;
		_Operation = "Adding";
		_Result += Number;
 	}

	void Subtract(float Number)
	{
		_LastNumber = Number;
		_PreviousResult = _Result;
		_Operation = "Subtract";
		_Result -= Number;
	}

	void Multiply(float Number)
	{
		_LastNumber = Number;
		_PreviousResult = _Result;
		_Operation = "Multiply";
		_Result *= Number;
	}

	void Divide(float Number)
	{
		_LastNumber = Number;

		if (Number == 0)
			Number = 1;

		_PreviousResult = _Result;
		_Operation = "Divide";
		_Result /= Number;
	}

	float GetFinalResult()
	{
		return _Result;
	}

	void PreviousResult()
	{
		_LastNumber = 0;
		_Result = _PreviousResult;
		_Operation = "Cancelling Last Operation";
	}

	void Clear()
	{
		_LastNumber = 0;
		_Result = 0;
		_Operation = "Clear";
	}

	void PrintResult()
	{
		cout << "Result After " << _Operation << " " << _LastNumber << " = " << _Result << endl ;
	}
	
};


int main()
{
	clsCalculator Calculator1;

	Calculator1.Add(10);
	Calculator1.PrintResult();

	Calculator1.Divide(5);
	Calculator1.PrintResult();

	Calculator1.Add(100);
	Calculator1.PrintResult();

	Calculator1.Subtract(20);
	Calculator1.PrintResult();

	Calculator1.PreviousResult();
	Calculator1.PrintResult();

	Calculator1.Multiply(2);
	Calculator1.PrintResult();

	Calculator1.Divide(0);
	Calculator1.PrintResult();

	Calculator1.Divide(2);
	Calculator1.PrintResult();

	system("pause > 0");


}