#include <stdio.h>
float kmToMiles(float num){
    float miles = num/1.609;
    return miles;
}
float inchesToFoot(float num){
    float foot = num/12;
    return foot;
}
float cmsToInches(float num){
    float inches = num/2.54;
    return inches;
}
float poundToKgs(float num){
    float kgs = num/2.205;
    return kgs;
}
float inchesToMeters(float num){
    float meters = num/39.37;
    return meters;
}
void display(){
    printf("\nSelect the corresponding number for unit conversion\n0: Kilometers to Miles\n1: Inches to Foot\n2: centimeters to Inches\n3: Pound to Kilograms\n4: Inches to Meters\nENTER -1 TO EXIT PROGRAM\n\n");
}

int main() {
    int index;
    float number;
    while (1 >= 0){
        printf("\nEnter the number you want to convert: ");
        scanf("%f",&number);

        display();
        
        printf("\nEnter the index number from above: ");
        scanf("%d",&index);
        
        switch(index){
            case 0: printf("You enterd %f and it is converted to = %f\n",number ,kmToMiles(number));
            break;
            case 1: printf("You enterd %f and it is converted to = %f\n",number ,inchesToFoot(number));
            break;
            case 2: printf("You enterd %f and it is converted to = %f\n",number ,cmsToInches(number));
            break;
            case 3: printf("You enterd %f and it is converted to = %f\n",number ,poundToKgs(number));
            break;
            case 4: printf("You enterd %f and it is converted to = %f\n",number ,inchesToMeters(number));
            break;
            case -1: goto end;
        }
        
    }
end:
return 0;
}