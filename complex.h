#ifndef __COMPLEX_H
#define __COMPLEX_H
#include<iostream>
template <typename T>
class Complex {
  private:
  T re;
  T im;
  public:
  Complex();
  Complex(T,T);
  void dispay() const;
  T get_real() const;
  T get_img() const;
  ~Complex();
};
template <typename T>
Complex<T>::Complex():re(0),im(0)
{

}
template <typename T>
Complex<T>::Complex(T real,T img):re(real),im(img)
{

}
template <typename T>
T Complex<T>::get_real()
{
    return re;
}
template <typename T>
T Complex<T>::get_img()
{
    return im;
}
template <typename T>
void dispay()
{
    std::cout<<re<< " +i " <<im<<"\n";
}
template <typename T>
Complex<T>::~Complex()
{

}

#endif
