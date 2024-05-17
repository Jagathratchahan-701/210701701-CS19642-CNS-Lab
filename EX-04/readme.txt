This readme contains the aim, procedure to implement RSA ENCRYPTION algorithm.
AIM:
  To implement an encryption algorithm using rsa.
ALGORITHM:
  Step1:  Select two large prime numbers p and q.
  Step2:  Calculate the modulus, n = p*q.
  Step3   Compute Euler's totient function = (p-1)*(q-1).
  Step4:  choose a public exponent ,e, such that 1<e<totient function and gcd (e, totient function) = 1.
  Step5:  Compute the private exponent.
  Step6:  Convert the plaintext into ASCII values.
  Step7:  Encrypt the message by using the cipher text using the formula c = (msg^d) mod n.
  Step8:  Print the encrypted data.
  Step9:  DEcrypt the cipher text by computing the original message, m, using the formula m = (c^d) mod n.
  Step10: Print the original message.
  Step11: Return 0 for successful execution.



RESULT :  The encryption using RSA algorithm has been successfully executed.
