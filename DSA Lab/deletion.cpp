#include <iosteam>
using namespace std;
int main()
{
int a[100],k,item;
int i,j,n;
printf("\n enter the max no.of elements u wanna build an array: ");
scanf("%d",&n);
printf("\n enter the elements: \n");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the element with position u wanna insert: ");
scanf("%d%d",&item,&k);
j=n;

while(j>=k)
{
a[j+1]=a[j] ;
j--;
}
a[k] =item;
n=n+1;
for(i=1;i<=n;i++)
printf("\n%d",a[i]);
 return 0;
}



