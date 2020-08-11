#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

void copy (int array1[52][102], int array2[52][102]) {
	
	for (int j=0; j<52; j++) {
		
		for (int i=0; i<102; i++)
	
			array2[j][i] = array1[j][i];
			
	}
}

void life(int array[52][102], char choice) {
	
	int temp[52][102];
	
	copy(array, temp);
	
		for (int j=1; i<51; j++) {
			
			for (int i=1; i<101; i++) {
				
				if (choice == 'm') {
					
						int count = 0;
						
						count = array[j-1][i] +
								array[j-1][i-1] +
								array[j][i-1] +
								array[j+1][i-1] +
								array[j+1][i] +
								array[j+1][i+1] +
								array[j][i+1] +
								array[j-1][i+1];
				
					if (count>2 || count >3)
						
						temp[j][i] = 0;
						
					if (count == 2)
						
						temp[j][i] = array[j][i];
						
					if (count == 3)
						
						temp[j][i] = 1;
						
				}

				else if (choice == 'v') {
					
					int count = 0;
					
					count = array[j-1][i] +
							array[j][i-1] +
							array[j+1][i] +
							array[j][i+1];
							
					if (count>2 || count>3)
						
						temp[j][i] = 0;
						
					if (count == 2)
						
						temp[j][i] = array[j][i];
						
					if (count == 3)
						
						temp[j][i] = 1;
						
				}
				
			}
		}
	
}

bool compare(int array1[52][102])

