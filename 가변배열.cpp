#include <iostream>
using namespace std;
int main() {
	int arr_1[5]={1,2,3,4,5};
	int n=0;
	cin>>n;
	int *arr_2=new int[n]{};// 0 init
	for (int i=0;i<n;i++){
		if(i>=5) break;
		arr_2[i]=arr_1[i];
		cout<<arr_2[i];
	}
	delete arr_2;
	return 0;
}


