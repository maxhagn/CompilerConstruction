void asma( char x[] ) {
    long i, j;
    for ( i = 0, j = 15; i < j; i++, j-- ) {
        char t = x[ i ];
        x[ i ] = x[ j ];
        x[ j ] = t;
    }
}