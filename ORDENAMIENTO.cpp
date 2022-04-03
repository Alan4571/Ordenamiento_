#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#define MAX 1000
#include<conio.h>
#define max 100

using namespace std;
void metodoOrdenamiento();
void metodoBusqueda();

//FUNCIONES INSERCION DIRECTA
void prin(int a[], int n)
{
    cout << "Numeros Ordenados: " << endl;

    for (int i = 0; i < n; i++)
        cout << "[ " << a[i] << " ]";
}

void directInsertion(int a[], int n)
{
    int i, k, aux;

    for (i = 0; i <= n - 1; i++)
    {

        aux = a[i];
        k = i - 1;
        while ((k >= 0) && (aux < a[k]))
        {
            a[k + 1] = a[k];
            k = k - 1;
        }
        a[k + 1] = aux;
    }
}


//FUCNIONES MERGE SORT
int a[50];
void merge(int,int,int);
void merge_sort(int izquierda,int derecha){
    int medio;
    if(izquierda<derecha){
        medio=(izquierda+derecha)/2;
        merge_sort(izquierda,medio);
        merge_sort(medio+1,derecha);
        merge(izquierda,medio,derecha);
    }
}
void merge(int izquierda,int medio,int derecha){
    int h,i,j,b[50],k;
    h=izquierda;
    i=izquierda;
    j=medio+1;
    
    while((h<=medio)&&(j<=derecha)){
        if(a[h]<=a[j]){
            b[i]=a[h];
            h++;
        }
        else
            {
                b[i]=a[j];
                j++;
            }
        i++;
    }
    if(h>medio){
        for(k=j;k<=derecha;k++){
            b[i]=a[k];
            i++;
        }
    }
    else
        {
            for(k=h;k<=medio;k++){
                b[i]=a[k];
                i++;
            }
        }
    for(k=izquierda;k<=derecha;k++){
        a[k]=b[k];
        }
}

//FUNCIONES SHELL SORT
int Arreglo[100];
void LeerArreglo(int Numero);
void EscribeArreglo(int Numero);
void Shell(int Numero);

//FUNCIONES SENCUENCIAL
int *numeros,cantidadNumeros,numeroBuscar;
void pedirDatos();
void pedirNumero();
void buscarDatos();

//FUNCIONES QUICK SORT
void quickSort(int[], int);
void print(int[], int);


void Burbuja();
void QuickSort();
void ShellSort();
void HeapSort();
void MergeSort();
void ShakerSort();
void Inserciondirecta();
void InsercionBinaria();

void Secuencial();
void Binaria();
void DiagramaE_R();

int main(){
	int opcion;
	char opc = 's';
	while (opc == 's')
	{
        system("cls");
	cout<<"Ingrese una metodo"<<endl;
	cout<<"1. Metodo Ordenamiento"<<endl;
	cout<<"2. Metodo Busqueda"<<endl;
	cin>>opcion;
	
	if(opcion>5 && opcion <= 0)
	    {
            cout<<"\n \t\t\tOpcion invalida!!!"<<endl;
            cout<<"\n \t\t\tIngrese la Opcion Correcta: ";
            cin>>opcion;
    }
	switch(opcion)
	{
	
		case 1:
         		metodoOrdenamiento();
        break;
        
        case 2:
         		metodoBusqueda();
        break;
		}
	system("Pause()");
	}
}

void metodoOrdenamiento(){
		int opcion;
	char opc = 's';
	while (opc == 's')
	{
        system("cls");
	int opcion;
	cout<<"Ingrese el tipo de ordenamiento"<<endl;
	cout<<"1-Burbuja"<<endl; 
	cout<<"2-Quick Sort"<<endl;
	cout<<"3-Shell Sort"<<endl;
	cout<<"4-Heap Sort"<<endl;
	cout<<"5-Merge Sort"<<endl;
	cout<<"6-Shaker Sort"<<endl;
	cout<<"7-Insercion directa"<<endl;
	cout<<"8-Insercion Binaria"<<endl;
	cout<<"8-PARA REGRESAR"<<endl;
	cin>>opcion;
switch (opcion)
	{
	
		case 1: 
         		Burbuja();
        break;
        case 2: 
         		QuickSort();
        break;
        case 3: 
         		ShellSort();
        break;
        case 4: 
         		HeapSort();
        break;
        case 5: 
         		MergeSort();
        break;
        case 6: 
         		ShakerSort();
        break;
        case 7: 
         		Inserciondirecta();
        break;/*
        case 8: 
         		InsercionBinaria();
        break;*/
        case 8: 
         		cout<<"Desea Regresar S/N ?\n"<<endl;
                fflush(stdin);//It's a function which allows you to flush [clear] the input buffer. 
				cin>>opc;
		break;
		}
	system("Pause()");
	}
}
