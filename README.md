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
