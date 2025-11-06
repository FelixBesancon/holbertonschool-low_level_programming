char* skip_stars(char* s2)
{
	if (*(s2 + 1) == '*')
		return (skip_stars(s2 + 1));
	else
		return (s2);
}
int only_stars_end(char* s2)
{
	if (*s2 == '\0')
		return (1);
	else if (*s2 != '*')
		return (0);
	else
		return (only_stars_end(s2 + 1));
}
/** wildcmp - Compares two strings, s2 can contain the special caracter *
 * that can replace any string (empty or not).
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 1 if the two strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
/*
Cas d'arrêt :
A. s2 est à '\0' ⟶ retourne 1 ssi s1 est aussi à '\0'.
B. s1 est à '\0' ⟶ retourne 1 ssi le reste de s2 n’est composé que de *
(compacter/ignorer tous les *, puis vérifier fin).

Cas "normal" :
Si s2[0] n’est pas * :
Exiger égalité stricte entre s1[0] et s2[0].
	Si OK ⟶ avancer les deux d’un caractère et recommencer.
	Sinon ⟶ échec.
*/
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		else
			return (only_stars_end(s2));
	}

	if (*s2 != '*')
	{
		if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));
		else
			return (0);
	}
	else
	{
		s2 = skip_stars(s2);
		if (*(s2 + 1) == '\0')
			return (1);
		else
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
/*
Cas "étoile" * :
Si s2[0] est * :
Compacter les * consécutifs (les traiter comme un seul).
Puis backtracking avec deux branches :
	Branche A (étoile mange 0 char) :
		avancer dans s2 (après le bloc d’étoiles), ne pas bouger s1.
	Branche B (étoile mange ≥1 char) :
		avancer s1 d’un caractère, garder s2 au même endroit après compaction
		(pour permettre à l’étoile d’en “manger” plus si besoin).
	Si l’une des deux branches réussit ⟶ succès.

optimisations :
Toujours traiter les cas d’arrêt avant les autres (ça évite les dépassements et boucle mieux).

Cas utiles à tester :
("", "") → 1
("", "*") / ("", "***") → 1
("abc", "*") / ("abc", "***") → 1
("abc", "*b") → 0 ; ("abcbc", "a*b*bc") → 1
("main.c", "m*a*i*n*.*c*") → 1 ; ("main", "main*d") → 0
Optionnel : mémoïsation (table i,j) si tu veux éviter l’explosion de branches
sur de très longues chaînes.

Structure de la fonction :
	wildcmp(s1, s2) :
		gérer A puis B
		si pas d’étoile →
			cas normal
		sinon →
			compacter *
			puis branches A/B

*/
}
