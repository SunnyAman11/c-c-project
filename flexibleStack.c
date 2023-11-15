#include<stdio.h>
#include<stdlib.h>
int* push(int ar[1],int* size,int* tos,int val){
    int* newst;int i;
    if (*tos==*size-1){
        printf("stack overflow\n");
        *size=(*size)*2;
        newst=(int*)malloc((*size)*(sizeof(int)));
        if (newst==NULL){
            printf("no space available");
            return (ar);
        }
        printf("allocate space %d\n",*size);
        for (i=0;i<*tos;i++){
            newst[i]=ar[i];
        }
        
        printf("val to be put = %d\n",val);
        (*tos)++;
        newst[*tos]=val;
        return (newst);
    }
    (*tos)++;
    ar[*tos]=val;
    printf("inserted elements in the stack\n");
    printf("val =%d\n",ar[*tos]);
    return (ar);

}
int pop(int ar[],int* tos){
    int val;
    if (*tos==-1){
        printf("stack is empty\n");
        return -1;
    }
    val=ar[*tos];
    (*tos)--;
    return val;

}
int main(){
    int size=1;int tos=-1;int val;int* ar;int i;int* newar; 
    val=1;
    ar=(int*)malloc((size)*sizeof(int));
    ar=push(ar,&size,&tos,val);
  
    val=2;
     
    ar=push(ar,&size,&tos,val);
    for (i=0;i<=tos;i++){
        printf("%d",ar[i]);
        printf("\n");
    }
    
    val=3;
    printf("val %d\n",val);
    ar=push(ar,&size,&tos,val);
    for (i=0;i<=tos;i++){
        printf("top value = %d",ar[i]);
        printf("\n");
    }
    val=4;
     printf("val%d\n",val);
    ar=push(ar,&size,&tos,val);
    for (i=0;i<=tos;i++){
        printf("%d",ar[i]);
        printf("\n");
    }
    
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar=newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar=newar;
         printf("size of array : %d \n",sizeof(ar));

    }

    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
         printf("size of array : %d \n",sizeof(ar));

    }

    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
       
        free(ar);
         ar = newar;
         printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    val=pop(ar,&tos);
    printf("topmost value of stack %d\n",val);
    if (tos+1<=size/4){
        size=size/2;
        newar=(int*)malloc(sizeof(size));
        for (i=0;i<=tos;i++){
            newar[i]=ar[i];
            
        }
        
        free(ar);
        ar = newar;
        printf("size of array : %d \n",sizeof(ar));

    }
    
     return 0;

}
