#include <stdio.h>

int isPrim(int i);

int main(int argc, char* argv[]) {
	// merke dir wie viele Primzahlen wir schon ausgegeben haben
	int numberOfPrims = 0;
	// i ist eine Laufvariable, diese prüfen wir auf eine Primzahl
	// das machen wir so lange, bis wir 20 Primzahlen ausgegeben haben
	// nach jeder Iteration zählen wir i um einen hoch
	for(int checkNumber = 0; numberOfPrims <= 20; i++) {
		// wenn es eine Primzahl ist
		if(isPrim(checkNumber)) {
			// gebe i aus und zähle hoch, dass wir eine Primzahl gefunden haben
			printf("%i\n", checkNumber);
			numberOfPrims++;
		}
	}
}

int isPrim(int checkNumber) {
	// gehe davon aus, dass es eine Primzahl ist
	int isPrim = 1;
	// wenn es kleiner ist als 2, ist es doch keine
	if(checkNumber < 2) {
		isPrim = 0;
	}
	// starte bei der Zahl, die wir bekommen haben - 1
	// mache es so lange wie i > 1
	// verkleiner bei jeder Iteration i um 1
	for(int factor = checkNumber - 1; factor > 1; factor--) {
		// wenn n % i == 0 ist, ist n durch i ganzzahlig teilbar
		// da wir nur über die Zahlen zwischen 1 und n - 1 iterieren
		// kann n dann keine Primzahl mehr sein
		if(checkNumber % factor == 0) {
			// merke dir, dass es keine Primzahl ist und brich die Schleife ab
			isPrim = 0;
			break;
		}
	}
	// gib das Ergebnis zurück
	return isPrim;
}
