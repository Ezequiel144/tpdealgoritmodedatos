#include<iostream>

using namespace std;

void mostrar(int vect[],int dim){
	for(int i=0;i<dim;i++){
		cout<<vect[i]<<"\t";
	}
}

void mostrarMat(int matriz[5][5],int fila,int colum){
	for(int i=0;i<fila;i++){
		for(int j=0;j<colum;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

int revertir(int vect[],int dim){             //Implemente la "busqueda binaria", no en su totalidad. Tambien use el auxiliar para cambiar los valores.                                        
	int aux = 0;                              //Que usamos para la "busqueda del valor minimo" en clase.                             
	int inf = 0;
 	int sup = dim - 1;
	for(int i=0;i<dim;i++){
		inf = i;
		if(inf < sup){
			if(vect[inf] != vect[sup]){
				aux = vect[inf];
		        vect[inf] = vect[sup];
		        vect[sup] = aux;
			}
			sup = sup - 1;
		}
		
	}
}

int revertirMat(int matriz[5][5],int fila,int colum){   //Implemente el uso del auxiliar para poder cambiar los valores.
	int aux = 0;
	for(int i=0;i<fila;i++){
		for(int j=i+1;j<colum;j++){
			if(matriz[i][j] != matriz[j][i]){
				aux = matriz[j][i];
				matriz[j][i] = matriz[i][j];
				matriz[i][j] = aux;
			}	
		}
	}
	
}

int main(){
	const int dim1 = 5;
	int vect1[dim1] = {4,11,19,8,3};
	
	cout<<"Vector de arreglo 5: "<<endl;
	mostrar(vect1,dim1);
	
	cout<<"\nReverso: "<<endl;
	revertir(vect1,dim1);
	mostrar(vect1,dim1);
	
	cout<<"\n------------------------------------------"<<endl;
	
	const int dim2 = 10;
	int vect2[dim2] = {23,15,1,7,6,27,2,14,12,9};
	
	cout<<"Vector de arreglo 10: "<<endl;
	mostrar(vect2,dim2);
	
	cout<<"\nReversor: "<<endl;
	revertir(vect2,dim2);
	mostrar(vect2,dim2);
	
	cout<<"\n------------------------------------------"<<endl;
	
	const int fila = 5;
	const int colum = 5;
    int matriz[fila][colum] = {{36,7,19,28,45},{17,33,42,3,25},{22,41,32,11,9},{39,47,14,4,23},{16,38,8,27,44}};
    
    cout<<"Matriz: "<<endl;
	mostrarMat(matriz,fila,colum);
	
	cout<<"\nTraspuesta: "<<endl;
	revertirMat(matriz,fila,colum);
	mostrarMat(matriz,fila,colum);
	
	return 0;
}
