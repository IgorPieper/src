#include <iostream>

auto main () -> int{

int liczba1;
int liczba2;

std::cout<<"Proszę podać 1 liczbe: ";
std::cin>>liczba1;
std::cout<<"Proszę podać 2 liczbe: ";
std::cin>>liczba2;

if (liczba1>liczba2){
	std::cout<<"Pierwsza liczba jest większa. Jej wartość wynosi: "<<liczba1<<"\n";
} else if (liczba2>liczba1){
	std::cout<<"Druga liczba jest większa. Jej wartość wynosi: "<<liczba2<<"\n";
} else if (liczba2==liczba1){
	std::cout<<"Liczby są równe. Ich wartość wynosi: "<<liczba1<<"\n";
}


return 0;

}
