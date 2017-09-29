#include <stdio.h>
#include <stdlib.h>

int find_outlier(const int *values, size_t count){
	int even = 0;
  int odd = 0;
  int numeven = 0;
  int numodd = 0;
  int i;
  for(i = 0; i < count; i++){
  	if((values[i]%2)==0){
    	even++;
      numeven = values[i];
    }
    else{
    	odd++;
      numodd = values[i];
    }
  }
  if(odd == 1){
		return numodd;
  }
  else{
  	return numeven;
  }
};

int main(){
  int values[] = {5, 7, 31, 28, 1};
  int values2[] = {4, 108, 42, 99, 80};
  int valuecount = 5;
  int valuecount2 = 6;

  printf("ODD NUMBER OUT FOR ARRAY1 = %d\n", find_outlier(values, valuecount));
  printf("ODD NUMBER OUT FOR ARRAY2 = %d\n", find_outlier(values2, valuecount2));

  return 0;
}
