#include <iostream>

bool leap_year(int year){
    bool ly = false;

    if ((year%4)==0){
        if ((year%100)==0){
            if ((year%400)==0){
                ly = true;
            }
            else{
                ly = false;
            }
        }
        else{
            ly = true;
        }
    }
    else{
        ly = false;
    }
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    bool is_leap = leap_year(y1);
    
    if (is_leap==true){
        if (m1 == 2){
            if (d1 == 29){
                d2 = 1;
                m2 = 3;
                y2 = y1;
            }
            else{
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }
        else if (( m1 == 1)||(m1 == 3)||(m1 == 5)||(m1 == 7)||(m1 == 8)||(m1 == 10)){
            if (d1 == 31){
                d2 = 1;
                m2 = m1 + 1;
                y2 = y1;
            }
            else{
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }
        else if (m1 == 12){
            if (d1 == 31){
                d2 = 1;
                m2 = 1;
                y2 = y1 + 1;
            }
            else{
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }
        else{ 
            if (d1 == 30){
                d2 = 1;
                m2 = m1 + 1;
                y2 = y1;
            }
            else{
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }
    }
    else{
        if (m1 == 2){
            if (d1 == 28){
                d2 = 1;
                m2 = 3;
                y2 = y1;
            }
            else{
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }        
        else if (( m1 == 1)||(m1 == 3)||(m1 == 5)||(m1 == 7)||(m1 == 8)||(m1 == 10)){
            if (d1 == 31){
                d2 = 1;
                m2 = m1 + 1;
                y2 = y1;
            }
            else{
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }
        else if (m1 == 12){
            if (d1 == 31){
                d2 = 1;
                m2 = 1;
                y2 = y1 + 1;
            }
            else{
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }
        else{
            if (d1 == 30){
                d2 = 1;
                m2 = m1 + 1;
                y2 = y1;
            }
            else{
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }
    }


}

int main(){
    int d1, m1, y1;
    int d2=0, m2=0, y2=0;
    std::cout << "Please enter the date, month, year: " << std::endl;
    std::cin >> d1 >> m1 >> y1;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << "The current date is " << d1 << "/" << m1 << "/" << y1 << std::endl;
    std::cout << "The next date is " << d2 << "/" << m2 << "/" << y2 << std::endl;
    if (leap_year(y1)==true){
        std::cout << "The year is a leap year" << std::endl;
    }
    else{
        std::cout << "The year is not a leap year" << std::endl;
    }

    
}
