//
//  main.cpp
//  Switch_Case_Calculate
//
//  Created by Eren Çetintaş on 28.04.2024.
//

#include <iostream>

using namespace std;
// if yapısı,while , goto ile islem yapma
int main()
{
   int a ;
   int b;
   char islem = '+';
   while(true){
   std::cout << "bir sayi gir" << std::endl;
   std::cin >> a;
  std::cout << "ikinci sayi gir" << std::endl;
  std::cin >> b;

std::cout << "islem gir" << std::endl;
std::cin >> islem;
if (islem == 'e'){
goto dur;}

switch(islem){
    case '+':
    std::cout << a+b << std::endl;
    break;
    case '-':
     std::cout << a-b << std::endl;
    break;
    case '*':
     std::cout << a*b << std::endl;
    break;
    case '/':
     std::cout << a/b << std::endl;
    break;
    
  default:
  break;
}

dur:
std::cout << "Stop" << std::endl;
}

    return 0;
}

