#pragma once
#include "full_template.hpp"
//#include "symmetric.hpp"

template <class S, class FullMtx>
S sum(FullMtx & mat)
{
  S sum = 0.0;
  for (int i = 0; i < mat.dimn; i++)
  for (int j = 0; j < mat.dimn; j++)
  sum  += mat(i,j);
  return sum;
}
/*
template <class T, class SymmetricMtx>
T sum(SymmetricMtx & mat)
{
  T sum = 0.0;
  for (int i = 0; i < mat.dimn; i++)
  for (int j = 0; j < mat.dimn; j++)
  sum  += mat(i,j);
  return sum;
}*/
