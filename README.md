# Programozás 1. ZH
## ZH feladat
Készülünk a házibulira, így nagybevásárlást kell végeznünk...:) Sajnos viszont nagyon sok a bolt és sok az ár amit számításba kell vennünk. Szerencsére a banda aktív tagjai összeszedték egy fájlba hogy melyik szükséges termék mennyibe kerül a különböző helyeken. Csak annyi van hátra, hogy írjunk egy programot ami megtalálja azt a boltot ahol minden szükséges dolog megvan és a legjobban járunk. A legjobban járunkot úgy értjük, hogy az árak átlaga minimális.<br />
## Bemenet
A bemenetet az input.txt nevű fájlból kell olvassuk. Bemenő adatként a boltban az árakat találjuk mátrixos alakban. Először a boltok száma, majd a szükséges termékek száma. A mátrix egy értéke egy egész szám ami forintban adja az árat. Ha egy adott termék nem található a boltban, akkor azt a -1 értékkel jelöljük.<br />
5 4<br />
1210 1200 200 1400<br />
1250 1270 -1 1300<br />
1200 1300 500 1400<br />
1195 -1 300 1200<br />
1200 1300 100 -1<br />
## Output
A kimenet válasza egy index kell legyen ha van megfelelő. Abban az esetben ha nincs a feltételeknek megfelelő akkor NM legyen a kimenet.
A fenti minta bemenetre az eredmény:<br />
1<br />
Fontos: A kimenet pontosan ez legyen, se több se kevesebb.:)
## Előfeltételek
Az előfeltétel megsértésének esetében a zárójelben megadottakat írja ki a program!<br />
* Számosság nem lehet negatív (NC)<br />
* Egy érték sem lehet több 10000-nél (HV)<br />
* Egy érték sem lehet kisebb -1-nél (LV)<br />
* Minden érték öttel osztható vagy -1 kell legyen (IV)<br />
* Megfelelő kell legyen az input, nem tartalmazhat szöveget például (WI)<br />
## +1
Írjuk meg kommentben az adatokat beolvasó függvényt úgy hogy az elején nincs számosság jelölés, csak maga az adat, így logikusan a sorok száma adja a boltok számát és az egy sorban található értékek száma a szükséges termékek számát.
## ZH alap tudnivalók
* Mindenféle nyomtatott segédeszköz használata szabályos (igen, akár az egész internetet kinyomtathatod)<br />
* Bárminemű kommunikáció vagy közös munka azonnali kizárás<br />
* Attól függetlenül, hogy kinyomtatva lehet bármit használni gépen ez tilos (csak GT oldala használható a ZH alatt)!<br />
## ZH elvárás
* Vector osztály használata.<br />
* Függvényekre bontott feladatmegoldás.<br />
* A kész program fájlból olvasson be (fixen az input.txt -ből).<br />
* A feladatban megadott kimenetet adja meg a program a konzolra.<br />
* Készítsünk teszteseteket, amiket a programkód végére írunk kommentbe.<br />
* 5-6 teszteset kell, amivel rávilágítunk a kritikus lefutási esetekre.<br />
* A minta bemenet majd utána a minta kimenetet adjátok meg, hogy mikre teszteltétek a programot.<br />
* A program input.txt nevű fájlból olvasson be.<br />
## ZH értékelés
* A egyszerűbb esetekre (nagyjából az első 5-6 teszteset) helyes eredményt adjon vissza (kettes)<br />
* A program minden előfeltételeknek megfelelő esetre helyes eredményt adjon vissza<br />
* Kód tagoltsága, egységesség, átláthatóság, értelmes elnevezések<br />
* A program előfeltételeknek nem megfelelő esetekre is jó reagál (try-catch-el)<br />
* A kód szépsége<br />
* Minden egyes helytelen feltöltési próbálkozás csökkenti a ZH eredményét (az első 5 semmivel nem csökkenti)<br />
