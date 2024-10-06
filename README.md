[SK]
Lukostrelecká hra
Tento projekt je jednoduchá hra v jazyku C++, ktorá simuluje súťaž v lukostreľbe. Hráči strieľajú šípy (reprezentované triedou Sip), ktoré majú s nimi spojené hodnoty. Celkové skóre pre každého hráča sa vypočíta na základe šípov, ktoré vystrelí.

Štruktúra projektu
Hra pozostáva z dvoch hlavných tried:

Hrac: Predstavuje hráča, ukladá jeho meno, poradie streľby a šípy, ktoré strieľa (so skóre).
Sip: Predstavuje šípku s pridruženou hodnotou (skóre).

Popisy tried

Hráč
Vlastnosti:
Name: Uloží meno hráča.
Poradie: Poradie streľby hráča.
sipy: Vektor, ktorý ukladá šípy (objekty Sip) vystrelené hráčom.
Sucet: Celkové skóre zo šípov vystrelených hráčom.
Metódy:
Hráč (meno reťazca, int order): Konštruktor, ktorý inicializuje meno hráča a jeho poradie.
pridajSip(Sip sip): Pridá šípku do hráčovej zbierky.
dajSip(int index): Vráti šípku na zadanom indexe.
scitajSucet(): Spočíta skóre zo všetkých šípok a uloží výsledok do Sucet.
vymazSipy(): Vymaže hráčove šípky a nastaví ich zbierku na nové kolo.
vypis(): Vypíše podrobnosti o hráčovi vrátane jeho mena, poradia, šípok a celkového skóre.
getSucet(): Vráti celkové skóre hráča.

Sip
Vlastnosti:
Hodnota: Skóre spojené so šípkou.
Metódy:
Sip(int value): Konštruktor, ktorý inicializuje šípku so skóre.
getValue(): Vráti skóre šípky.
Ako hra funguje
Hráči sú vytvorení a pridelené poradie streľby.
Každý hráč vystrelí sériu šípov a skóre každého šípu sa sleduje.
Po vystrelení všetkých šípov sa vypočíta a zobrazí celkové skóre pre každého hráča.
Hráči môžu strieľať viac kôl, pričom ich šípy sa po každom kole vymažú, aby mohli začať odznova.

Budúce vylepšenia
Umožnite hráčom strieľať viac kôl s hromadiacimi sa skóre.
Pridajte náhodné generovanie skóre pre šípy, aby ste simulovali variabilitu streľby.
Implementujte rôzne rozsahy bodovania pre šípy, aby bola hra náročnejšia.

[EN]
Archery Game
This project is a simple C++ game that simulates an archery competition. Players shoot arrows (represented by the Sip class) that have values ​​associated with them. The total score for each player is calculated based on the arrows they shoot.

Project Structure
The game consists of two main classes:

Hrac: Represents a player, storing their name, order of shooting, and the arrows they shoot (with scores).
Sip: Represents an arrow with an associated value (score).

Class Descriptions

Player
Attributes:
Name: Stores the player's name.
Order: The shooting order of the player.
sipy: A vector that stores the arrows (Sip objects) shot by the player.
Sucet: The total score from the arrows shot by the player.
Methods:
Player(string name, int order): Constructor that initializes the player's name and order.
pridajSip(Sip sip): Adds an arrow to the player's collection.
dajSip(int index): Returns the arrow at the specified index.
scitajSucet(): Sums up the scores from all arrows and stores the result in Sucet.
vymazSipy(): Clears the player's arrows, resetting their collection for a new round.
vypis(): Outputs the player's details, including their name, order, arrows, and total score.
getSucet(): Returns the player's total score.

Sip
Attributes:
Value: The score associated with the arrow.
Methods:
Sip(int value): Constructor that initializes the arrow with a score.
getValue(): Returns the score of the arrow.
How the Game Works
Players are created and assigned a shooting order.
Each player shoots a series of arrows, and the score for each arrow is tracked.
After all arrows have been shot, the total score for each player is calculated and displayed.
Players can shoot multiple rounds, with their arrows being cleared after each round to start fresh.

Future Improvements
Allow players to shoot multiple rounds with accumulating scores.
Add random score generation for arrows to simulate the variability of shooting.
Implement different scoring ranges for arrows to make the game more challenging.
