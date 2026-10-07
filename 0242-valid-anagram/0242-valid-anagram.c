bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) return false;
 
    int counts[26] = {0};
    for (int i = 0; s[i]; i++) counts[s[i] - 'a']++;
    for (int i = 0; t[i]; i++) counts[t[i] - 'a']--;
 
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) return false;
    }
    return true;
}