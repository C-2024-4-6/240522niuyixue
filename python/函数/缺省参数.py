#缺省参数在没有调用值时，使用定义时时的默认值
def panduan(name,gender=True):

    '''Ture是gender默认值'''
    a='男生'
    if not gender:
       a='女生'
    print('%s是%s'%(name,a))

panduan('小明')
#默认为男生
panduan('小没',0)
#gender为False为女生
