
// TEST FOR PRIMES
bool c(ll n) {
	if (n < 4) return true;
	if (!(n % 2)) return false;
	for (ll i = 3; i * i <= n; i += 2)
		if (!(n % i)) return false;
	return true;
}

// UPPER BOUND GETS INDEX TO ELEMENT WITH VALUE > P. RETURN SZ if P > V[N-1]
int ub(int p, const vector<int>& v) {
	int s = 0, e = v.size() - 1, m;
	while (s != e) {
		m = (s + e) >> 1;
		if (v[m] <= p) s = m + 1;
		else e = m;
	}
	if (p >= v[s]) ++s;
	return s;
}
