** ZH feladat
K�sz�l�nk a h�zibulira, �gy nagybev�s�rl�st kell v�gezn�nk...:) Sajnos viszont nagyon sok a bolt �s sok az �r amit sz�m�t�sba kell venn�nk. Szerencs�re a banda akt�v tagjai �sszeszedt�k egy f�jlba hogy melyik sz�ks�ges term�k mennyibe ker�l a k�l�nb�z� helyeken. Csak annyi van h�tra, hogy �rjunk egy programot ami megtal�lja azt a boltot ahol minden sz�ks�ges dolog megvan �s a legjobban j�runk. A legjobban j�runkot �gy �rtj�k, hogy az �rak �tlaga minim�lis.
** Bemenet
A bemenetet az input.txt nev� f�jlb�l kell olvassuk. Bemen� adatk�nt a boltban az �rakat tal�ljuk m�trixos alakban. El�sz�r a boltok sz�ma, majd a sz�ks�ges term�kek sz�ma. A m�trix egy �rt�ke egy eg�sz sz�m ami forintban adja az �rat. Ha egy adott term�k nem tal�lhat� a boltban, akkor azt a -1 �rt�kkel jel�lj�k.
5 4
1210 1200 200 1400
1250 1270 -1 1300
1200 1300 500 1400
1195 -1 300 1200
1200 1300 100 -1
** Output
A kimenet v�lasza egy index kell legyen ha van megfelel�. Abban az esetben ha nincs a felt�teleknek megfelel� akkor NM legyen a kimenet.
A fenti minta bemenetre az eredm�ny:
1
Fontos: A kimenet pontosan ez legyen, se t�bb se kevesebb.:)
** El�felt�telek
Az el�felt�tel megs�rt�s�nek eset�ben a z�r�jelben megadottakat �rja ki a program!
Sz�moss�g nem lehet negat�v (NC)
Egy �rt�k sem lehet t�bb 10000-n�l (HV)
Egy �rt�k sem lehet kisebb -1-n�l (LV)
Minden �rt�k �ttel oszthat� vagy -1 kell legyen (IV)
Megfelel� kell legyen az input, nem tartalmazhat sz�veget p�ld�ul (WI)
** +1
�rjuk meg kommentben az adatokat beolvas� f�ggv�nyt �gy hogy az elej�n nincs sz�moss�g jel�l�s, csak maga az adat, �gy logikusan a sorok sz�ma adja a boltok sz�m�t �s az egy sorban tal�lhat� �rt�kek sz�ma a sz�ks�ges term�kek sz�m�t.
** ZH alap tudnival�k
Mindenf�le nyomtatott seg�deszk�z haszn�lata szab�lyos (igen, ak�r az eg�sz internetet kinyomtathatod)
B�rminem� kommunik�ci� vagy k�z�s munka azonnali kiz�r�s
Att�l f�ggetlen�l, hogy kinyomtatva lehet b�rmit haszn�lni g�pen ez tilos (csak GT oldala haszn�lhat� a ZH alatt)!
** ZH elv�r�s
Vector oszt�ly haszn�lata.
F�ggv�nyekre bontott feladatmegold�s.
A k�sz program f�jlb�l olvasson be (fixen az input.txt -b�l).
A feladatban megadott kimenetet adja meg a program a konzolra.
K�sz�ts�nk teszteseteket, amiket a programk�d v�g�re �runk kommentbe.
5-6 teszteset kell, amivel r�vil�g�tunk a kritikus lefut�si esetekre.
A minta bemenet majd ut�na a minta kimenetet adj�tok meg, hogy mikre tesztelt�tek a programot.
A program input.txt nev� f�jlb�l olvasson be.
** ZH �rt�kel�s
A egyszer�bb esetekre (nagyj�b�l az els� 5-6 teszteset) helyes eredm�nyt adjon vissza (kettes)
A program minden el�felt�teleknek megfelel� esetre helyes eredm�nyt adjon vissza
K�d tagolts�ga, egys�gess�g, �tl�that�s�g, �rtelmes elnevez�sek
A program el�felt�teleknek nem megfelel� esetekre is j� reag�l (try-catch-el)
A k�d sz�ps�ge
Minden egyes helytelen felt�lt�si pr�b�lkoz�s cs�kkenti a ZH eredm�ny�t (az els� 5 semmivel nem cs�kkenti)