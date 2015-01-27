# PKEncryption

Lab 3 simple RSA encryption
Developed by Ben Pope and Navarr Barnier
This program outputs the cyphertext of a message using 7 (our k) and 22663 (our n) as our public key. 7 is relatively prime to 22663.

This program only encrypts and it is more of an exercise in large integer and bitwise operations. The prime number 22663 is easy to compute and find the two prime numbers p and q that allow you to figure out the private key. Normally our n is much larger which is why it is relatively easy to find what two prime numbers (p and q) make up 22663

To decrypt, you will have to find k' using p and q then using k' instead of k.
The message reads:

The RSA algorithm, described in Reference 13, uses modular arithmetic and the  factorization of very large numbers.  The ciphertext is surprisingly easy to calculate and very difficult to break, even when Ek is known.  The concept of public-key cryptography evolved from an attempt to attack two of the most difficult problems associated with conventional encryption. The first problem is that of key distribution.  It requires that two communicants either (1) already share a key, or (2) have the use of a key distribution center.  The second problem was that of digital signatures.

To use, compile and run a.out > out.txt 

The message can be viewed in out.txt


Example output -

    12015 3902 18583 3780 10373 21034 22444 12099 18538 13502 
    18677 19543 3468 21716 14176 9180 17654 16300 15522 1840 
    3902 17266 5639 5903 18677 5281 22546 5946 1027 6551 
    22444 12099 12304 6470 16677 13753 11932 12099 3902 18267 
    20827 17269 20061 10051 482 9180 14023 12302 21395 6270 
    18052 1303 3902 16540 6259 21395 21247 21017 12015 3902 
    16584 7845 21395 7341 17863 14176 8947 4867 20586 22444 
    774 13729 21978 11315 69 6270 19955 14108 10373 9136 
    18052 7341 6551 9320 12302 21395 6270 3201 17381 18754 
    5946 4107 19955 521 15522 9112 5639 16683 8795 11390 
    11358 9180 12320 14176 8947 3629 2000 2370 6648 11358 
    14108 18534 1266 1118 11402 7041 11374 14869 18754 4940 
    17462 14108 8177 1118 18883 13661 7845 6270 16683 15302 
    3172 11932 13440 2074 6551 9180 10051 7341 8594 4107 
    19955 6551 6797 16846 20901 3377 17098 14023 14065 11358 
    5281 13529 4107 3201 17381 18754 5946 4107 10729 7002 
    3993 10351 6551 19800 13793 19817 7341 11932 9809 12099 
    14108 18534 3172 13921 482 21760 8137 8795 19543 8126 
    6470 18534 15239 12015 3902 20620 7048 4107 10729 7002 
    3993 11819 7580 14065 8463 4107 14023 16379 17462 13502 
    7580 4754 3468 18661 482 2370 5509 4107 15522 4834 
    13546 18677 14065 8463 4107 3377 17098 17358 20734 5042 
    18754 13753 14 11315 9361 11358 20008 5809 15707 10373 
    15522 5588 6270 19059 1027 3902 12929 5441 13306 11402 
    20008 9354 15707 8463 3172 14065 11358 3601 21662 11402 
    7041 12929 5441 6270 3201 20931 22444 5612 6470 18534 
    14108 8795 7341 3517 6648 11358 15116 220 18534 11932 
    10729 7002 3993 11819 1045 8947 12099 10051 11402 7041 
    3201 5460 7209 8137 774 453 10051 16811 18677 1233

Please note - My professor noticed the encryption breaking down near the end but 90% of the encrypted text was recoverable. The last 10% lost is probably due to the way I implimented the text to be encrypted.
