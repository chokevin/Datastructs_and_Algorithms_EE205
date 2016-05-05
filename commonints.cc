#include <iostream>
#include <map>

template<typename T>
int CountCommon(T *A, int sizeA, T* B, int sizeB){
	int count = 0;
	for(int i = 0; i < sizeA; i++){
		for(int j = 0; j < sizeB; j++){
			if(A[i] == B[j]){
				count++;
			}
		}
	}
	return count;

}

int countcommon(int *A, int sizeA, int *B, int sizeB){
	// only works with dissimilar numbers

	/*std::map<int,int> mymap;
	std::map<int,int> mymap2;
	int count;

	for(int i =0; i < sizeA; i++){
		mymap.insert(std::pair<int,int>(A[i],i));
	}
	for(int j = 0; j < sizeB ; j++){
		mymap2.insert(std::pair<int,int>(A[j],j));
	}
	for(int k = 0; k < sizeA; k++){
		if(mymap.find(B[k]) == mymap.end()){

		}
		else{
			count ++;
		}
	}
	return count;*/

	// only works with sorted arrays
	int bigsize;
	int i, j;
	int count = 0;
	i = j = 0;
	if(sizeA > sizeB){
		bigsize = sizeA;
	}
	else{
		bigsize =sizeB;
	}
	while( bigsize ){
		if(A[i] == B[j]){
			count++;
		}
		else if(A[i] < B[j]){
			i++;
		}
		else{
			j++;
		}
		bigsize--;
	}
	return count;
}

int main(){

	int A[7] = {1,3,5,6,7,3,3};
	int B[5] = {2,4,6,7,3};
	char C[4] = {'c','d','e','f'};
	char D[3] = {'c','d','f'};
	int sizeA = 7;
	int sizeB = 5;
	int sizeC = 4;
	int sizeD = 3x;
	int output = CountCommon(A,sizeA,B,sizeB);
	std::cout << "The number of common integers is: " << output << std::endl;
	output = CountCommon(C,sizeC,D,sizeD);
	std::cout << "The number of common integers is: " << output << std::endl;
	
}

