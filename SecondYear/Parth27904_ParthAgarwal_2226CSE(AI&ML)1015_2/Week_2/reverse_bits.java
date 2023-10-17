public class reverse_bits {
	public static long reverseBits(long n) {
        long reversedN = 0;
        int bits = 32;
        for (int i = 0; i < bits; i++) {
            reversedN <<= 1;
            reversedN |= (n & 1);
            n >>= 1;
        }
        return reversedN;
	}
}
