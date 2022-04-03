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
//////////////////////////////////////	BURBUJA /////////////////////////////////////////////
void Burbuja(){
	int i,j,n;
	cout<<"Indique la cantidad de numeros para el arreglo:"<<endl;
	cin>>n;
	cout<<""<<endl;
	float numero[n];
	float aux;
	
	cout<<"Ingrese los numeros a ordenar:"<<endl;
	for (i=0; i<n; i++){
		cout<<"numero"<<" "<<i+1<<":";
		cin>>numero[i];
	
						}
	for(j=0; j<n-1; j++)
		for( i=0;i<n-1;i++){
			if(numero[i] > numero[i+1])
			{
				aux = numero[i];
				numero[i] = numero[i+1];
				numero[i+1] = aux;

			}
							}
	cout<<""<<endl;							
	cout<<"Los numeros ordenados son:"<<endl;						
	for(i=0; i<n; i++)
	cout<<numero[i]<<endl;
}

////////////////////////////////////////////////  QUICK SORT ///////////////////////////////////////////////
void QuickSort(){ 
	int n;
	cout << "Ingresar los datos" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingresar los datos " << i + 1 << " : " << endl;
        cin >> a[i];
    }
    quickSort(a, n);
    print(a, n);

}

void quickSort(int a[], int n)
{
    int tope, ini, fin, pos;
    int may[MAX], menor[MAX];
    tope = 0;
    menor[tope] = 0;
    may[tope] = n - 1;
    while (tope >= 0)
    {
        ini = menor[tope];
        fin = may[tope];
        tope--;

        int izq, der, aux;
        bool band;
        izq = ini;
        der = fin;
        pos = ini;

        band = true;

        while (band == true)
        {
            while ((a[pos] < a[der]) && (pos != der))
                der--;

            if (pos == der)
                band = false;
            else
            {
                aux = a[pos];
                a[pos] = a[der];
                a[der] = aux;
                pos = der;
            }

            while ((a[pos] > a[izq]) && (pos != izq))
                izq++;

            if (pos == izq)
                band = false;
            else
            {
                aux = a[pos];
                a[pos] = a[izq];
                a[izq] = aux;
                pos = izq;
            }
        }

        if (ini <= (pos - 1))
        {
            tope++;
            menor[tope] = ini;
            may[tope] = pos - 1;
        }

        if (fin >= (pos + 1))
        {
            tope++;
            menor[tope] = pos + 1;
            may[tope] = fin;
        }
    }
}

void print(int a[], int n)
{
    cout << "Ordenar datos" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "[" << a[i] << "]";
    }
}

///////////////////////////////////////// SHELL SORT //////////////////////////////////////////
void ShellSort(){
	  int Num;
    cout<<"Ingrese dimension del arreglo : ";
    cin>>Num;
    LeerArreglo(Num);
    Shell(Num);
    cout<<endl;
    EscribeArreglo(Num);
}
void LeerArreglo(int Numero){
    int i;
    for(i=1;i<=Numero;i++)
    {
        cout<<"Arreglo["<<i<<"]=";
        cin>>Arreglo[i];
    }
}

void EscribeArreglo(int Numero){
    int i;
    cout<<"elementos ordenados por metodo Shell sort"<<endl;
    for(i=1;i<=Numero;i++)
    {
        
        cout<<"\t"<<Arreglo[i];
    }
    cout<<endl;
}

void Shell(int Numero){
    int i,j,k,incremento,aux;
    
    incremento=Numero/2;
    
    while(incremento>0){
        for(i=incremento+1;i<=Numero;i++){
            j=i-incremento;
            while(j>0){
                if(Arreglo[j]>=Arreglo[j+incremento]){
                    aux = Arreglo[j];
                    Arreglo[j] = Arreglo[j+incremento];
                    Arreglo[j+incremento] = aux;
                }
                else{
                        j=0;
                    }
                j=j-incremento;
            }
        }
        incremento=incremento/2;
    }
}

/////////////////////////////////////////////// HEAP SORT //////////////////////////////////////////
void HeapSort(){
	int A[max],j,item,temp,i,k,n;
    cout<<"Ingresa la cantidad de elementos del arreglo: ";
    cin>>n;
    cout<<endl;
    cout<<"Ingrese los numeros a ordenar: "<<endl;
   
    for(i=1;i<=n;i++)
    cin >> A[i];
 
    for(k=n;k>0;k--)
    {
        for(i=1;i<=k;i++)
        {
            item=A[i];
            j=i/2;
            while(j>0 && A[j]<item)
            {
                A[i]=A[j];
                i=j;
                j=j/2;
            }
            A[i]=item;
        }
        temp=A[1];
        A[1]=A[k];
        A[k]=temp;
    }
    cout<<endl;
    cout<<"El orden es:"<<endl;
    for(i=1;i<=n;i++)
    cout<<A[i] << endl;
}

