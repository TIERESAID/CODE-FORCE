#include <bits/stdc++.h>
using namespace std;

void sieve_of_erathosthene(int n)
{
    // creation du tableau. les nombres paires sont 
    // pas premier donc divison  le tableau par 2 

    bool prime[n/2];

    // allocation  d un bloc de memoire 
    memset(prime, false , sizeof(prime));
   // i/2 et j/2 pour eviter les fuites de memoire . on avance  de deux en deux
   // donc diviser par deux pour retour la postion qui suit 
   
//i*i parce que on commence par int j = i*i donc si i*i est superieur a n
//aura depasser le nombre chercher (pourquoi commencer par i*i?)
    for(int i =3 ; i*i <n ; i += 2)
     {
        if (prime[i/2] == false){

// j += i*2 car le plus petit composite number from p and even(impair) est p(p+2)
// par exemple  former le plus petit nombre composite  de 3  sera  (3+2)
// i*i +  2*i  (justication de la ligne or (int j = i*i; j <n; j += i*2))
// on doit juste former le plus petit nombre compostite impair  a partir de i et
// ensuite l eliminer en lui donnant  valeur true .
// exemple : i =3 , 3(3 + 2) = 15 , divisible par 3 et 5 donc elimine . 

   // If i is prime, mark all its 
  // multiples as composite
        for (int j = i*i; j <n; j += i*2)
        {
           prime[j/2] = true;   
        }
        }

    }
      // affichage
        cout<<"2 ";
        for (int i = 3; i < n; i += 2)
        {
            if (prime[i/2] == false)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }

int main()
{
    int n = 100;
    sieve_of_erathosthene(n);
    return 0;

}


   


