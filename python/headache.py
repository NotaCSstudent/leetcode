def solve(self, s):
        n=len(s)
        list = []
        temp = []
        i=0
        j = 0
        sum=0
        while(j<len(s)):
           
            if(s[i]==s[j]):
                temp.append(s[j])
               
                j+=1
            else:
                list.append(temp)
                temp = []
                i=j
        for i in range(len(list)):
            sum += len(list[i])
                    

        temp = [] 
        for i in range(sum,len(s)):
            
            temp.append(s[i])
        
        list.append(temp)
      
        g = ""

        #g = str(len(list[1])) + list[1][0]
        print(g)
        print(list)
        for i in range(len(list)):
            g += str(len(list[i])) + list[i][0]

      


        list.append(temp)
        print(sum)
        print(s)

        return g
