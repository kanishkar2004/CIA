void atbash_encrypt(char *plain_text, char *cipher_text) {
    int i = 0;
    while (plain_text[i] != '\0') {
        if (isalpha(plain_text[i])) {
            cipher_text[i] = islower(plain_text[i]) ? 
                             219 - plain_text[i] : 
                             155 - plain_text[i];
        } else {
            cipher_text[i] = plain_text[i];
        }
        i++;
    }
    cipher_text[i] = '\0';
}

void atbash_decrypt(char *cipher_text, char *plain_text) {
    atbash_encrypt(cipher_text, plain_text);
}
