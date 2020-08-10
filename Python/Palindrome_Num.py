class Palindrome:

    def __init__(self, number):
        self.number = number

    def reverse_number1(self):
        rev = self.number[::-1]
        if self.number == rev:
            print("the number is a palindrome : " + str(self.number))
        else:
            print("the number is not a palindrome : " + str(self.number))

    def reverse_number2(self):
        rev = 0x00
        n = self.number
        while n != 0x00:
            rev = ((rev * 0x0A) + (int(n) % 0x0A))
            n = int(n) / 0x0A
        if self.number == int(rev):
            print("the number is a palindrome : " + str(self.number))
        else:
            print("the number is not a palindrome : " + str(self.number))


def main(self):
    data = input("Please enter a number to check if its a palindrome \n")
    palindrome = Palindrome(data)
    palindrome.reverse_number2()


if __name__ == "__main__":
    main("")
