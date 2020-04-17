#include <stdio.h>
#include <time.h>

int main()
{
  

clock_t start;
clock_t end;
double timer;
  


//-------------------------------------------------//


start = clock();
  
for(int i=0; i<10000; i++){
    func_subscript();   
}

end = clock();
timer = (((double) (end - start)) / CLOCKS_PER_SEC);
  
printf("Time for subscript reference::%f\n",timer);
  
  
//-------------------------------------------------//
  
  
start = clock();

for(int i=0; i<10000; i++){
    func_pointers();
}

end = clock();
timer = (((double) (end - start)) / CLOCKS_PER_SEC);
  
printf("Time for pointer reference::%f\n",timer);
  
return 0;
}


//-------------------------------------------------//


void func_subscript()   {
    int array[10][10] = {0}; 

    for(int j=0; j<10 ; j++){
        for(int i=0; i<10; i++){
            array[i][j];
        }
    }

    return;
}


//-------------------------------------------------//



void func_pointers()  { 
    int array[10][10] = {0}; 

    for(int j=0; j<10 ; j++)  {
        for(int i=0; i<10; i++)  {*(*(array+i)+j);
        }
    }

return;
}
