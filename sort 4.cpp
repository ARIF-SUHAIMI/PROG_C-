/*quick sort based on pivot value.

no merge operation needed; one item left to be sorted
other item already sorted.

pivot = first elemnt in the array

partition array :
    items<pivot
    items>=pivot
    pivot is now incorrect sorted position

sort left section until only one item left
sort right section until one item left

quicksort()
    recursive function that will partition the list into several sub
        until one item left

partition()
    organize the data so the items with values less than pivot will beon the left of the pivot
        value at the right pivot contains items that are greater or equal to pivot

*/


#include <iostream>

using namespace std;

int partition(int T[],int first,int last)
{
    int pivot, temp;
    int loop, cutPoint, bottom, top;
    pivot=T[0];
    bottom=first;
    top=last;
    loop=1;
    cout<<"partition(T,"<<bottom<<","<<top<<")"<<endl;
    while (loop) 
    {
        while (T[top]>pivot)
        { 
            top--; 
        }
        while(T[bottom]<pivot)
        { 
            bottom++;
        }
        if(bottom<top)
        { 
            temp=T[bottom];
            T[bottom]=T[top];
            T[top]=temp;
        }
        else 
        {
            loop=0;
            cutPoint=top;
        }
        cout<<"pivot = "<<pivot<<", bottom = "<<bottom<<", top = "<<top<<endl;
        for(int h=first;h<last+1;h++)
        {
            cout<<T[h]<<" ";
        }
        cout<<endl;
    }
    return cutPoint;
} 

void quickSort(int T[],int first,int last)
{
    int cut;
    cout<<"quickSort(T,"<<first<<","<<last<<")"<<endl;
    for(int j=first;j<last+1;j++)
    {
        cout<<T[j]<<" ";
    }
    cout<<endl<<endl;
    if (first<last)
    {
        cut=partition(T,first,last);
        cout<<"cutpoint = "<<cut<<endl<<endl;
        quickSort(T,first,cut);
        quickSort(T,cut+1,last);
    }
}

// Quick Sort function
/*int partition(int T[], int first,int last)
{ int pivot, temp;
  int loop, cutPoint, bottom, top;
  pivot= T[0]; 
  bottom=first; top= last;
  loop=1;   
  //always TRUE
  while (loop) {
    while (T[top]>pivot)
    {   top--;          }
    while(T[bottom]<pivot)
    {   bottom++;       }
    if (bottom<top) {
      temp=T[bottom];
      T[bottom]=T[top];
      T[top]=temp;
    }  
    else {
      loop=0;
      cutPoint = top;
    }
  }//end while
  return cutPoint;
}

void quickSort(int arrayT[],int first,int last)
{
  int cut;
  if (first<last){
    cut = partition(arrayT,first,last);
    quickSort(arrayT, first,cut);
    quickSort (arrayT, cut+1, last);
  }
}*/

int main()
{
    int T[]={18,11,64,15,43};
    quickSort(T,0,4);
    for(int j=0;j<5;j++)
    {
        cout<<T[j]<<endl;
    }
    system("PAUSE");
    return 0;
}