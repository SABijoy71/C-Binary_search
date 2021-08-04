// This portion is about binary search //
#include <stdio.h>
#include <math.h>
#include <string.h>

int binary_search(int number[10],int num,int high_index,int low_index,int mid_index,int i);

int main(){

	int number[10] = {1,4,5,9,5,6,7,10,12,14};

	int num,low_index,high_index,mid_index,i;
	low_index = 0;
	high_index = 9;

	printf("Enter any number for searching in the array: ");
	fflush(stdout);
	scanf("%d", &num);

	binary_search(number,num,high_index,low_index,mid_index,i);

	return 0;
}

int binary_search(int number[10],int num,int high_index,int low_index,int mid_index,int i){

	for(i = 0; i < 10; i++){

		mid_index = (low_index+high_index)/2;

		if(num == number[mid_index]){
			printf("%d is founded in this array\n", num);
			break;
		}
		if(num > mid_index){
			low_index = mid_index + 1;
		}else{
			high_index = mid_index - 1;
		}
		if(low_index > high_index){
			printf("%d is not founded in this array\n", num);
			break;
		}
	}

	return ;

}