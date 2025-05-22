#include <stdlib.h>

int main()
{

    int List,n;
    int a[100];

    while(1){

    printf("1=Insert\n2=update\n3=delete\n4=display\n5=sort\n6=search\n7=Exit");

    scanf("%d",&List);
    switch(List){
        case 1:{
               printf("VALUE INSERT:");
               scanf("%d",&n);
               for(int i=0;i<n;i++){
                 scanf("%d",&a[i]);
               }
               break;
        }
        case 2:{
               int P,value;

               scanf("%d %d",&P,&value);
               for(int i=n;i>P;i--){
                a[i]=a[i-1];
               }
               a[P]=value;
               n++;
               break;
        }
        case 3:{
               int x;
               printf("Enter your index:");
               scanf("%d",&x);
               for(int i=x;i<n;i++){
                a[i]=a[i+1];
               }
               n--;
               break;
        }
        case 4:{
               for(int i=0;i<n;i++){
                 printf("%d\n",a[i]);
               }
               break;
        }
        case 5:{
               int temp,ch;
               printf("1.Ascending\n2.Descending");

               scanf("%d",&ch);
               if(ch==1){

               for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(a[i]>a[j]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
               }
               }
               else if(ch==2){
               for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(a[i]<a[j]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
               }
               }
               break;
        }
        case 6:{
               int T,found=0;
               scanf("%d",&T);
               for(int i=0;i<n;i++){
                    if(a[i]==T){
                        found=1;
                        break;
                    }

                }
                if(found==1){
                    printf("Found\n");
                }
                else{
                    printf("Not found\n");
                }
                break;
        }
        case 7:{
                 return 0;
        }
        default:
               printf("Invalid input\n");

    }
    }
}
