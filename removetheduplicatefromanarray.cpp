#include <iostream>
using namespace std;

void removeDuplicate(int [], int);

int main()
{
 int array[10];
 int i;
 removeDuplicate (array, i);
  return 0;
}

void removeDuplicate(int array[], int)
{

for(i=0;i<size;i++)
{
   for(j=i+1;j<size;)
   {
      if(array[j]==array[i])
     {
        for(k=j;k<size-1;k++)
            array[k]=array[k+1];
         n--; 
      }
      else
         j++;
   }
}
}
