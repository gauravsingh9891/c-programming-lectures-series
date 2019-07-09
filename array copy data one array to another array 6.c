main()
{
	int a[100],b[100],n,i;
	printf("enter the limit of an array\n");
	scanf("%d",&n);
	printf("\nEnter the elments");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	printf("\n The elements of an another array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
	getch();
}
