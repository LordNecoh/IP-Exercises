#include <iostream>
#include <string>
const int N = 3;
struct date{
    int year;
    int month;
    int day;
};
struct Student{
    int matr;
    std::string nome;
    std::string cognome;
    date dataN;
    float votoM;
};

void studentSort(Student a[]){
    
    int min=0;
    
    Student temp;
    for(int i=0; i<N; ++i){
        for(int j=i; j<N; ++j){ 
            //Trovo il minimo
            if( a[j].dataN.year < a[min].dataN.year || ((a[j].dataN.year == a[min].dataN.year) && (a[j].dataN.month < a[min].dataN.month)) || 
              ((a[j].dataN.year == a[min].dataN.year) && (a[j].dataN.month == a[min].dataN.month) && (a[j].dataN.day < a[min].dataN.day)))
            {
                min = j;
            }
        
        }
        // lo metto in cima
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        min = i+1;
        
        
        
    
    }
}

int main(){
    
    Student a[N];
    
    for(int i=0; i<N; ++i){
        
        a[i].matr = i;
        a[i].nome = "Jimmy";
        a[i].cognome = "Rossi";
        a[i].votoM = i*2;
        std::cout << "Inserire la data di nascita dello studente n." << i+1 << ":" << std::endl;
        //Sarebbe da controllare l'inserimento della data
        std::cin >> a[i].dataN.year;
        std::cin >> a[i].dataN.month;
        std::cin >> a[i].dataN.day;
        
        std::cout << std::endl;
    }

    studentSort(a);
    
    for(int i=0; i<N; ++i){
        std::cout << "Matricola: " << a[i].matr << std::endl;
        std::cout << "Nome: " << a[i].nome << std::endl;
        std::cout << "Cognome: " << a[i].cognome << std::endl;  
        std::cout << "Voto medio: " << a[i].votoM << std::endl;  
        std::cout << "Data nascita: "<< a[i].dataN.day << "/";
        std::cout << a[i].dataN.month << "/";
        std::cout << a[i].dataN.year << std::endl;
        std::cout << std::endl << std::endl;
    }
}
