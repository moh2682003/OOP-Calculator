#include <iostream>

using namespace std;

class clsPerson
{
	int _ID;
	string _FirstName;
	string _LastName;
	string _email;
	string _Phone;

public:

	clsPerson(int ID , string FirstName , string LastName , string Email , string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_email = Email;
		_Phone = Phone;
	}

	int GetID()
	{
		return _ID;
	}


	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string getFirstName()
	{
		return _FirstName;
	}

	__declspec(property(get = getFirstName, put = setFirstName)) string FirstName;

	void setLastName(string LastName)
	{
		_LastName = LastName;
	}

	string getLastName()
	{
		return _LastName;
	}

	__declspec(property(get = getLastName, put = setLastName)) string LastName;


	string FullName()
	{
		return _FirstName + " " + _LastName;
	}

	void setEmail(string Email)
	{
		_email = Email;
	}

	string getEmail()
	{
		return _email;
	}

	__declspec(property(get = getEmail, put = setEmail)) string Email;

	void setPhoneNumber(string Phone)
	{
		_Phone = Phone;
	}

	string getPhoneNumber()
	{
		return _Phone;
	}

	__declspec(property (get = getPhoneNumber, put = setPhoneNumber)) string PhoneNumber;

	void SendEmail(string Subject, string Body)
	{
		cout << "Your Following Successfully Send to: " << _email << endl;
		cout << "Subject: " << Subject << endl;
		cout << "Body: " << Body << endl;
		cout << "\n";
	}

	void sendMassage(string Massage)
	{
		cout << "Your Following Successfully Send to: " << _Phone << endl;
		cout << "Massage: " << Massage << endl;
		cout << "\n";
	}

	void Print()
	{
		cout << "Info\n";
		cout << "---------------------------\n";
		cout << "ID        : " << _ID << endl;
		cout << "First Name: " << _FirstName << endl;
		cout << "Last Name : " << _LastName << endl;
		cout << "Full Name : " << FullName() << endl;
		cout << "email     : " << _email << endl;
		cout << "Phone     : " << _Phone << endl;
		cout << "------------------------------\n\n";

	}
};



int main()
{
	clsPerson Person1(10, "Sayed", "AbdelHamed", "moh2682003.gmail.com", "01033454819");

	Person1.Print();

	Person1.SendEmail("Hi", "This Is Email");
	Person1.sendMassage("This Is Massage");
}