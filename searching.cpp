/*searching
    sequential search
    binary search
    binary search tree ( last topic )
    indexing (  gak belajar )
        analyze the effiecientcy of the searching technique
        implement searching technique in problem solving

external search : implement on very large size of data. half data on ram half on secondary storege
internal : small data. data store in ram.

int sequensearch(int search_key,int array[],int size)
{
    int p;
    int index=-1;
    for(int p=0;p<size;p++)
    {
        if(search_key==array[p])
        {
            index=p;
            break;
        }
    }
    return index;
}

int binarysearch(int search,int size,const int array[])
{
    bool found=false;
    int index=-1;
    int middle;
    int left=0;
    right=size+1;
    while((left<=right)&&(!found))
    {
        middle=(left+right)/2;
        if(array[middle]==search)
        {
            index=middle;
            found=true;
        }
        else if(array[middle]>search)
            right=middle-1;
        else
            left=middle+1
    }
    return index;
}
*/

