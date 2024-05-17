This file contains the aim , procedure and the result of implementing diffie-hellman key exchange using c.

AIM :  To implement diffie hellman key exchange algorithm using C.
ALGORITHM :
  Step1: Choose a large numer p, and a primitive root modulo(P).Both the sender and reciver should agree on this.
  Step2: Choose private key a(sender's key) and b(recieve's key) that are to be kept secret.
  Step3: Calculate the public key of sender using (x = (root modulo(P) ^ a mod P) and  reciever public key using  (y = (root modulo(P)^b mod P).
  Step4: Sender send their public key to reciever, and reciever send their public key to sender.
  Step5: sender and reciever both computes the secret key.
  Step6: Both sender and reciever have the same shared secret key.
                                                                                                                   
                                                                                                                   
RESULT :
    The diffie hellman has been succcessfully executed.            
