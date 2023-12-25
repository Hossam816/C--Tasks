#include <iostream>
#include <cmath>


using namespace std;
class Date{
private:
    int year;
    int month;
    int day;
    static bool isLeapYear(int year) {
        if (year % 4 != 0) return false;
        if (year % 100 != 0) return true;
        return year % 400 == 0;
    }

    // Utility function to get the number of days in a month
    static int daysInMonth(int year, int month) {
        switch (month) {
            case 2: // February
                return isLeapYear(year) ? 29 : 28;
            case 4: case 6: case 9: case 11:
                return 30;
            default:
                return 31;
        }
    }

public:
    Date(int y, int m,int d): year(y), month(m), day(d) {}
    //setters

    void setYear(int y) {
        year = y;
    }
     void setMonth(int m) {
        month = m;
    }
     void setDay(int d) {
        day = d;
    }

    void substractDate(int days){
        while(days> 0){
            day--;
            if(day <1) {
                month --;
                if(month <1) {
                    year --;
                    month = 12;
                }
            }
            days--;
        }
    }
    void print(){
    std::cout<< year<<std::endl;
    std::cout<< month<<std::endl;
    std::cout<< day<<std::endl;

    }


};
int main()
{
    Date date(2023,06,29);

    std::cout<<"My Date: "<<std::endl;
    date.substractDate(100);
    std::cout<<"Date after substracting 100 dayes: ";
    date.print();
    return 0;
}
