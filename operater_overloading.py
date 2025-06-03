class Order:
  def __init__(self,item,price):
        self.item = item
        self.price = price
  def __gt__(self,obj):
      price1 = self.price
      price2 = obj.price
      return self.price>obj.price



i1=Order("phone", 20000)
print(i1.item)
print(i1.price)
i2=Order("apple", 20)
i3=Order("purse", 1000)

result = i1>i3#i2.__gt__(i3)
print(result)
