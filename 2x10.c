void test() 
{
	
	static int a=1; //2~10
	//int a =1;  10'2'
	a++;
	printf("%d",a);
}

int main()
{
	int i=0;
	while(i<10)
	{
		test();
		i++;
		
	}
	return 0;
}
