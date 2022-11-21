//int main() 
//{
//	int a=10;//a在内存中要分配空间的4个字节
//		int *pa = &a;//pa用来存放地址 c语言中叫指针变量
//	
//	printf("%p\n",&a);//%p用来打印地址
//	
//	
//	//* 说明 pa是指针变量
//	//int 说明pa执行的对象是int类型的  
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
//	*pa=20;//*为解引用操作 *pa就是通过pa里面的地址，找到a
//	printf("%d\n",a); 
//	
//	return 0;
//}

int main()
{
	printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(short*));
//指针是用来存放地址的，大小相同。指针需要多大空间取决于地址的存储需要多大空间。
// 32 位 32bit--4byte
// 64 位 64bit--8byte
}
