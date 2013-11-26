/*
 * main.cpp
 *
 *  Created on: 2013Äê11ÔÂ26ÈÕ
 *      Author: Administrator
 */

#include<iostream>
using namespace std;
int days;
int get_dayofweek();
int get_year();
int get_month(int);
int main(){
	int year,month,dayofweek;
	int leep_year;
	char week[7][10]={"Saturday", "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
	while ((cin>>days)&& days != -1){
		dayofweek=get_dayofweek();
		year = get_year();
		leap_year = (year % 4 == 0 && year % 100 != 0||year % 400 == 0);
		month = get_month(leap_year);
		cout<<year<<"-"<<month<<"-"<<++days<<" "<<week[dayofweek];
	}
	return 0;
}

int get_dayofweek(){
	int dayofweek;
	dayofweek = days % 7;
	return dayofweek;
}

char week[7][10]={"Saturday", "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};

int get_year(){
	int i = 2000,leap_year;
	while(1){
		leap_year = (i % 4 == 0 && i % 100 != 0 || i % 400 == 0);
		if (leap_year == 1 && days >= 366){
			days=days - 366;
			i++;
			continue;
		}
		else if(leap_year == 0 && days = 365){
			days = days - 365;
			i++;
			continue;
		}
		else
			break;
	}
	return 0;
}


