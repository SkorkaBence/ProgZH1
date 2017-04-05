** ZH feladat
Készülünk a házibulira, így nagybevásárlást kell végeznünk...:) Sajnos viszont nagyon sok a bolt és sok az ár amit számításba kell vennünk. Szerencsére a banda aktív tagjai összeszedték egy fájlba hogy melyik szükséges termék mennyibe kerül a különbözõ helyeken. Csak annyi van hátra, hogy írjunk egy programot ami megtalálja azt a boltot ahol minden szükséges dolog megvan és a legjobban járunk. A legjobban járunkot úgy értjük, hogy az árak átlaga minimális.
** Bemenet
A bemenetet az input.txt nevû fájlból kell olvassuk. Bemenõ adatként a boltban az árakat találjuk mátrixos alakban. Elõször a boltok száma, majd a szükséges termékek száma. A mátrix egy értéke egy egész szám ami forintban adja az árat. Ha egy adott termék nem található a boltban, akkor azt a -1 értékkel jelöljük.
5 4
1210 1200 200 1400
1250 1270 -1 1300
1200 1300 500 1400
1195 -1 300 1200
1200 1300 100 -1
** Output
A kimenet válasza egy index kell legyen ha van megfelelõ. Abban az esetben ha nincs a feltételeknek megfelelõ akkor NM legyen a kimenet.
A fenti minta bemenetre az eredmény:
1
Fontos: A kimenet pontosan ez legyen, se több se kevesebb.:)
** Elõfeltételek
Az elõfeltétel megsértésének esetében a zárójelben megadottakat írja ki a program!
Számosság nem lehet negatív (NC)
Egy érték sem lehet több 10000-nél (HV)
Egy érték sem lehet kisebb -1-nél (LV)
Minden érték öttel osztható vagy -1 kell legyen (IV)
Megfelelõ kell legyen az input, nem tartalmazhat szöveget például (WI)
** +1
Írjuk meg kommentben az adatokat beolvasó függvényt úgy hogy az elején nincs számosság jelölés, csak maga az adat, így logikusan a sorok száma adja a boltok számát és az egy sorban található értékek száma a szükséges termékek számát.
** ZH alap tudnivalók
Mindenféle nyomtatott segédeszköz használata szabályos (igen, akár az egész internetet kinyomtathatod)
Bárminemû kommunikáció vagy közös munka azonnali kizárás
Attól függetlenül, hogy kinyomtatva lehet bármit használni gépen ez tilos (csak GT oldala használható a ZH alatt)!
** ZH elvárás
Vector osztály használata.
Függvényekre bontott feladatmegoldás.
A kész program fájlból olvasson be (fixen az input.txt -bõl).
A feladatban megadott kimenetet adja meg a program a konzolra.
Készítsünk teszteseteket, amiket a programkód végére írunk kommentbe.
5-6 teszteset kell, amivel rávilágítunk a kritikus lefutási esetekre.
A minta bemenet majd utána a minta kimenetet adjátok meg, hogy mikre teszteltétek a programot.
A program input.txt nevû fájlból olvasson be.
** ZH értékelés
A egyszerûbb esetekre (nagyjából az elsõ 5-6 teszteset) helyes eredményt adjon vissza (kettes)
A program minden elõfeltételeknek megfelelõ esetre helyes eredményt adjon vissza
Kód tagoltsága, egységesség, átláthatóság, értelmes elnevezések
A program elõfeltételeknek nem megfelelõ esetekre is jó reagál (try-catch-el)
A kód szépsége
Minden egyes helytelen feltöltési próbálkozás csökkenti a ZH eredményét (az elsõ 5 semmivel nem csökkenti)