/// площадь конуса S=r*h*pi+pi*r^2
/// объем конуса V=(1/3)*pi*r^2*h

// #include <stdio.h>  
  
// struct Cat { // определение структуры  
//   char *name; // имя кошака  
//   unsigned int age; // возраст кота  
//   char *color; // цвет  
// }; // конец определения  
  
// int main() {  
//   struct Cat felix; // struct Cat - новый тип данных, который мы сами выше определили, Felix - имя переменной с таким типом данных.  
//   felix.name = "Felix";  
//   felix.age = 5;  
//   felix.color = "Grey";  
//   printf("Cat name: %s, age: %d, color: %s", felix.name, felix.age, felix.color);  
// } 

#include <stdio.h>
#include <math.h>
struct zadacha{
    int h;
    int r;
};
int main(){
    int n=2;
    struct zadacha k[n];
    int V;
    int S;
    for (int i=0; i<n; i++) {
        printf("Радиус конуса %d:", i);
        scanf("%d", &k[i].r);
        printf("Высота конуса %d:", i);
        scanf("%d", &k[i].h);    
        
        
        }
    for (int i =0; i<n; i++){
        double cur_S=3.14*k[i].r*sqrt(pow(k[i].r, 2))+pow(k[i].h, 2);
        double cur_V=((double)1 / 3)*3.14*pow(k[i].r, 2)*k[i].h;
        printf("Для конуса %d площадь равна %lf и объем %lf\n", i, cur_S, cur_V);
    }

}