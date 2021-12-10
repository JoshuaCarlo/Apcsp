#the bids and goal price is listed here and can all be adjusted
#the bids start off with a value of 1000 due to them later on being 
#sorted through ascending order meaning the lowest one has to be correct
rightPrice = 280
list = [200, 300, 250, 1, 950, 40]
bid1 = 1000
bid2 = 1000
bid3 = 1000
bid4 = 1000
bid5 = 1000
bid6 = 1000
#The section below is for sorting the lists and it eliminates the 
#bids that go over the right price along with then comparing
#how far off in amount the numbers that are not above the price
#are from the right price.
#if a value is over the right price, it maintains its original value of 1000 and gets sorted to the back of the list
if(list[0] < rightPrice):
    bid1 = rightPrice - list[0]
if(list[1] < rightPrice):
    bid2 = rightPrice - list[1] 
if(list[2] < rightPrice):
    bid3 = rightPrice - list[2] 
if(list[3] < rightPrice):
    bid4 = rightPrice - list[3]
if(list[4] < rightPrice):
    bid5 = rightPrice - list[4]
if(list[5] < rightPrice):
    bid6 = rightPrice - list[5] 
#The update to the list below finally sorts the numbers based on ascending numerical order
#and finally, the lowest value is the difference of its original form from 280
#which is then added back to 280 based on what is the lowest value on the list 
#the closest number is then printed
list = [bid1,bid2,bid3,bid4,bid5,bid6]
list.sort()
print(rightPrice-list[0])
