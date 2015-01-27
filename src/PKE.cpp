// Lab 3 simple RSA encryption
// Developed by Ben Pope and Navarr Barnier
// This program outputs the cyphertext of a message using 7 (our k) and 22663 (our n) as our public key. 7 is relatively prime to 22663.
// This program only encrypts and it is more of an exercise in large integer and bitwise operations.
// The prime number 22663 is easy to compute and find the two prime numbers p and q that allow you to figure out the private key.
// Normally our n is much larger which is why it is relatively easy to find what two prime numbers (p and q) make up 22663
// To decrypt, you will have to find k' using p and q then using k' instead of k.
// The message reads:
// The RSA algorithm, described in Reference 13, uses modular 
// arithmetic and the  factorization of very large numbers.  The ciphertext is 
// surprisingly easy to calculate and very difficult to break, even when Ek is 
// known.  The concept of public-key cryptography evolved from an attempt to 
// attack two of the most difficult problems associated with conventional 
// encryption. The first problem is that of key distribution.  It requires that 
// two communicants either (1) already share a key, or (2) have the use of a 
// key distribution center.  The second problem was that of digital signatures.
//
// To use, compile and run 
// a.out > out.txt
// The message can be viewed in out.txt

#include <unistd.h>
#include <iostream>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sstream>
#include <time.h>
using namespace std;

const char* byte_to_binary(int);

int main(){
// Holder for our message
char text[] = "The RSA algorithm, described in Reference 13, uses modular arithmetic and the factorization of very large numbers.  The ciphertext is surprisingly easy to calculate and very difficult to break, even when Ek is known. The concept of public-key cryptography evolved from an attempt to attack two of the most difficult problems associated with conventional encryption. The first problem is that of key distribution. It requires that two communicants either (1) already share a key, or (2) have the use of a key distribution center. The second problem was that of digital signatures.";

int letterA;    // First Letter
int letterB;    // Second letter
int cypherText; // Cyphertext of first letter and second letter
uint64_t xyz;   // -
uint64_t xy;    // -
int x;          // Used with calculating the cyphertext
int y;          // -
int z;          // -

for (int i = 0; i < sizeof(text); ){
  for (int j = 0; j < 10; j++){
        letterA = text[i];          // Get first letter
        x = letterA;                // Make x equal to ASCII of first letter
        x = (x << 7);	            // Shift left 7 spaces
        i++;		            // Increment
        letterB = text[i];          // Get second letter
        x = x + letterB;            // Add it to x
        y = (x*x) % 22663;          // Find x^2 mod n
        z = (y*y) % 22663;          // Find x^4 mod n
        xy = x*y;	            // Multiply x by y to get x^3
        xyz = xy*z;	            // Multiply x^3 by x^4 to get x^7
        cypherText = xyz % 22663;   // Multiply all by mod n

        cout << cypherText << " "; // Output two letter code  
	i++;			      }
	cout << endl;
	}
// Verbose testing
        //letterA = text[i];
        //cout << "Letter: " << text[i] << "/" << letterA  << " & ";
        //x = letterA;
        //x = (x << 7);
        //i++;
        //letterB = text[i];
        //cout<< "Letter: " << text[i] << "/" << letterB << endl;
        //x = x + letterB;
        //cout << "Concantonated: " << byte_to_binary(x) << endl;
        //cout << "This is x: " << x << endl;
        //y = (x*x) % 22663;
        //cout << "This is y: " << y << endl;
        //z = (y*y) % 22663;
        //cout << "This is z: " << z << endl;
        //xy = x*y;
        //cout << "This is xy: " << xy << endl;
        //xyz = xy*z;
        //cout << "This is xyz: " << xyz << endl;
        //cypherText = xyz % 22663;
        //cout << "Cypher text of these letters: " << cypherText << endl;
        //cout << "Test Cypher: " << (x^7) % 22663 << endl;
        //cout << "*" << endl;
return 0;
}
// used with verbose testing
const char* byte_to_binary( int x )
{
 static char b[65] = {0};
 for (int z=8192,y=0; z>0; z>>=1,y++)
   b[y] = ( ((x & z) == z) ? 49 : 48);
 return b; 
}

