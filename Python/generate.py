class Generate:
    def generate(char , counter):
        Char = char
        Counter = counter 
        for i in range (len(Counter)):
            print(Char*int(Counter))
def main():
    counter = input("please enter the number of char you want to print ")
    chars = input("please enter the char you woukd like to print ")
    Generate.generate(chars,counter)
if __name__=="__main__":
    main()