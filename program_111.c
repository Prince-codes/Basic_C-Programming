// CHECK THE PROGRAM

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle* tr, int n) {
	int temp,a1, a2;
    
    for (int i = 0; i < n; i++) {
        
        int s=(tr[i].a + tr[i].b + tr[i].c)/2;
        a1=sqrt(s* (s-tr[i].a) * (s-tr[i].b) * (s-tr[i].c));
        
        for (int j = i+1; j<n; j++){
            
            int s=(tr[j].a + tr[j].b + tr[j].c)/2;
            a2=sqrt(s* (s-tr[j].a) * (s-tr[j].b) * (s-tr[j].c));
            if (a1>a2){
                temp=tr[i];
                tr[i]=tr[j];
                tr[j]=temp;
            }           
        }
    }
}



int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}