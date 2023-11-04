#include <stdio.h>

void Nhap(int a[], int n){
    for(int i=0; i<=n-1; i++){
        scanf("%d",&a[i]);
    }
}

void Xuat(int a[], int n){
    for(int i=0 ; i<=n-1 ; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void sapXep(int a[], int n){  
   int i,  j;
    for (i=0 ; i<n-1 ; i++)
    {
        for (j=i+1 ; j<n ; j++)
        {
             if(a[i]>a[j]) 
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int tinhMax(int a[], int n){
	int sum=0;
	for(int i=0 ; i<n-1 ; i++){
		sum=sum+a[i];
	}
	return sum;
}
int tinhMin(int a[], int n){
	int sum=0;
	for(int i=1 ; i<n;i++){
		sum=sum+a[i];
	}
	return sum;
}
int timMax(int a[], int n){
	int max=a[0];
	for(int i=1;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
}
int timMin(int a[], int n){
	int min=a[0];
	for(int i=1;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	return min;
}

void evenNum(int a[], int n){
	int b[5];
	int j=0;
	for(int i=0;i<5;i++){
		if(a[i]%2==0){
			b[j]=a[i];
			j++;
		}
	}
	Xuat(b,j);
}
void oddNum(int a[], int n){
	int b[5];
	int j=0;
	for(int i=0;i<5;i++){
		if(a[i]%2==1){
			b[j]=a[i];
			j++;
		}
	}
	Xuat(b,j);
}
int main(){
    int a[5];
    Nhap(a,5);
    sapXep(a,5);
    int max= tinhMax(a,5);
    int min = tinhMin(a,5);
    printf("%d %d\n",max,min);
    int maxMang = timMax(a,5);
    printf("%d\n", maxMang);
    int minMang = timMin(a,5);
    printf("%d\n", minMang);
    evenNum(a,5);
    oddNum(a,5);
}


