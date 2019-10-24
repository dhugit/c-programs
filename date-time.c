#include <stdio.h>
#include <time.h>

int main (void) {

	struct Hour{

	    int hour;
	    int minute;
	    int second;

	};


	struct Date{

	    int day;
	    int month;
	    int year;
	    struct Hour hour;

	};

	struct Date date;

	char buff[100];
	time_t now = time(0);
	struct tm now_t = *localtime(&now);
	strftime (buff, 100, "%d-%m-%Y %H:%M:%S", &now_t);

	puts(buff);

	date.year = now_t.tm_year + 1900; // years since 1900
	date.month = now_t.tm_mon + 1;  // months since January [0-11]
	date.day = now_t.tm_mday;  // day of month [1-31]

	date.hour.hour = now_t.tm_hour;
	date.hour.minute = now_t.tm_min;
	date.hour.second = now_t.tm_sec;

	printf ("year: %d   month:  %d  day: %d\n\n", date.year, date.month, date.day);
	return 0;

}
