void bubble_sort(int sz,int arr[])//形参arr的本质是指针 
{
	//计算数组元素个数
	//int sz=sizeof(arr)/sizeof(arr[0]);//arr 
	//确定趟数 
	int i=0;
	for(i=0; i<sz-1-i; i++)
	{
//			int n;
//			for(n=0;n<10;n++)
//          {
//        	printf("%d",n,arr[n]);
//        	}
//         	printf("\n");
		
		//一趟冒泡排序的过程 
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				//交换
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
//			int n;
//			for(n=0;n<10;n++)
//            {
//           	printf("%d",n,arr[n]);
//          	}
//          	printf("\n");
		}
	}
}

int main()
{
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	//排序为升序——冒泡排序 
	//计算数组元素个数
	int sz=sizeof(arr)/sizeof(arr[0]);//arr 
	bubble_sort(sz,arr);//s数组的传递其实是数组首元素的传递 
	
	return 0;
}
