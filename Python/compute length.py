class Length:
    def mylength(Name):
        name = Name
        value = len(name)
        print(value," is the length  of the word entered")
        print(name)


def main():
    print("welcome")
    string = input("please enter a name or a string ")
    Length.mylength(string)
if __name__=="__main__":
    main()