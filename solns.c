/* Enter your solutions in this file */
#include <stdio.h>
float average(int a[], int n){
int sum=0;
float avg;
for(int i=0;i<n;i++){
sum+=a[i];
}
avg=(float)sum/n;
return avg;
}
int factors(int n, int r[])
{
int p[] ={2,3,5,7,9,11,13,17,19};
int count=0,j=0;
for(int i=0;i<9;i++){
while(n%p[i] ==0){
 r[j]=p[i];
 n=n/p[i];
 count++;
 j++;
}     
}
return count;
}
int max(int a[], int n){

int max=a[0];
for (int i=1;i<n;i++){
if(max<a[i])
  max=a[i];
}
return max;
}
int min(int a[], int n){

int mini=a[0];
for (int i=0;i<n;i++){
if (mini>a[i])
  mini=a[i];
}
return mini;
}
int mode(int a[], int n){
int count[n], maxcount =0;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
  if(a[i]==a[j])
    count[i]+=1;
}
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
 if(count[i]>=count[j])
    maxcount +=1;
 if(maxcount==n){
    return a[i];}
}
}
}













