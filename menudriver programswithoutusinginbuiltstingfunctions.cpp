#include<iostream>
using namespace std;

bool checka(int x, int y, int m, int n){
	if((x==m)&&(y==n))
		return true;
	else
		return false
}

bool checkp(int i, int j, int l, int m){
	if(j==l){
		return true;
	}
	else{
		return false;
	}
}

void add(int **a, int **b, int r, int c){
	int **arr = new int *[r];
	for(int i =0; i<r; i++){
		arr[i] = new int[c];
	}
	for(int j=0; j<r; j++){
		for(int k=0; k<c; k++){
			arr[j][k] = a[j][k] + b[j][k];
			cout<<arr[j][k]<<"\t";
		}
	}
}

void sub(int **a, int **b, int r, int c){
	int **arr = new int *[r];
	for(int i =0; i<r; i++){
		arr[i] = new int[c];
	}
	for(int j=0; j<r; j++){
		for(int k=0; k<c; k++){
			arr[j][k] = a[j][k] - b[j][k];
			cout<<arr[j][k]<<"\t";
		}
	}
}

void multiplication(int **a, int **b, int r1, int c1, int r2, int c2){
	int **arr = new int *[r1];
	for(int l=0; i<r1; l++){
		arr[l] = new int[c2];
	}
	for(int i=0; i<r1; i++){
		for(int j=0; j<c2; j++){
			for(int k=0; k<c1; k++){
				arr[i][j] += a[i][k] * b[k][j];
				cout<<arr[i][j]<<"\t";
			}
		}
	}
}

void transpose(int *a, int r, int c){
	int **arr = new int *[c];
	
	for(int i=0; i<c; i++){
		arr[i] = new int[r];
	}
	for(int j=0; j<c; j++){
		for(int k=0; k<r; k++){
			arr[j][k] = arr[j][k];
			cout<<arr[i][j]<<"\t";
		}
	}
}

int main(){
	int r1, c1, r2, c2
	cout<<"Enter the no of rows of 1st matrix";
	cin>>r1;
	cout<<"Enter the no of col of 1st matrix";
	cin>>c1;
	int **a = new int *[r1];
	
	for(int i=0; i<r1; i++){
		a[i] = new int[c1];
	}
	
	cout<<"Enter the no of rows of 2nd matrix";
	cin>>r2;
	cout<<"Enter the no of col of 2nd matrix";
	cin>>c2;
	int **b = new int *[r2];
	
	for(int j=0; j<r2; j++){
		b[j] = new int[c2];
	}
	
	cout<<"Enter the elements of the first matrix";
	for(int k=0; k<r1; k++){
		for(int l=0; l<c1; l++){
			cin>>a[k][l];
		}
		cout<<"\n";
	}
	
	cout<<"Enter the elements of the second matrix";
	for(int m=0; m<r2; m++){
		for(int n=0; n<c2; n++){
			cin>>a[m][n];
		}
		cout<<"\n";
	}
	
	do{
		cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n0.Exit"<<endl;
		cout<<"Enter your choice:";
		cin>>opt;
		switch(opt){
			
			case 1:
			if((checka(r1,c1,r2,c2))==true){
				add(a,b,r1,c1);
			}
			else{
				break;
			}
			break;
			
			case 2:
			if((checka(r1,c1,r2,c2))==true){
				sub(a,b,r1,c1);
			}
			else{
				break;
			}
			break;
			
			case 3:
			if((checkp(r1,c1,r2,c2))==true){
				multiplication(a,b,r1,c1,r2,c2);
			}
			else{
				break;
			}
			break;
			
			case 4:
			int x;
			cout<<"Which matrix do you want to transpose 1st or 2nd";
			cin>>x;
			if(x==1){
				transpose(a,r1,c1); //transpose of the 1st matrix
			}
			else if(x==2){
				transpose(b,r2,c2); //transpose of the 2nd matrix;
			}
			break;
			
			case 0:
			break;
			
			default:
			cout<<"Wrong choice try again";
		}
	}while(opt!=0)
		return 0;
}
 