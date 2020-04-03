class Reverse:
    def Reverse(Word):
        word =Word
        print(word[::-1])
def main():
    print("welcone !!")
    word = input("please netr a word you would like to reverse ")
    Reverse.Reverse(word)
if __name__=="__main__":
    main()
