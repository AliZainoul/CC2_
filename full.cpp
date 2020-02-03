#include "full.hpp"

template <class T>
FullMtx<T>::FullMtx(int n)
{
  dimn = n;
  mx = new T* [dimn];
  for (int i=0; i<dimn; i++) mx[i] = new double [dimn];
  for (int i=0; i<dimn; i++)
  for (int j=0; j<dimn; j++)  mx[i][j] = 0;              // initialization
}

template <class T>
T& FullMtx<T>::operator()(int i, int j) { return mx[i][j]; }
