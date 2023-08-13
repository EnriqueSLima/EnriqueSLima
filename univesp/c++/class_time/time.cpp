/* Implementation Class Time */
#include <iostream>  // to use function std::cout.
#include "time.h"    // To visualize class Time.

using namespace std; // to use cout instead of std::cout.

/* 
   Getters
 */
int Time::getHour() const {
  return hour;
}

int Time::getMinute() const {
  return minute;
}

int Time::getSecond() const {
  return second;
}

/*
  Setters
 */
void Time::setHour(int hour) {
  this->hour = hour;
}

void Time::setMinute(int minute) {
  this->minute = minute;
}

void Time::setSecond(int second){
  this->second = second;
}

void Time::print() const {
  cout << hour << ":" << minute << ":" << second << endl;     
}

void Time::nextSecond() {
  second += 1;
  if (second >= 60) {
    second = 0;
    minute += 1;
  }
  if (minute >= 60) {
    minute = 0;
    hour += 1;
  }
  if (hour >= 24) {
    hour = 0;
  }
}


Time::Time(int h, int m, int s) : hour(h), minute(m), second(s) {

}
