int main()
{
	int day=0;
	scanf("%d",&day);
	switch(day)
	{
	case 1:
	case 2:	
	case 3:
	case 4:
	case 5:			
	  printf("工作日");
	  break; 
	case 6:
	  printf("周末");
	case 7:
	  break; 
	default:
	  printf("Erro");
	  break;
    }
	return 0;
}
