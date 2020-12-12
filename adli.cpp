#include <iostream>
using namespace std;
const int MAX_SIZE=8;
//void merge(char theArray[],int first,int mid,int last);
void merge(char theArray[],int first,int mid,int last)
{ 
	char tempArray[MAX_SIZE];
	int first1=first;
	int last1=mid;
	int first2=mid+1;
	int last2=last;
	int index=first1;
	for(;(first1<=last1)&&(first2<=last2);++index)
	{
		if(theArray[first1]<theArray[first2])
		{
			tempArray[index]=theArray[first1];
			++first1;
		}
		else
		{
			tempArray[index]=theArray[first2];
			++first2;
		}
		
	}
        //for (;first1<=last1;++first1,++index)
        //    tempArray[index] = theArray[first1];
	    for(;first1<=last1;++first1,++index)
	        tempArray[index]=theArray[first1];
        for(;first2<=last2;++first2,++index)
        	tempArray[index]=theArray[first2];
		for(index=first;index<=last;++index)
			theArray[index]=tempArray[index];
		for(int i=first;i<last+1;i++)
		{
			cout<<theArray[i]<<" ";
		}
		cout<<endl;
}
void mergeSort(char theArray[],int first,int last)
{
	
	if(first<last)
	{
		int mid=(first+last)/2;
		cout<<"mergeSort(theArr,"<<first<<","<<last<<")"<<endl;
		for(int i=first;i<last+1;i++)
		{
		cout<<theArray[i]<<" ";
		}
	    cout<<endl;
		mergeSort(theArray,first,mid);
		mergeSort(theArray,mid+1,last);
	    merge(theArray,first,mid,last);   
    }
}
int main()
{
	char Arr[]={'M','J','K','B','D','F','T','O'};
    mergeSort(Arr,0,7);
    system("PAUSE");
	return 0;
}



