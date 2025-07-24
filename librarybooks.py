

class library:
    nobooks=[]
    books=[]
    
    def showbooksdetails(self):
          print()
          print(f"the different varities of books are : >>>>>   {self.books}")
          
    def __init__(cls,nobooks,books):    
        
        cls.nobooks.append(nobooks)
        cls.books.append(books)
    
book1=library(9,"MATHEMATICS")
book2=library(8,"PHYSICS")
book3=library(12,"CHEMISTRY")
book4=library(34,"ENGLISH")
book5=library(90,"history")
book5=library(78,"novels")
book1.showbooksdetails()

for i in range(len(library.books)):
    print("the number of books of ",library.books[i],"=",library.nobooks[i] ,"books")


from functools import reduce 
def sum(x,y):
     return x+y
print("total number of books in library =", reduce(sum,library.nobooks),"books")
print("and library has ",len(library.books),"varity of books")


