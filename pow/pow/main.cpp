//
//  main.cpp
//  pow
//
//  Created by Eren Çetintaş on 28.04.2024.
//

#include <stdio.h>
#include <math.h>
int
main ()
{
  double taban,kuvvet,sonuc;
  
  
printf("tabanı gir");
scanf("%lf",&taban);

printf("kuvvet gir");
scanf("%lf", & kuvvet);

sonuc = pow(taban,kuvvet);

printf("%.2lf^ %.2lf= %lf", taban,sonuc,kuvvet);



  return 3;
}
