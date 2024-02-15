'''a=10
print(a)
print(type(a))

a=10.50
print(a)
print(type(a))

a="NAVEEN"
print(a)
print(type(a))

a=25000
b=32000
j=41000
print(a,b,j)
print(type(a,b,j))
'''

# Check true
a = True
print(bool(a))
# Check false
a = False
print(bool(a))
# Check 0
a = 0.0
print(bool(a))
# Check 1
a = 1.0
print(bool(a))
# Check Equality
a = 5
b = 10
print(bool( a==b))
# Check None
a = None
print(bool(a))
# Check an empty sequence
a = ()
print(bool(a))
# Check an emtpty mapping
a = {}
print(bool(a))
# Check a non empty string
a = 'Tutorialspoint'
print(bool(a))

#for x in range():
 #   print(a)

def checkVowel(n):
   match n:
      case 'a': return "Vowel alphabet"
      case 'e': return "Vowel alphabet"
      case 'i': return "Vowel alphabet"
      case 'o': return "Vowel alphabet"
      case 'u': return "Vowel alphabet"
      case _: return "Simple alphabet"
print (checkVowel('i'))
print (checkVowel('u'))
print (checkVowel('o'))

var = 100
if ( var == 100 ) : print ("Value of expression is 100")
print ("Good bye!")