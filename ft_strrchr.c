char *ft_strrchr(const char *s, int c) {
    int d = 0;
    while (*s) {
        if (*s == c)
            d = *s;
        s++;
    }
    return d;
}