2. Schuljahr (Ausbildung als staatlich geprüfter informationstechnischer Assistent) (Aufgabe 2/4 PMC) 

In der Programmierung werden oft Arrays oder sogar bessere Objekte benötigt um Variablen zu organisieren.
Mit diesem Projekt wollten wir eine Liste bestehend aus Knotenpunkten programmieren, um Pointer-Variablen 
und Klassen zu verstehen. 

Die Klasse "List" besteht hierbei aus mehreren Nodes (Knotenpunkte). Jedes Node-Objekt
verweist mit einer Pointer-Variable auf den darauf folgenden Node in der Liste. So wird letztendlich
die Liste aufgebaut.

Klasse/Struct Node

Besteht aus einem Wert und eine Pointer-Variable "next". Der Wert wird vom Nutzer bestimmt und ist
auch der Wert, den man in der Liste konkret sieht. Das Node-Objekt an sich ist das abstrakte Konstrukt vom Wert.
Mit der Pointer-Variable "next" wird auf den nächsten abstrakten Wert gezeigt.

Klasse: List
"first" und "last" sind Node-Objekte; sie sind das erste und letzte Objekt in der Liste.
Theoretisch hätte man die Eigenschaft "last" rauslassen können, aber für Einsteiger in der
Programmierung sind die Listen somit leichter zu handlen. 

printList()
Gibt die Werte in der Liste in der Konsole aus.

append(int value) / push_back(int value)
Fügt neuen Wert am Ende der Liste hinzu

prepend(int value) / push_front(int value)
Fügt neuen Wert am Anfang der Liste hinzu

clear()
Leert Inhalt der Liste

insert(int value, int position)
Fügt neuen Wert an gewünschter Stelle hinzu

count() / size()
Returnt Anzahl an Nodes in der Liste zurück

isEmpty()
Returnt, ob die Liste leer ist

removeAt(int position)
Entfernt den Node von der gegebenen Position

contains(int value)
Returnt true, wenn "value" in der Liste vorkommt

takeFirst()
Returnt erste Node aus der Liste und entfernt Diese anschließend aus der Liste

takeLast()
Returnt letzte Node aus der Liste und entfernt Diese anschließend aus der Liste

Im Repository befindet sich auch eine Version namens "doppelteListe". Diese Version habe ich 
unabhängig vom Unterricht gestartet und versucht alles aus dem Kopf zu programmieren mit dem Unterschied,
dass die Klasse Node neben der Pointer-Variable "next" noch eine Pointer-Variable "before" hat.