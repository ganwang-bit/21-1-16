//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i;
//    float height;
//    char tmp;
//    scanf("%d",&n);
//    while(getchar()!='\n');
//    for(i=0;i<n;i++)
//    {
//        scanf("%c",&tmp);
//        scanf("%f",&height);
//        if(tmp=='M')
//        {
//            printf("%.2f\n",height/1.09);
//        }
//        else
//        {
//            printf("%.2f\n",height*1.09);
//        }
//        getchar();
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int count=0,tmp;
//    while(~scanf("%d",&tmp))
//    {
//        count++;
//        if(tmp==250)
//        {
//            printf("%d",count);
//            break;
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int year,month,day;
//    scanf("%d-%d-%d",&month,&day,&year);
//    printf("%04d-%02d-%02d",year,month,day);
//}
//#include<stdio.h>
//int main()
//{
//    printf("1 1\n");
//    printf("1 1");
//}
//void menu()
//{
//	printf("*************************\n");
//	printf("*****1.play   0.exit*****\n");
//	printf("*************************\n");
//
//}
//
//
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������ʼ��������Ϸ\n");
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[1001]={0},n,hour[1001]={0},minute[1001]={0},i,time=0,k,count,hour1,minute1;
//    char tmp;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        time=0;
//        count=0;
//        while(scanf("%d %c %d:%d",&k,&tmp,&hour1,&minute1)&&k)
//        {
//            if(tmp=='S')
//            {
//                arr[k]=1;
//                hour[k]=hour1;
//                minute[k]=minute1;
//            }
//            if(tmp=='E'&&arr[k])
//            {
//                time+=(hour1-hour[k])*60+minute1-minute[k];
//                count++;
//                arr[k]=0;
//            }
//        }
//        if(count==0)
//            printf("0 0");
//        else
//        {
//            if(time%count)
//            {
//                if(time/(float)count-time/count>=0.5)
//                    printf("%d %d",count,time/count+1);
//                else
//                    printf("%d %d",count,time/count);
//            }
//            else
//                printf("%d %d",count,time/count);
//        }
//        if(i!=n-1)
//            printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int my_strcmp(const char*a,const char *b)
//{
//    char*aa=(char*)a;
//    char*bb=(char*)b;
//    while(*aa&&*bb&&*aa-*bb)
//    {
//        aa++;
//        bb++;
//    }
//    return *aa-*bb;
//}
//int main()
//{
//    int n,i,count=0;
//    char tmp[8];
//    scanf("%d",&n);
//    while(scanf("%s",tmp)&&my_strcmp("End",tmp))
//    {
//        count++;
//        if(!my_strcmp(tmp,"JianDao"))
//        {
//            if(count==n+1)
//            {
//                count=0;
//                printf("JianDao\n");
//            }
//            else
//                printf("ChuiZi\n");
//        }
//        if(!my_strcmp(tmp,"Bu"))
//        {
//            if(count==n+1)
//            {
//                count=0;
//                printf("Bu\n");
//            }
//            else
//                printf("JianDao\n");
//        }
//        if(!my_strcmp(tmp,"ChuiZi"))
//        {
//            if(count==n+1)
//            {
//                count=0;
//                printf("ChuiZi\n");
//            }
//            else
//                printf("Bu\n");
//        }
//    }
//}
