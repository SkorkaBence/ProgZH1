# 1. feladat - 2017.04.05
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
## Tesztadatok<br />
### 01 input
5 4<br />
1210 1200 200 1400<br />
1250 1270 -1 1300<br />
1200 1300 500 1400<br />
1195 -1 300 1200<br />
1200 1300 100 -1<br />
Expected Output: 1<br />
### 02 input
5 4<br />
1250 1270 -1 1300<br />
1200 1300 500 1400<br />
1195 -1 300 1200<br />
1200 1300 100 -1<br />
1210 1200 580 1400<br />
Expected Output: 5<br />
### 03 input
1 4<br />
1200 1300 500 1400<br />
Expected Output: 1<br />
### 04 input
5 4<br />
1200 1300 -1 1400<br />
1250 1270 -1 1300<br />
6210 6200 2000 2000<br />
1195 -1 300 1200<br />
1200 1300 100 -1<br />
Expected Output: 3<br />
### 05 input
5 4<br />
1200 1300 500 -1<br />
1250 1270 -1 1300<br />
1210 1200 -1 1400<br />
1195 -1 300 1200<br />
1200 1300 100 -1<br />
Expected Output: NM<br />
### 06 input
1 -1<br />
Expected Output: NC<br />
### 07 input
1<br />
-1<br />
Expected Output: NC<br />
### 08 input
5 4<br />
1200 1300 500 1400<br />
1250 1270 999999 1300<br />
1210 1200 200 1400<br />
1195 -1 300 1200<br />
1200 1300 100 -1<br />
Expected Output: HV<br />
### 09 input
5 4<br />
1200 1300 500 1400<br />
1250 1270 -15 1300<br />
1210 1200 200 1400<br />
1195 -1 300 1200<br />
1200 1300 100 -1<br />
Expected Output: LV<br />
### 10 input
5 4<br />
1200 1300 500 1400<br />
1250 1270 -1 1300<br />
1210 1200 201 1400<br />
1195 -1 300 1200<br />
1200 1300 100 -1<br />
Expected Output: IV<br />
### 11 input
5 asd<br />
1200 1300 500 1400<br />
1250 1270 -1 1300<br />
1210 1200 200 1400<br />
1195 -1 300 1200<br />
1200 1300 100 -1<br />
Expected Output: WI<br />
### 12 input
5 4<br />
1200 1300 500 asd<br />
1250 1270 -1 1300<br />
1210 1200 200 1400<br />
1195 -1 300 1200<br />
1200 1300 100 -1<br />
Expected Output: WI<br />
### 13 input
2 12<br />
200 200 305 200 200 200 200 200 200 200 200 200<br />
200 200 300 200 200 200 200 200 200 200 200 200<br />
Expected Output: 2<br />
# 2. feladat - 2017.04.06
Most hogy a piaci árak az egekben vannak, arra adtuk fejünket, hogy lakást vegyünk, viszont nehéz meghatározni, hogy tömegközlekedés szempontból melyik állomás van a legoptimálisabb helyen. Célunk az lenne, hogy keressük meg azt az állomást ahonnan a leglassabban elérhető helyet is leggyorsabban érjük el (a leglassabban elérhető hely minden állomás szempontjából természetesen más lehet). Csak azokat az állomásokat vegyük számításba ahonnan elérhető közvetlenül az állomások legalább fele.<br />
## Bemenet
Bemenő adatként minden lehetséges állomáshoz megadtuk az állomás párokat, hogy mennyi idő eljutni az egyikből a másikba közvetlenül. Először megadjuk az állomások számát ahova potenciálisan költöznénk, majd a célállomások helyét amik felé az utazást optimalizálni szereténk. A mátrix egy értéke egy egész szám ami percben adja meg a szükséges időt az átjutáshoz. Ha nincs közvetlen járat, akkor azt -1-el jelöljük.<br />
5 3<br />
10 11 12<br />
10 9 10<br />
11 12 11<br />
8 -1 -1<br />
11 12 10<br />
## Output
A kimenet válasza egy index kell legyen ha van megfelelő. Abban az esetben ha nincs a feltételeknek megfelelő akkor NM legyen a kimenet.<br />
A fenti minta bemenetre az eredmény:<br />
2<br />
mivel első állomásról a leglassabban elérhető állomás 12 percre van, majd 10,12,8 és 12, viszont a 4.-nél nem érhető el minden állomás. Ezek közül a 10 perces a nyertes.<br />
Fontos: A kimenet pontosan ez legyen, se több se kevesebb.:)<br />
## Előfeltételek
Az előfeltétel megsértésének esetében a zárójelben megadottakat írja ki a program!<br />
* Számosság nem lehet negatív (NC)<br />
* Egy érték sem lehet több 10000-nél (HV)<br />
* Egy érték sem lehet kisebb -1-nél (LV)<br />
* Egy érték sem lehet 0 (IV)<br />
* Megfelelő kell legyen az input, nem tartalmazhat szöveget például (WI)<br />
## +1
Írjuk meg kommentben az adatokat beolvasó függvényt úgy hogy az elején nincs számosság jelölés, csak maga az adat, így logikusan a sorok száma adja a boltok számát és az egy sorban található értékek száma a szükséges termékek számát.<br />
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
### 01 input
5 4<br />
10 11 12 1<br />
10 9 10 1<br />
11 12 11 1<br />
8 -1 -1 -1<br />
11 12 10 1 <br />
Expected Output: 2<br />
### 02 input
5 4<br />
10 11 12 1<br />
11 12 11 1<br />
8 -1 -1 -1<br />
11 12 10 1<br />
10 9 10 1<br />
Expected Output: 5<br />
### 03 input
1 3<br />
10 11 12<br />
Expected Output: 1<br />
### 04 input
5 4<br />
10 -1 -1 -1<br />
10 1 1 1<br />
11 11 -1 1<br />
8 -1 -1 -1<br />
1 12 1 1<br />
Expected Output: 2<br />
### 05 input
5 4<br />
10 -1 -1 -1<br />
-1 9 -1 -1<br />
11 -1 -1 -1<br />
8 -1 -1 -1<br />
-1 -1 10 -1<br />
Expected Output: NM<br />
### 06 input
-1 1<br />
Expected Output: NC<br />
### 07 input
1 -1<br />
Expected Output: NC<br />
### 08 input
3 3<br />
10001 1 2<br />
2 3 4<br />
5 6 7<br />
Expected Output: HV<br />
### 09 input
5 3<br />
10 11 12<br />
10 9 10<br />
11 -2 11<br />
8 -1 -1<br />
11 12 10<br />
Expected Output: LV<br />
### 10 input
5 asd<br />
10 11 12<br />
10 9 10<br />
11 12 11<br />
8 -1 -1<br />
11 12 10<br />
Expected Output: WI<br />
### 11 input
5 3<br />
10 asd 12<br />
10 9 10<br />
11 12 11<br />
8 -1 -1<br />
11 12 10<br />
Expected Output: WI<br />
### 12 input
5 3<br />
10 11 12<br />
10 9 10<br />
11 12 0<br />
8 -1 -1<br />
11 12 10<br />
Expected Output: IV<br />
### 13 input
1 4<br />
10 11 -1 -1<br />
Expected Output: 1
### 14 input<br />
1 3<br />
10 -1 -1<br />
Expected Output: NM<br />
### 15 input
1 3<br />
10 1 -1<br />
Expected Output: 1<br />
