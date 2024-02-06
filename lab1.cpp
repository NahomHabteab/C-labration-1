#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int values = 0, suma = 0, antal = 0, minVarde, maxVarde; 
    double medelvarde;

    while (cin >> values)
    {
       if (antal == 0)
       {
         minVarde = maxVarde = values;
       }
      
       else 
       {
         maxVarde = (values > maxVarde)  ? values : maxVarde; 
         // vilkoren är att values ska vara störe än maxVarde, om det är sant ska man sätta maxVarde som values,
         // om vilkoren är falsk ska behålla maxVarde 
          minVarde = (values < minVarde) ? values : minVarde;
       }
        
        suma += values; // adera atta tal 
        antal++; // antal sifror
    }

     if (antal > 0) // om antal är > 0 ska den utföra nedan stånde
     {

       medelvarde = double(suma) / antal; // dvidera summan och antal sifror och vitta medel värdet

        cout << "Antal tal: " << antal << endl; // skriv ut Antal tal 
        cout << fixed << setprecision(4)<< "Medelvärde: " << medelvarde << endl; // skriv ut Medelvärde med 5 decimsaler
        cout << "Minimumvärde: " << minVarde << endl; // skriv ut Minimumvärde  
        cout << "Maximumvärde: " << maxVarde << endl; // skriv ut Maximumvärde 

     } 
     else 
     {
        cout << "Filen innehåller inga tal" << endl;
     }

    return 0;
}