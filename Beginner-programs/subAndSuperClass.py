class mymotherclass:
    var1 = "I am var one"
class me(mymotherclass):
    var2 = "I am var two"

me1 = mymotherclass()
print me1.var1
me2 = me()
print me2.var2
print me2.var1
