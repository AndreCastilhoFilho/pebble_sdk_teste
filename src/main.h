#pragma once

int getStartTime();

void  set_sampling_rate(AccelSamplingRate rate);


typedef struct _data_log LOG;
  struct _data_log{ 
  uint32_t time ;  
  int32_t delta ;
  int32_t tang;
  int16_t x ;
  int16_t y ;
  int16_t z; 
  bool status;  
};
