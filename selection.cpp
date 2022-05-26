/*
	function for selection sort
	Owner-sakshi Ambre
	BATCH-PPA9
*/
//function for selection sort
void selection_sort(int a[],int n)
{
	int i,j,temp;//defining variables i,j,temp
	for(j=0 ; j<n-1 ; j++)//for loop
	{
		for(i=j+1 ; i<n ; i++)//for loop
		{
			if(a[j] > a[i])//if condition
			{
				//swapping a[j] and a[i]
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}//end of for loop
	}//end of outer for loop
}//end of function

