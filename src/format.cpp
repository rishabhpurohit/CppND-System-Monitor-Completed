#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
  string t = "00:00:00";
  long c = 0;
  if (seconds > 0) {
    c = seconds / 3600;// calculated hours
    t = TimeValueToString(c) + ":";
    
    c = (seconds / 60) % 60;// calculated minutes
    t += TimeValueToString(c) + ":";
    
    c = seconds % 60; // calculated seconds
    t += TimeValueToString(c);
  }

  return t;
}

string Format::TimeValueToString(long time) {
  if (time < 10)
    return "0" + std::to_string(time);
  else
    return std::to_string(time);
}