void bubble_sort(int sz,int arr[])//�β�arr�ı�����ָ�� 
{
	//��������Ԫ�ظ���
	//int sz=sizeof(arr)/sizeof(arr[0]);//arr 
	//ȷ������ 
	int i=0;
	for(i=0; i<sz-1-i; i++)
	{
//			int n;
//			for(n=0;n<10;n++)
//          {
//        	printf("%d",n,arr[n]);
//        	}
//         	printf("\n");
		
		//һ��ð������Ĺ��� 
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				//����
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
	//����Ϊ���򡪡�ð������ 
	//��������Ԫ�ظ���
	int sz=sizeof(arr)/sizeof(arr[0]);//arr 
	bubble_sort(sz,arr);//s����Ĵ�����ʵ��������Ԫ�صĴ��� 
	
	return 0;
}
