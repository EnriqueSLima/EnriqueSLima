#ifndef TIME_H   // Include TIME_H if is not defined
#define TIME_H   // On the first include, define TIME_H to do not add again later 

class Time {
 private:  // Private section
  // Private members
  int hour;     // 0 - 23
  int minute;   // 0 - 59
  int second;   // 0 - 59
 public:   // Public section
  Time(int hour = 0, int minute = 0, int second = 0);         
  int getHour() const;   
  void setHour(int hour);   
  int getMinute() const; 
  void setMinute(int minute); 
  int getSecond() const; 
  void setSecond(int second);
  void print() const;
  void nextSecond();  
};  

#endif  // End of block "#ifndef"









