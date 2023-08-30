#include<stdio.h> 
#include<math.h> 
int main(void){ 
int n,a,b;
printf("Number of people's BMI do you want to calculate?\n"); 
scanf("%d",&n);
float massheight[n][2]; 
float bmi[n]; 
for(a=0;a<n;a++){
   for(b=0;b<2;b++){ 
    switch(b){
    case 0:
    printf("\nPlease Enter the Mass of the person %d in kg: ",a+1); 
    scanf("%f",&massheight[a][0]);
    break; 
    case 1:
    printf("\nPlease Enter the Height of the person %d in meter: ",a+1); 
    scanf("%f",&massheight[a][1]);
    break;}
  }
}
for(a=0;a<n;a++){
 bmi[a]=massheight[a][0]/pow(massheight[a][1],2.0); 
printf("Person %d's BMI is %f\n",a+1,bmi[a]);
}
return 0;
}

