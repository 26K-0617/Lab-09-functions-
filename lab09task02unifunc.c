#include <stdio.h>
//lab 9 task2
//top and lowest   how many stu reach pass threshold(entered by user at run time)
//how many share top
void isValid(int arr[], int tot){
    for(int i=0; i<tot; i++){
       while(arr[i]>100 || arr[i]<0){
        printf("Error! Enter marks for student %d between(0-100): \n", i+1);
        scanf("%d", &arr[i]);
       }

    }
}

int findTotal(int arr[], int tot){
    int sum=0;
    for(int i=0; i<tot; i++){
    sum+=arr[i];
    }
    return sum;
} //if i wanted one single func for sum and average would use pointers to update sum and avg variable in main but pointers to not be used here

float findAvg(int classtotal){
    float avg = (float)classtotal/10;
    return avg;
}

int main (){
    int marks[10];
    for(int i=0; i<10; i++){
        printf("Enter marks for student %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    isValid(marks, 10);
   
    for(int i=0; i<10; i++){
        printf(" %d ", marks[i]);
    }
    printf("\nClass total: %d\n", findTotal(marks, 10));
    printf("Class average: %.2f\n", findAvg(findTotal(marks,10)));
return 0;
}
