#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>



struct carta
{
  std::string nome;
  std::string colore;
  int num;
};



void carteMazzo (std::vector <carta> mazzo)
{

  //creo 19 carte rosse che vanno dall'1 al 9 + uno 0
  mazzo[0].colore = "rosso";
  mazzo[0].num = 0;

  for (int j = 0; j <= 2; ++j)
      {
       for (int i = 1; i <= 9; ++i)
          {
            mazzo[i].colore = "rosso";
            mazzo[i].num = i;
          }
      }

   //creo 19 carte blu che vanno dall'21 al 39 piú uno 0
   mazzo[20].colore = "blu";
   mazzo[20].num = 0;

   for (int j = 0; j <= 2; ++j)
       {
         for (int i = 21; i <= 39; ++i)
           {
             mazzo[i].colore = "blu";
             mazzo[i].num = i;
           }
       }

    //creo 19 carte gialle che vanno dall'40 al 59 piú uno 0
    mazzo[40].colore = "giallo";
    mazzo[40].num = 0;

    for (int j = 0; j <= 2; ++j)
        {
          for (int i = 41; i <= 59; ++i)
            {
              mazzo[i].colore = "giallo";
              mazzo[i].num = i;
            }
         }

     //creo 19 carte verdi che vanno dall'50 al 69 piú uno 0
     mazzo[50].colore = "verde";
     mazzo[50].num = 0;

     for (int j = 0; j <= 2; ++j)
         {
           for (int i = 51; i <= 69; ++i)
             {
               mazzo[i].colore = "verde";
               mazzo[i].num= i;
             }
         }
}

int main ()
{
  //definisco un vector manog per memorizzare le carte in mano al primo giocatore
  std::vector <carta> manogiocatore;
  //definisco un vector manopc per memorizzare le carte in mano al pc giocatore
  std::vector <carta> manopc;
  //definisco un vector mazzo per memorizzare le carte nel mazzo
  std::vector <carta> mazzo(108);
  //definisco un vector tavola per memorizzare le carte in tavola
  std::vector <carta> tavola[1];

  carteMazzo (mazzo);

  for(int i = 0 ; i < 69; ++i)
  {
    std::cout<<mazzo[i].colore<<" ";
  }


}
