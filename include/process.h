#ifndef PROCESS_H
#define PROCESS_H

#include <string>
/*
Basic class for Process representation
It contains relevant attributes as shown below
*/
class Process {
 public:
  Process(int pid);
  int Pid();
  std::string User();
  std::string Command();
  float CpuUtilization() const;
  std::string Ram();
  long int UpTime();

 private:
  int processId_;
  std::string user_;
  std::string command_;
  float cpuUsage_;
  std::string ram_;
  long uptime_;
  enum ProcessCPUStates {
    kUtime_ = 0,
    kStime_,
    kCutime_,
    kCstime_,
    kStarttime_
  };

  // calculate the CPU utilization of this process and save in cpuUsage_
  void calculateCpuUsage();
  // determine the user name that generated this process and save in user_
  void determineUser();
  // determine the command that generated this process and save in command_
  void determineCommand();
  // determine the memory utilization of that process and save in ram_
  void determineRam();
  // determine the age of this process and save in uptime_
  void determineUptime();
};

#endif