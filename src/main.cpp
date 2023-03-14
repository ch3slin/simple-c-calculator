#include <iostream>
#include <string>

float addition(float arrnum[], int size);
float subtraction(float arrnum[], int size);
float division (float arrnum[], int size);
float multiplication (float arrnum[], int size);

int main (){
	int lenArr = 0;
	std::cout << "Enter number of values: " << "\n";
	std::cin >> lenArr;
	std::cout << " " << lenArr << "\n";
	
	float arrN[lenArr];
	
	for(int i = 0; i < lenArr;i++){
		std::cout << "Value " << i << " : " << "\n";
		std::cin >> arrN[i];
	}
	
	int opt;
	
	std::string Options = 
	"(1)	Addition\n(2)	Subtraction\n(3)	Division\n(4)	Multiplication";
	std::cout << Options << "\n";
	std::cin >> opt;
	
	switch(opt) {
	case 1:
		std::cout << addition(arrN,lenArr) << "\n";
    break;
	case 2:
		std::cout << subtraction(arrN, lenArr) << "\n";
    break;
	case 3:
		std::cout << division(arrN, lenArr) << "\n";
	break;
	case 4:
		std::cout << multiplication(arrN, lenArr) << "\n";
	break;
	default:
		std::cout << "Wrong selection" << "\n";
}
	
	
}

float addition(float arrnum[], int size){
	float val = 0.0;
	
	for(int i=0;i<size;i++){
		val = val + arrnum[i];
	}
	return val;
}

float subtraction(float arrnum[], int size){
	
	float val = 0.0;
	
	for(int i=0;i<size;i++){
		val = val - arrnum[i];
		i++;
	}
	return val;
}
float division (float arrnum[], int size) {
	
	float val = arrnum[0];
	
	for(int i=0;i<size;i++){
		if(i == 0){
			continue;
		}
		val = val / arrnum[i];
		i++;
	}
	return val;
}

float multiplication (float arrnum[], int size) {
	
	float val = arrnum[0];
	
	for(int i=0;i<size;i++){
		if(i==0){
			continue;
		}
		val = val * arrnum[i];
		i++;
	}
	return val;
}
