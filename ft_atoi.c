int ft_atoi(const char *nptr) {
    int r = 0;
    while (*nptr) {
        if (ft_isdigit(*nptr)) {
            r = r*10 + (*nptr - '0');
        }
        nptr++;
    }
    return r;
}