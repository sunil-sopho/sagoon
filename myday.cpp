#include <bits/stdc++.h>

using namespace std;

typedef struct date{
	int tdate;
	string month;
	int hours;
	int minutes;
}

class myday {
	public: 
		myday();
		bool createReminder(string type, date  remind);
		bool createSchedule(date dat, string title, string description);
		bool createTodoList(std::vector<string> v,date dat);

		void showCalander();


}

