#include<iostream>
#include<vector>
#include<cmath>
struct complejo{
  double real;
  double complex;
  void print(void);
  complejo operator+(complejo b);
  complejo operator-(complejo b);

};
complejo suma(complejo a, complejo b);
complejo resta(complejo a, complejo b);
double  modulo(complejo b);

  int main ()
  {
    complejo a;
    a.real=0;
    a.complex=0;
    complejo b;
    std::cout<<"Escribe tu numero imaginario"<<std::endl;
    std::cin>>a.real>>a.complex;
    std::cout<<"Escribe otro numero imaginaro"<<std::endl;
    std::cin>>b.real>>b.complex;
    a.print();
    b.print();
    suma(a,b).print();
    resta(a,b).print();
    std::cout<<"la norma es="<<modulo(a)<<" y del otro ="<<modulo(b)<<std::endl;
    
    

      
    return 0;
  }
void complejo::print()
{
  std::cout<<real<<","<<complex<<"i"<<std::endl;
}
complejo complejo::operator+(complejo b)
{
  complejo c;
  c.real= real+b.real;
  c.complex=complex+b.complex;
  return c;
}
complejo complejo::operator-(complejo b)
{
  complejo c;
  c.real= real-b.real;
  c.complex=complex-b.complex;
  return c;
}
complejo suma(complejo a, complejo b)
{
  std::cout<<"Suma=";
  return a+b;
}
complejo resta(complejo a, complejo b)
{
  std::cout<<"Resta=";
  return a-b;
}
double modulo(complejo b)
{
  return std::hypot(b.real,b.complex);
}



    
