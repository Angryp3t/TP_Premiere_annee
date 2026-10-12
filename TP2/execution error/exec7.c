#include <stdio.h>

int main() {
    int distance_km = 100;
    int vitesse_kmh = 50;
    float temps = distance_km / vitesse_kmh; 
    float minutes = temps * 60;
    printf("minutes = %f\n", minutes); 
    return 0;
}
// le temps et les minutes peuvent être en float si la division donne un résultat décimal. 
// Donc 'temps' et 'minutes' ne doivent pas être en int.