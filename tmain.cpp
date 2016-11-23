/***************************************************
 * file: QInc/Ukko/trunk/software/contrib/libMathExpr/tmain.cpp
 *
 * @file    tmain.cpp<libMathExpr>
 * @author  Eric L. Hernes
 * @version V1.0
 * @date    Monday, September 21, 2015
 * @copyright (C) Copyright Eric L. Hernes -- Monday, September 21, 2015
 * @copyright (C) Copyright Q, Inc.; Monday, September 21, 2015
 *
 * @brief   An Eric L. Hernes Signature Series C++ module
 *
 *
 */

#include <stdio.h>
#include "MathExpr.h"

int
main(int ac, char **av) {
  MathExpr me;
  me.parse(av[1]);
  double x = me.getVariable("x");
  printf("%s => x=%f\n", av[1], x);
  return 0;
}

/*
 * Local Variables:
 * mode: C++
 * mode: font-lock
 * c-basic-offset: 2
 * tab-width: 8
 * compile-command: "c++ -o tmain tmain.cpp obj.Darwin/libMathExpr.a"
 * End:
 */

/* end of QInc/Ukko/trunk/software/contrib/libMathExpr/tmain.cpp */
