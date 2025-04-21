void reverse(int arr[],int size){
	int start = 0;
	int end = size - 1;
	int temp;
	while(start < end){
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
		
	}
}
