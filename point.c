//int main() 
//{
//	int a=10;//a���ڴ���Ҫ����ռ��4���ֽ�
//		int *pa = &a;//pa������ŵ�ַ c�����н�ָ�����
//	
//	printf("%p\n",&a);//%p������ӡ��ַ
//	
//	
//	//* ˵�� pa��ָ�����
//	//int ˵��paִ�еĶ�����int���͵�  
//	 
//	 char ch='w';
//	char * pc=&ch;
//	 
//	return 0; 
//}
//
//int main()
//{
//	int a=10;
//	
//	int*pa=&a;
//	
//	*pa=20;//*Ϊ�����ò��� *pa����ͨ��pa����ĵ�ַ���ҵ�a
//	printf("%d\n",a); 
//	
//	return 0;
//}

int main()
{
	printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(short*));
//ָ����������ŵ�ַ�ģ���С��ͬ��ָ����Ҫ���ռ�ȡ���ڵ�ַ�Ĵ洢��Ҫ���ռ䡣
// 32 λ 32bit--4byte
// 64 λ 64bit--8byte
}
