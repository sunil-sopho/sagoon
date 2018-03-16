#include <bits/stdc++.h>

using namespace std;

class user {
	public :
		user(string email,string name, string lastname,string password);

		bool updatePassword(string oldPassword, string newPassword);
		bool addPhone(string phone);
		bool changeMail(string email);
		bool checkPassword(string password);
	private:
		string mail,name,lastname,phone;
		string salt = "aldfjaljfaljsjl";
		size_t pass;
		hash<string> h;
};

user::user(string email,string name, string lastname,string password)
{
	this->mail = email;
	this->name = name;
	this->lastname = lastname;

	this->pass = this->h(salt+password);
}

int main(){
	return 0;
}

bool user::updatePassword(string oldPassword, string newPassword)
{
	if(checkPassword(oldPassword)){
		this->pass = this->h(salt+newPassword);
		return true;
	}
	else{
		return false;
	}

}

bool user::addPhone(string phone)
{
	try{
		this->phone = phone;
		return true;
	}
	catch(exception e)
	{
		return false;
	}

}

bool user::changeMail(string email)
{
	try{
		this->mail = email;
		return true;
	}
	catch(exception e){
		return false;
	}
}

bool user::checkPassword(string password)
{
	if(h(salt + password) == this->pass)
		return true;
	else 
		return false;
}