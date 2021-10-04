#include<stdio.h>
#include<math.h>
typedef struct node{
    int weight;
    int profit;
    float ratio;
}knap;
void merge(knap *arr,int l,int m,int h){
    knap temp[h+1];
    int k=0;
    int i=l,j=m+1;
    while(i<=m&&j<=h){
        if(arr[i].ratio>arr[j].ratio)
            temp[k++]=arr[i++];
        else temp[k++]=arr[j++];
    }
    while(i<=m) temp[k++]=arr[i++];
    while(j<=h) temp[k++]=arr[j++];
    for(i=l;i<=h;i++){
        arr[i]=temp[i-l];
    }
}
void mergesort(knap *arr,int l,int h){
    if(l<h){
        int m=(l+h)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,h);
        merge(arr,l,m,h);
        
    }
}
int main(){
    int n,i,bag_wt;float max_pf=0;
    knap s[100];
    printf("enter the total data size =");
    scanf("%d",&n);
    printf("Enter profit and Weight following items \n");
    for(i=0;i<n;i++){
        printf("Profit P(%d) and Weight W(%d) ",i+1,i+1);
        scanf("%d%d",&s[i].profit,&s[i].weight);
        s[i].ratio=(float)s[i].profit/s[i].weight;
    }
      
        
 
    mergesort(s,0,n-1);
      
        for(i=0;i<n;i++){
            printf("%f\n",s[i].ratio);
        }
       printf("enter the size of bag ");
    scanf("%d",&bag_wt);
       i=0;
      
        while(s[i].weight<=bag_wt && bag_wt!=0){
        	  
		   
            max_pf=max_pf+s[i].profit;
            bag_wt=bag_wt-s[i++].weight;}
          
            
           
            
        }
        if(bag_wt!=0){
            max_pf=max_pf+(float)s[i].ratio*bag_wt;
        }
        printf("%f\n",max_pf);
       
    
    

}
