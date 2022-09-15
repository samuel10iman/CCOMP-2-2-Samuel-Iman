#include <iostream>
#include <string>
using namespace std;

class Date{
    public:
        Date(int day_, int month_, int year_)
            : day{day_}, month{month_}, year{year_} {
                if ((month_ >= 1) && (month_ <= 12)){
                    month = month_;
                }
                else {
                    cout << "Month is not between 1 and 12" << endl;
                }
            }
        
        void setDay(int day_){
            day = day_;
        }

        int getDay() const{
            return day;
        }

        void setMonth(int month_){
            month = month_;
        }

        int getMonth(){
            return month;
        }

        void setYear(int year_){
            year = year_;
        }

        void displayDate(){
                cout << month << " / " << day << " / " << year;

        }

        int getYear(){
            return year;
        }

    private:
        int day;
        int month;
        int year;
};