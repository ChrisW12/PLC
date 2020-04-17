#include<stdio.h> 

  
  
//-----------------------------------------//  
  
enum week {
    Mon = 1, 
    Tue = 2, 
    Wed = 3, 
    Thur = 4, 
    Fri = 5, 
    Sat = 6, 
    Sun = 7
    
}; 
  
//-----------------------------------------//  
  
int main() 
{ 
    enum week Day1; 
    enum week Day2; 
    enum week Day3; 
    enum week Day4; 
    enum week Day5; 
    enum week Day6; 
    enum week Day7; 

//-----------------------------------------//
    
    Day1 = Mon; 
    Day2 = Tue; 
    Day3 = Wed;
    Day4 = Thur;
    Day5 = Fri;
    Day6 = Sat;
    Day7 = Sun;
    
//-----------------------------------------//
    
    printf("%d",Day1+Day2); printf("\n");
    
    printf("%d",Day3*Day4); printf("\n");

    printf("%d",Day5-Day6); printf("\n");
    
    printf("%d",Day7/Day6); printf("\n");
    
    printf("%d",Day7 | Day6); printf("\n");

    printf("%d",Day7 & Day6); printf("\n");

    printf("%d",Day5 ^ Day6); printf("\n");
    
    printf("%d",Day1 >> Day2); printf("\n");
    
    printf("%d",Day1 << Day2); printf("\n");


    return 0; 
}  
