#include <stdio.h>
struct { 
     int hour, minute, second;
} time;
int main(void)
{  int n;
      scanf("%d:%d:%d",&time.hour,&time.minute,&time.second);
      scanf("%d",&n);
      time.second=time.second+n;
      if(time.second >= 60){
           time.minute++ ; 
          time.second = time.second-60;
          if(time.minute == 60){
              time.hour++; 
              time.minute = 0;
              if( time.hour==24  ) 
                 time.hour = 0; 
          }
      }
      if(time.hour<10){
      	printf("0%d:",time.hour);
      } 
      else{
      	printf("%d:",time.hour);
      }
      
      if(time.minute<10){
      	printf("0%d:",time.minute);
      } 
      else{
      	printf("%d:",time.minute);
      }
	  
	  if(time.second<10){
      	printf("0%d",time.second);
      } 
      else{
      	printf("%d",time.second);
      }
      return 0;
}
