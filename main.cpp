#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Angenote Mensa Wueins"<< endl;
    cout<< "**********************************************"<< endl;
    cout << endl;
    cout << "Gib deinen gewuenschten Wochentag(1 bis 7) ein :"<< endl;
    cin >> x;
    switch (x){
        case 1:
            cout << "Montag"<< endl;
            cout << "Gericht"<< endl;
            cout << "Herzhafte Kohlroulade mit Schmorkraut und Petersilienkartoffeln"<< endl;

            cout << "Kräuterrührei, dazu Rahmspinat und Salzkartoffeln"<< endl;

            break;
        case 2:
            cout << "Dienstag"<< endl;
            cout << "Gericht"<< endl;
            cout << "Hähnchenschnitzel mit Tomaten-Gnocchi und Rucola"<< endl;
            cout << "Rotes Linsen Dal mit Kräuter-Paprika-Bulgur und marinierten Pflücksalaten"<< endl;
            break;

        case 3:
            cout << "Mittwoch"<< endl;
            cout << "Gericht"<< endl;
            cout << "Coq au vin-Hähnchenkeule in Rotwein geschmort, dazu Buttererbsen und Herzoginkartoffeln"<< endl;
            cout << "Vegetarische Paprikaschote mit Gemüse, Reis und Hirtenkäse gefüllt, dazu Tomatensoße und Kressekartoffeln" << endl;
            break;
        case 4:
            cout << "Donnerstag"<< endl;
            cout << "Gericht"<< endl;
            cout << "Kleine Backfischnuggets (Kibbelinge) mit Remouladensoße, dazu gebackene Kartoffelecken und Salat"<< endl;
            cout << "Scharfes Kürbisgemüse mit Linsen und Rucola auf Penne Rigate"<< endl;
            break;
        case 5:
            cout << "Freitag"<< endl;
            cout << "Gericht"<< endl;
            cout << "Hausgemachte Kartoffelsuppe mit 1 Paar Wiener Würstchen und Brötchen"<< endl;
            cout << "Vegetarische Gemüselasagne mit Tomatensoße und marinierten Salaten"<< endl;
            break;
        case 6:
            cout << "Samstag"<< endl;
            cout << "Gericht"<< endl;
            cout << "Geschlossen"<< endl;

            break;
        case 7:
            cout << "Sonntag"<< endl;
            cout << "Gericht"<< endl;
            cout << "Geschlossen"<< endl;

            break;
        default:
            cout << "Falsche eingabe !"<< endl;
            cout <<endl;
            break;



    }

    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++"<< endl;
    cout << endl;
    main();
}