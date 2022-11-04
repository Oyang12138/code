#!/usr/bin/python3
 
def testHello():
	print ("Hello, Python!")
	print()
 	
def testDebug():
 	# 第一个注释
	# 第二个注释
	 
	'''
	第三注释
	第四注释
	'''
	 
	"""
	第五注释
	第六注释
	"""


	if True:
	    print ("True")
	else:
	    print ("False")
	    print("\n")
	    
def testStr():
	str = "abcdefg"

	print(str[0:])
	print(str[0:-1])
	print(str[0:4:3])
	print(str[0])
	print(str*2)
	print(str[3] + "111")

	print("\n")
	print(r"\n")
	
	del str
	
def testDataType():
	counter = 100          # 整型变量
	miles   = 1000.0       # 浮点型变量
	name    = "runoob"     # 字符串

	print (counter)
	print (miles)
	print (name)

def testSet():
    sites = {"a","b","c","d","a"}
    print(sites)

    # 成员测试
    if 'b' in sites :
        print('b 在集合中')
    else :
        print('b 不在集合中')

    # set可以进行集合运算
    a = set('chinese')
    b = set('china')

    print(a)
    print(a - b)     # a 和 b 的差集
    print(a | b)     # a 和 b 的并集
    print(a & b)     # a 和 b 的交集
    print(a ^ b)     # a 和 b 中不同时存在的元素

def testDictionary():
    firstDict = {}
    firstDict['one'] = "1 - 菜鸟教程"
    firstDict[2]     = "2 - 菜鸟工具"
    print (firstDict['one'])       # 输出键为 'one' 的值
    print (firstDict[2])           # 输出键为 2 的值
    print (firstDict)              # 输出

    secondDict = {'name': 'Oyang','code':1, 'site': 'baidu.com'}
    print (secondDict)          # 输出完整的字典
    print (secondDict.keys())   # 输出所有键
    print (secondDict.values()) # 输出所有值

def testRecycle():
    str = "123456789"
    i = 0
    while i < 9:
        #print(str[i])
        #print(str[i], end = "\n")
        if i != 8:
            print(str[i], end = " ")
        else:
            print(str[i])
        i = i + 1

    for n in str:
        print(n)
        if n == "5":
            i = n
            site = {}
            for m in site:
                print(m)
            else:
                print("no data in here, i: " + i)
            break

def testIO():
    strData = input("please input a number with 1-9: \n")
    site = {"1","2","3","4","5","6","7","8","9"}
    flag = 1;
    count = 1;
    for i in site:
        if i == strData:
            break
        if count == 9 and strData != i:
            flag = 0
        count += 1

    if flag == 0:
        print("over round or error!")
    else:
        n = int(strData)
        print("already input a number that is " + strData)
        x = y = n
        signal = "-----"
        print(signal * 12)
        while x >= 1:
            while y >= 1:
                result = x * y
                print(str(x) + "*" + str(y) + "=" + str(result), end = " ")
                y -= 1
            x -= 1
            y = x
            print()
        print(signal[0:-1])
        
def testExit():
	input("enter to exit")

#testHello()
#testStr()
#testDataType()
#testSet()
#testDictionary()
#testRecycle()
#testIO()
testExit()
