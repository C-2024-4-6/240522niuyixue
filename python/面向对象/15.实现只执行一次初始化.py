class Musicplayer():
    
    instance= None

    #记录是否执行过初始化动作
    initf = False

    def __new__(cls,*args,**kwargs):
        
        if cls.instance is None:        
            
            cls.instance=super().__new__(cls)
            
        
        return cls.instance

    def __init__(self):
        
        # 1.判断是否执行过初始化动作
        if Musicplayer.initf:
            return
            
            # 2.如果没有执行过，在执行初始化动作
            print ("初始化播放器")
            
            # 3.修改类属性的标记
        else:
            Musicplayer.initf = True


        print('初始化完成')
    
player1 = Musicplayer()
player2 = Musicplayer()

print(player1)
print(player2)
