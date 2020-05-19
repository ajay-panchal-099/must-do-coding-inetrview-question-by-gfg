int f(int n) {
if (n < 5) {
return n;
}
return max(4*f(n-5), 3*f(n-4));
}
