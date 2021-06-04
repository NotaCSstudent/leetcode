  def isPalindrome(self, x: int) -> bool:
        if(x<0):
            return False
        elif(x<10):
            return True;
        elif(x>10):
            reverse = str(x)
            reverse = reverse[::-1]
            reverse = int(reverse)
            if(x==reverse):
                return True;
            else:
                return False